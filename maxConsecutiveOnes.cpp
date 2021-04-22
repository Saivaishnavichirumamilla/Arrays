#Given a binary array nums, return the maximum number of consecutive 1's in the array.
#Input: nums = [1,1,0,1,1,1]
#Output: 3


#code

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                count++;
                continue;
            }
            else
            {
                if(count>max)
                    max=count;
                count=0;
            }
            
        }
        if(count>max)
            max=count;
        return max;
        
    }
};
