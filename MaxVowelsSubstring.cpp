#Maximum Number of Vowels in a Substring of Given Length

#Given a string s and an integer k.
#Return the maximum number of vowel letters in any substring of s with length k.
#Vowel letters in English are (a, e, i, o, u).

#sample output
#Input: s = "abciiidef", k = 3
#Output: 3
#Explanation: The substring "iii" contains 3 vowel letters

#LOGIC

#Use sliding window concept
#use a window of fixed size k and move it through the string


#CODE
class Solution {
public:
    int maxVowels(string s, int k) {
        int l=s.length();
        int i=0;
        int vowel=0,max=INT_MIN;
        while(i<l)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vowel++;
                
            }
            if(i>=(k-1))
            {
                if(vowel>max)
                    max=vowel;
                if(s[i-(k-1)]=='a'||s[i-(k-1)]=='e'||s[i-(k-1)]=='i'||s[i-(k-1)]=='o'||s[i-(k-1)]=='u')
                    vowel=vowel-1;
                
            }
            i++;
        }
        return max;
    }
};
