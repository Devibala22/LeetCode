#include <string.h>
#include <stdlib.h>

// Helper: expand around center
int expandAroundCenter(char *s, int left, int right) {
    int n = strlen(s);
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;  // length of palindrome
}

char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n == 0) return "";

    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        int len1 = expandAroundCenter(s, i, i);       // odd length
        int len2 = expandAroundCenter(s, i, i + 1);   // even length
        int len = (len1 > len2) ? len1 : len2;

        if (len > end - start + 1) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }

    int length = end - start + 1;
    char *res = (char*)malloc((length + 1) * sizeof(char)); // allocate memory
    strncpy(res, s + start, length);
    res[length] = '\0'; // null terminate

    return res;
}
