class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        return bin(x^y).count('1')
            
            
if __name__ == "__main__":
    x = 1
    y = 4

    assert (Solution().hammingDistance(x, y) == 2)

