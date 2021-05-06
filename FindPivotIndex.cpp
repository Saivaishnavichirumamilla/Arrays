/*The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.
 
 Input: nums = [1,7,3,6,5,6]
Output: 3

LOGIC: 
    --Using prefixsum concept.
    
 CODE:*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0,right=0,i=0;
        while(i<nums.size())
        {
            right=right+nums[i];
            i++;
        }
        right=right-nums[0];
        if(left==right)
            return 0;
        
        for(int i=1;i<nums.size();i++)
        {
           left=left+nums[i-1];
            right=right-nums[i];
            if(left==right)
                return i;
        }
        return -1;
    }
};
