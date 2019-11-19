/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){

    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i] += carry;
        carry = digits[i] / 10;
        if (carry == 0)
            return digits;
        digits[i] %= 10;
    }
    if (carry == 1){
        digits[0]++;
    }
        
    //returnSize = (int *) malloc(sizeof(int) * digitsSize);
    * returnSize = digitsSize;

    return digits;
};

}
