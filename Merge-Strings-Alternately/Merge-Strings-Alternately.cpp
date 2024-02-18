class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string results ="";

        for(int i=0; i< max(word1.size(), word2.size()); i++) {
            if(i<word1.size())
            {
                results.push_back(word1[i]);
            }
            if(i<word2.size())
            {
                results.push_back(word2[i]);
            }
        }
        return results;
    }
};
