# hamming距离计算 #
#难点在按位异或之后，怎么计算1的数量
这道题是最常见的面试题排名第一，主要还是关于计算机基本位运算的题  

## 1.C++ ##
C里面主要用bit移位运算，而这个解答比较巧妙地使用了和n-1进行与运算从而，将后面已计数的bit位置零。 
 
	int hammingDistance(int x, int y) {
    int dist = 0, n = x ^ y;
    while (n) {
    	dist++;
    	n = n & (n - 1);//与n-1与运算，每一次计算把后面记完数的置零
    }
    return dist;
## 2.C ##
主要采用移位，右移一位则左边补零，左移同理，如果右移一位，再左移一位的结果和之前一致，则表示该数最后bit为0.  

int hammingDistance(int x, int y) {
    
    int tmpInt=x^y;
    int dis=0;
    
    while(tmpInt)
    {
        if((tmpInt>>1)<<1 != tmpInt)
        {
            ++dis;
        }
        
        tmpInt>>=1;
    }
    
    return dis;
}

## 3.Python ##
思路清晰，一行实现。每位异或操作，然后计数1的次数

	def hammingDistance(self, x, y):
	        """
	        :type x: int
	        :type y: int
	        :rtype: int
	        """
	        return bin(x^y).count('1')