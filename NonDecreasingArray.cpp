/*We define an array is non-decreasing if nums[i] <= nums[i + 1] holds for every i (0-based) such that (0 <= i <= n - 2).

Input: nums = [4,2,3]
Output: true
Explanation: You could modify the first 4 to 1 to get a non-decreasing array.

LOGIC:
    we can simply use a count variable to solve this,
    
CODDE:    */

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=1, i=0,min=INT_MIN;
        while(i<nums.size()-1)
        {
           
                if(nums[i]<=nums[i+1])
                {
                    min=nums[i];
                }
               else
                {
                if(nums[i+1]<min)
                 nums[i+1]=nums[i];
                count--;
               }
            i++;
                
            }
        if(count<0)
      return false;
        else
            return true;
        
    }
};
