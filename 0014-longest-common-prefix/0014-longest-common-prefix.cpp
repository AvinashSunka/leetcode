class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "", word = strs[0];
        int count = 0;
        for(auto ch : word)
        {
            for(auto words : strs)
            {
                if(words[count] != ch)
                {
                    return answer;
                }
            }
            answer += ch;
            count++;
        }
        return answer;
    }
};