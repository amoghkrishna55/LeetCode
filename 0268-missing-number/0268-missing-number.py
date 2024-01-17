class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        size = len(nums)
        total = (size * (size + 1)) // 2
        for num in nums:
            total -= num
        return total