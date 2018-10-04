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
            if dict. __contains__(other): # and dict.get(other)!=i: 这里都是单个元素的填充，字典不会考虑重复元素double情况
                return [dict.get(other),i] #这种方法先要把第一个放进字典，所以最后找到的时候是找的other是第一个键值，i是当前的键值
            else:
                dict[nums[i]]=i
                
    def twoSum_follow_up(self, nums, target):
        dict={}
        result=[]
        for i in range(len(nums)):
            dict[nums[i]]=i
        for i in range(len(nums)):
            other=target-nums[i]
            if dict. __contains__(other):# and dict.get(other)!=i:#考虑元素可以重复利用，同时结果可以多个。
                result.append([i,dict.get(other)])
                dict.pop(nums[i])#删除已有的结果，防止出现[1,3]和[3,1]
        if len(result)==0:
            return [-1,-1]
        elif len(result)==1:
            return result[0]
        else:
            return result
            
            
if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    # print(Solution().twoSum(nums, target))
    assert (Solution().twoSum(nums, target) == [0, 1])
    nums = [3, 2, 4]
    target = 6
    assert (Solution().twoSum(nums, target) == [1, 2])
    
    
    nums = [2, 1, 4]
    target = 4
    # print(Solution().twoSum_follow_up(nums, target))
    assert (Solution().twoSum_follow_up(nums, target) == [0, 0])
    nums = [2, 1, 4, 3]
    target = 4
    # print(Solution().twoSum_follow_up(nums, target))
    assert (Solution().twoSum_follow_up(nums, target) == [[0, 0], [1, 3]])
