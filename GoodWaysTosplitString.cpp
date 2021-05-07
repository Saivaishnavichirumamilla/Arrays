/*Input: s = "aacaba"
Output: 2
Explanation: There are 5 ways to split "aacaba" and 2 of them are good. 
("a", "acaba") Left string and right string contains 1 and 3 different letters respectively.
("aa", "caba") Left string and right string contains 1 and 3 different letters respectively.
("aac", "aba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aaca", "ba") Left string and right string contains 2 and 2 different letters respectively (good split).
("aacab", "a") Left string and right string contains 3 and 1 different letters respectively.

LOGIC:
   use two hashmaps unorderedmaps
     1.one is for left string
     2.two is for right string and compare the sizes
     
 
 CODE:*/

class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>left;
        unordered_map<char,int>right;
        int count=0;
        left[s[0]]=1;
        for(int i=1;i<s.length();i++)
        {
            right[s[i]]++;
        }
        if(left.size()==right.size())
            count++;
        for(int i=1;i<s.length();i++)
        {
            left[s[i]]++;
            if(right[s[i]]==1)
                right.erase(s[i]);
            else
                right[s[i]]--;
            if(left.size()==right.size())
            count++;
            
        }
        return count;
        
        
    }
};
