int maximumDifference(int* nums, int numsSize) {
    int i;
    int min=nums[0];
    int maxdiff=-1;
    for(i=1;i<numsSize;i++){
        if(nums[i]>min){
            int diff=nums[i]-min;
        if(diff>maxdiff){
            maxdiff=diff;
        }
        }
         if(nums[i]<min){
            min=nums[i];
        }
    }
    return maxdiff;
}