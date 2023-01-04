# #third maximum number 

# list=[3,2,1]

# print(list[2])

class Solution(object):
    def thirdMax(self, nums):
        arr = [float('-inf'), float('-inf'), float('-inf')]
        for num in nums:
            if num not in arr:
                if num > arr[0]:   arr = [num, arr[0], arr[1]]
                elif num > arr[1]: arr = [arr[0], num, arr[1]]
                elif num > arr[2]: arr = [arr[0], arr[1], num]
        return max(nums) if float('-inf') in arr else arr[2]