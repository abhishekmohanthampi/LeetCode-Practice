int missingNumber(int* nums, int numsSize) {
    int i,expsum=0;
    expsum=(numsSize*(numsSize+1))/2;
    int orgsum=0;
    for(i=0;i<numsSize;i++){
        orgsum+=nums[i];
    }
    return expsum-orgsum;
}