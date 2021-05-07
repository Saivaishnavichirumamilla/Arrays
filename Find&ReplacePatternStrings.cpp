/*A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
(Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.)
Return a list of the words in words that match the given pattern. 
You may return the answer in any order.
 
 Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation,
since a and b map to the same letter

LOGIC:
    use two maps to check the domain and codomain values.
 CODE:   
    */

bool match(string word,string pattern)
{
    unordered_map<char,char>mp;
    unordered_map<char,char>pm;
    for(int i=0;i<word.length();i++)
    {
        if(mp.find(pattern[i])!=mp.end())
        {
            if(mp[pattern[i]]!=word[i])          /*a->m,b->e,b->e*/
                return false;
        }
        else
            mp[pattern[i]]=word[i];
        if(pm.find(word[i])!=pm.end())
        {
            if(pm[word[i]]!=pattern[i])           /*m->e,e->b,e->b*/
                return false;
        }
        else
            pm[word[i]]=pattern[i];
        
    }
    return true;
}
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        for(auto word:words)
        {
            if(match(word,pattern)==true)
                res.push_back(word);
        }
        return res;
        
    }
};
