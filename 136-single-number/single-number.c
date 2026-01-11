int singleNumber(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<numsSize;i++){
        result=result^nums[i];//using XOR for reducing memory 
    }
    return result;
}