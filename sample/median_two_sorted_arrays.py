class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        merged_list=sorted(nums1+nums2)
        
        
        x=len(merged_list)
        if(x%2==0):
            k=x//2
            median=(merged_list[k-1]+merged_list[k])/2.0
            
        else:
            k=x//2
            median=merged_list[k]
        return median
            
