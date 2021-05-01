/*#Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
 
##Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
#Output: 6
#Explanation: [1,1,1,0,0,1,1,1,1,1,1]
#Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

#LOGIC
#Using sliding window concept;
#count the zeroes and if number  of zeroes greater than k,check for the first zero using while loop by increasing left and decrease count...

#CODE*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int count=0;
        int Max=0;
        
        
        int n=nums.size();
        while(right<n)
        {
            
            
            if(nums[right]==0)
            {
                count++;
            }  
             if(count<=k)
                 Max=max(Max,(right-left+1));
            
            
            else
            {
                
                while(count>k)
                {
                if(nums[left]==0)
                    count--;
                left++;
                }
            
                    
             }
            right++;
            
                
        }
        return Max;
        
        
    }
};
