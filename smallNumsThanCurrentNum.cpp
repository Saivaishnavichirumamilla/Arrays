#Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
#Return the answer in an array.

#Input: nums = [8,1,2,2,3]
#Output: [4,0,1,1,3]

#solution:
#we can solve this by iterating two for loops
#but it takes O(n^2) time
#so efficent one is sorting and using map

#CODE:

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;    
        int n=nums.size();
        vector<int> snum=nums;
        
        sort(snum.begin(),snum.end());
        for(int i=n-1;i>=0;i--)
            mp[snum[i]]=i;
#AS map stores elements in sorted order when we access a number that is repeated in the input array,it always gives the least count numner as it is sorted
        for(int i=0;i<n;i++)
         nums[i]=mp[nums[i]];           
        

       return nums; 
    }
};
