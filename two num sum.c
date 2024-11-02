/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j;
    static int index[2];
    *returnSize=2;
    for(i=0;i<numsSize;i++)
    {    for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {      index[0]=i;
                   index[1]=j;
                    return index;
            }   
        }       
    }
    return 0;
}