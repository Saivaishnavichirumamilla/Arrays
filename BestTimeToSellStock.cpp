/* You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

LOGIC-1
using two loops and fnding the maxin the next subarray and getting max profit as in the following code:

CODE-----*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        if(prices.size()<2)
            return 0;
        for(int i=0;i<(prices.size()-1);i++)
        { 
            for(int j=i+1;j<prices.size();j++)
            {
                
                if(prices[j]>prices[i])
                    maxi=max(maxi,prices[j]-prices[i]);
            }       
        }
        return maxi;
        
        
    }
};

/*LOGIC-2  by subtracting the min from the elemets by iterating through the array:
        Or by subrtracting elements from max by iterating through rightside of array
        

CODE----*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=INT_MIN, min=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
                min = prices[i];
            if((prices[i]-min)>max)
                max=prices[i]-min;
        }
        return max;
    }
        
        
    
};

