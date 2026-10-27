class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        op = []

        for i in nums1:
            if i in nums2:
                op.append(i)
                nums2.remove(i)

        return op