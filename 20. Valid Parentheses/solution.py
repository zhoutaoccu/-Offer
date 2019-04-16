class Solution:
    def isValid(self, s: str) -> bool:
        my_list = []
        dict = {'(':')','[':']','{':'}'}
        for char in s:
            if char == '(' or char == '[' or char == '{':
                my_list.append(char)
            elif len(my_list) != 0 and dict[my_list[-1]] == char:
                my_list.pop()
            else:
                return False
        return len(my_list)==0    
            
if __name__ == "__main__":
    x = "{[([{}[]])({})]}"
    y = "{([{}[]])({})]}"
    z = "]]]]]]]"
    k = "[]]"

    assert (Solution().isValid(x) == True)
    assert (Solution().isValid(y) == False)
    assert (Solution().isValid(z) == False)
    assert (Solution().isValid(k) == False)

