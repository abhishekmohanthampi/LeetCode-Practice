/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* arr=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int left=0;
    int right=numsSize-1;
    int i=numsSize-1;
    while(left<=right){
        if((nums[left]*nums[left])>(nums[right]*nums[right])){
            arr[i]=nums[left]*nums[left];
            left++;
        }
        else{
            arr[i]=nums[right]*nums[right];
            right--;
        }
         i--;
    }
   
    return arr;
}