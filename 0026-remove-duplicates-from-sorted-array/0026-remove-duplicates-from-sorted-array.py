class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        flag = 1
        curr = nums[0]
        for i in range(1,len(nums)):
            if(nums[i]!=curr):
                nums[flag] = nums[i]
                curr = nums[i]
                flag += 1
        return flag