#Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
#Given a balanced string s, split it in the maximum amount of balanced strings.
#Return the maximum amount of split balanced strings.
 

#Input: s = "RLRRLLRLRL"
#Output: 4
#Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

#CODE

class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int l=0,r=0,i=0,count=0;
        
        while(i<n)
        {
            if(l==r&&l!=0)
            {
                count++;
                l=0;
                r=0;
            }
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            i++;
        }
         if(l==r)
            {
                count++;
                l=0;
                r=0;
            }
        return count;
        
    }
};

#WE CAN ALSO IMPLEMENT THIS USING STACK IN THE FOLLOWING WAY
class Solution 
{
public:
    int balancedStringSplit(string s) 
    {
        int count = 0;
        char start;
        stack<char> mystack;
        
        for ( char i:s ) {
            if ( mystack.empty() ) 
                start = i;
            
            if ( i == start ) 
                mystack.push(i);
            else 
                mystack.pop();
            
            if ( mystack.empty() ) 
                count++;
        }
        return count;
    }
};










