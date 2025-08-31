#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* minOperations(char* boxes, int* returnSize) {
    int len = strlen(boxes);
    int* ans = (int*)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++) {
        int count = 0;  // reset for each i
        for (int j = 0; j < len; j++) {
            if (boxes[j] == '1') {   // ball present in box j
                count += abs(i - j); // add distance
            }
        }
        ans[i] = count;  // store result
    }

    *returnSize = len;
    return ans;
}
