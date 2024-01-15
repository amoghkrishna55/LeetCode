class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        sum = 200
        for i in strs:
            if len(i)<sum:
                sum = len(i)
        for i in range(sum):
            x= 0
            if len(strs)==1:
                ans+= strs[0][i]
            elif len(strs)==0:
                break
            for j in range(1,len(strs)):
                if strs[0][i] == strs[j][i]:
                    x = 1
                else:
                    x = 0
                    break
            if x == 1:
                ans+= strs[0][i]
            else:
                break
        return ans
