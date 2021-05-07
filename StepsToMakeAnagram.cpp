/*An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.
 
 Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.

LOGIC:
   use map to store the frequency of characters in a string t.
   
CODE:   
*/

class Solution {
public:
    int minSteps(string s, string t) {
        int res=0;
        unordered_map<char,int>tmp;
        for(int i=0;i<t.length();i++)
            tmp[t[i]]++;
        for(int i=0;i<s.length();i++)
        {
            if(tmp.find(s[i])!=tmp.end())
                tmp[s[i]]--;
            else
                res++;
            if(tmp[s[i]]==0)
                tmp.erase(s[i]);
        }
        
        return res;
        
    }
};
