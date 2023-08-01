class Solution:
    def longestPalindrome(self, s: str) -> str:
        ans = s[0]
        for i in range(0,len(s)):
            x = s[i]
            for j in range(i+1,len(s)):
                x+=s[j]
                if x == x[::-1]:
                    if len(x)>len(ans):
                        ans = x
        return ans
