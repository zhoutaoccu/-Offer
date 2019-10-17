#include <stdio.h>

def binary_search(array, query):
    lo, hi = 0, len(array) - 1
    while lo <= hi:
        mid = (hi + lo) // 2
        val = array[mid]
        if val == query:
            return mid
        elif val < query:
            lo = mid + 1
        else:
            hi = mid - 1
    return None

int searchInsert(int *nums, int numsSize, int target)
{
    int low, high, mid, val;
    low = 0;
    high = numsSize - 1;
    while(low <= high){
        mid = (low + high) / 2;
        val = nums[mid];
        if (target == val){
            return mid;
        }
        else if (target > val){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return high + 1;
}




