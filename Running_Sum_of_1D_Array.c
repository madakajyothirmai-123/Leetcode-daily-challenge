int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result=(int*)malloc(numsSize*sizeof(int));
    int i;
    result[0]=nums[0];
    for(i=1;i<numsSize;i++){
        result[i]=result[i-1]+nums[i];
    }
    *returnSize=numsSize;
    return result;

    
}