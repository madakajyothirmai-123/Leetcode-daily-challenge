int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int maxWater=0;
    while(left<right){
        int width=right-left;
        int smallerHeight;
        if(height[left]<height[right]){
            smallerHeight=height[left];
        }
        else{
            smallerHeight=height[right];
        }
        int water=smallerHeight*width;
        if(water>maxWater){
            maxWater=water;
        }
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxWater;
}