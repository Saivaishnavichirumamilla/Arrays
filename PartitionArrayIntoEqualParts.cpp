/* SAMPLE INPUT
Input: arr = [0,2,1,-6,6,-7,9,1,2,0,1]
Output: true
Explanation: 0 + 2 + 1 = -6 + 6 - 7 + 9 + 1 = 2 + 0 + 1

LOGIC:
    Get the sum of all elements and divide it by 3 .i.e. sum1=sum/3;
    and iterate through the array and find the subbarray sum=sum1
    if no. of sum1's greater than 2 , return true
    
CODE:    */

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0,count=0,sum1;
        for(int i=0;i<arr.size();i++)
            sum=sum+arr[i];
        
         sum1=sum/3;
        if(sum%3!=0)
            return false;
        
        sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if(sum==sum1)
            {
                sum=0;
                count++;
                if(count==3)
                    break;
    
        
            }
            
        }
        if(count==3)
            return true;
        else 
            return false;
        
        
    }
};
