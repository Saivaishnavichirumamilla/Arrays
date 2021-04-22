#Given an array of strings products and a string searchWord. We want to design a system that suggests at most three product names from products after each character of searchWord is typed. Suggested products should have common prefix with the searchWord. If there are more than three products with a common prefix return the three lexicographically minimums products.
#Return list of lists of the suggested products after each character of searchWord is typed.
 

#Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
#Output: [
["mobile","moneypot","monitor"],
["mobile","moneypot","monitor"],
["mouse","mousepad"],
["mouse","mousepad"],
["mouse","mousepad"]


#code

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int l=searchWord.length();
        int i=0;
        vector<vector<string>>res(l,vector<string>{});
        sort(products.begin(),products.end());
        
            for(int j=0;j<products.size();j++)
            {
                for(int k=0;k<l;k++)
                {
                    if(searchWord[k]!=products[j][k])
                        break;
                    if(searchWord[k]==products[j][k]&&res[k].size()<3)
                        res[k].push_back(products[j]);
                }
            }

        
        return res;


    }
};


#while declaring a 2-d array of strings,mention size and vector<string>{};











