/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *arr=(int *)malloc(2*sizeof(int));
    int left=0;
    int right=numbersSize-1;
    *returnSize=2;
    while(left<right){
        int tsum=numbers[left]+numbers[right];
        if(tsum==target){arr[0]=left+1;
                        arr[1]=right+1;
                        return arr;}
        if(tsum<target){left++;}
        if(tsum>target){right--;}
    
}
    return NULL;}