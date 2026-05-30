#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int i,j;
    int* result=(int*)malloc(2*sizeof(int));
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
        }
    }
    return NULL;
}
