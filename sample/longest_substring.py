class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        seen=set()
        start=0
        max_len=0
        
        for i in range(len(s)):
            while s[i] in seen:
                seen.remove(s[start])
                start+=1
            seen.add(s[i])
            max_len=max(max_len,i-start+1)
        return max_len
