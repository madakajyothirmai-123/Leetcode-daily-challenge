int maxProduct(int* nums, int numsSize)
{
    int i;

    int currentMax = nums[0];
    int currentMin = nums[0];

    int answer = nums[0];

    for(i = 1; i < numsSize; i++)
    {
        if(nums[i] < 0)
        {
            int temp = currentMax;
            currentMax = currentMin;
            currentMin = temp;
        }

        if(nums[i] > currentMax * nums[i])
        {
            currentMax = nums[i];
        }
        else
        {
            currentMax = currentMax * nums[i];
        }

        if(nums[i] < currentMin * nums[i])
        {
            currentMin = nums[i];
        }
        else
        {
            currentMin = currentMin * nums[i];
        }

        if(currentMax > answer)
        {
            answer = currentMax;
        }
    }

    return answer;
}