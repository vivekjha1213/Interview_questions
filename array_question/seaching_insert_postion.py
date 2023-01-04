#seacring insert position leet code  35.

from tree.node_searching import searching
from typing import List


class solution:
    def searchinsert(self, nums : List[int], target: int )-> int:
        l, r=0,len(nums)-1

        while(l<=r):
            mid = l(r-r)/2
        if nums[mid]<target:
            l=mid+1
        else:
            if(nums[mid]>target):
                r = mid-1
            else:
                return mid
        return l

