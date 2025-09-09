class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
     
        res = []
        digitToChar = {
            '2': "abc",
            '3': "def",
            '4': "ghi",
            '5': "jkl",
            '6': "mno",
            '7': "pqrs",
            '8': "tuv",
            '9': "wxyz"
        }
        
        def backtrack(i, curstr):
            # If current string length equals digits length, add to results
            if i == len(digits):
                res.append(curstr)
                return
            
            # Get letters corresponding to current digit
            letters = digitToChar[digits[i]]
            
            # For each letter, recurse to next digit
            for c in letters:
                backtrack(i + 1, curstr + c)
        
        if digits:
            backtrack(0, "")
        
        return res
        
