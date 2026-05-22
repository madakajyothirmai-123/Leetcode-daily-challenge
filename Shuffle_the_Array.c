int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i,j=0;
    int* result=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<n;i++){
        result[j]=nums[i];
        j++;
        result[j]=nums[i+n];
        j++;
    }
    *returnSize=numsSize;
    return result;
}