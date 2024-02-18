## 1768. Merge Strings Alternately
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/merge-strings-alternately/description/)

![](https://badgen.net/badge/Level/Easy/green)

### My Approach
To merge the given words, I used a single pointer.
Here are the steps:
- Create two variables, `m`, and `n`, to store the length of `word1` and `word2`.
- Create an empty string variable result to store the result of merged words.
- Iterate over `word1` and `word2` using a loop running from `i = 0` to `i < max(m, n)` and keep incrementing i by 1 after each iteration:
- If `i < m`, it means that we have not completely traversed word1. As a result, we append word1[i] to result.
- If `i < n`, it means that we have not completely traversed word2. As a result, we append word2[i] to result.
- Return results.

### Time and Auxiliary Space Complexity

- **Time Complexity:** `O(m+n)`, We iterate over word1 and word2 once pushing their letters into result. It would take (m + n) time.
  
- **Auxiliary Space Complexity:** `O(1)`, Without considering the space consumed by the input strings (word1 and word2) and the output string (result), we do not use more than constant space.

### Code (C++)

```cpp
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
```

### Contribution and Support

For discussions, questions, or doubts related to this solution, please visit our [discussion section](https://github.com/Rahul7raj/DSA-Trending-75/discussions). We welcome your input and aim to foster a collaborative learning environment.

If you find this solution helpful, consider supporting us by giving a `⭐ star` to the [Rahul7raj/DSA-Trending-75](https://github.com/Rahul7raj/DSA-Trending-75) repository.
