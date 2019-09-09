#
# @lc app=leetcode id=46 lang=python3
#
# [46] Permutations,全排列
# input:List[]
# output:List[List[]]

class Solution:
    def permute(self, nums):
        def dfs(nums,path,res,visited): #path是一个项，res是结果,visited为下标集合
            if (len(nums) == len(path)):
                res = res.append(path+[]) 
                return 
            for i in range(len(nums)):
                if i not in visited: #nums[i]
                    path.append(nums[i])
                    visited.add(i)
                    dfs(nums,path,res,visited)
                    # 
                    path.pop()
                    visited.discard(i)
        res = []
        path = []
        visited =  set([])
        dfs(nums,path,res,visited)
        return res
            
            
if __name__ == "__main__":
    x = [1,2,3]
    print(Solution().permute(x))
    print(len(Solution().permute(x)))
    assert (Solution().permute(x) == [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]])