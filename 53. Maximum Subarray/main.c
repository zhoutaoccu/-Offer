

int maxSubArray(int* nums, int numsSize){
    int sum = nums[0];
    int cursum = nums[0];
    for (int i = 1; i < numsSize; i++){
        if (cursum > 0){
            cursum += nums[i]; /* 此时只会晒选正数，对于负数直接抛弃 */
        }
        else{
            cursum = nums[i];
        }
        if (cursum > sum) sum = cursum;
        
    }
    return sum;
}

