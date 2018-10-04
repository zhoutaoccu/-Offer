class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ## Two-pass Hash Table
        # dict={}
        # for i in range(len(nums)):
            # dict[nums[i]]=i
        # for i in range(len(nums)):
            # other=target-nums[i]
            # if dict. __contains__(other) and dict.get(other)!=i:#py2 has_key
                # return [i,dict.get(other)]
        # return [-1,-1]
        
        ## One-pass Hash Table
        dict={}
        for i in range(len(nums)):
            other=target-nums[i]
            if dict. __contains__(other) and dict.get(other)!=i:
                return [dict.get(other),i]#这种方法先要把第一个放进字典，所以最后找到的时候是找的other是第一个键值，i是当前的键值
            else:
                dict[nums[i]]=i
if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    # print(Solution().twoSum(nums, target))
    assert (Solution().twoSum(nums, target) == [0, 1])
    nums = [3, 2, 4]
    target = 6
    assert (Solution().twoSum(nums, target) == [1, 2])