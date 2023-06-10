class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        n1=m-1
        n2=n-1

        for x in range(m+n-1, -1,-1):
            if(n2 < 0):
                break
            if(nums1[n1]> nums2[n2] and n1 >=0):
                nums1[x]=nums1[n1]
                n1=n1-1

            else:
                nums1[x]=nums2[n2]
                n2=n2-1
