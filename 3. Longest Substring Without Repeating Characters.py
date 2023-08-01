class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        sub = []
        temp = ''
        for i in s:
            if i not in temp:
                temp += i
            else:
                sub.append(temp)
                temp = temp[temp.index(i) + 1:] + i
        sub.append(temp)
        
        ans = 0
        for i in sub:
            if len(i) > ans:
                ans = len(i)
        return ans