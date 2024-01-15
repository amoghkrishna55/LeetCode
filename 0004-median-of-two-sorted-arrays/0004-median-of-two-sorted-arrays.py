class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        num3 = nums1 + nums2
        num3 = sorted(num3)
        print (num3)
        if len(num3)%2==0:
            median = (num3[len(num3)/2-1] + num3[(len(num3)/2)])/2.0
        elif len(num3)%2!=0 and len(num3)!=1:
            median = num3[(len(num3)+1)/2-1]
        else:
            median = num3[0]
        return median