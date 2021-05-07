/*A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

CODE:*/

class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            int len=1;
            int j=i;
            while(j<s.length())
            {
            string sub1=s.substr(i,len);
                reverse(sub1.begin(),sub1.end());
        
                if((sub1.compare(s.substr(i,len)))==0)
                    count++;
                j++;
                len++;
            }
        }
        return count;
    }
};
