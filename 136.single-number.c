/*
 * @lc app=leetcode id=136 lang=c
 *
 * [136] Single Number
 */

// @lc code=start



// int singleNumber(int* nums, int numsSize)
// {
//     int n = nums[0];
//     for (int i = 1; i < numsSize; i++)
//     {
//         n = n ^ nums[i];
//     }
    
//     return n;
// }

// @lc code=end



int singleNumber(int* nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {   int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            return nums[i];
        }
        
    }

    return -1;   
}