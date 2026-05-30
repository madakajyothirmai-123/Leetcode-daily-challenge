int maxSubArray(int* nums, int numsSize) {
    int i;
    int currentsum=nums[0];
    int maximumsum=nums[0];
    for(i=1;i<numsSize;i++){
        if(currentsum<0){
            currentsum=0;
        }
        currentsum=currentsum+nums[i];
        if(currentsum>maximumsum){
            maximumsum=currentsum;
        }
    }
    return maximumsum;

}
