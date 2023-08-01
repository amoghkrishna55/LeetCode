class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s[::-1]
        print (a)
        ans = ""
        x = 0
        for i in a:
            if i == " " and x == 1:
                break
            elif i != " ":
                x = 1
                ans += i
        return len(ans)