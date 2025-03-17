class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int, int> hashmap;
        unordered_set <int> hashset;
        for(auto i : nums)
        {
            hashmap[i]++;
            hashset.insert(i);
        }

        for(auto i : hashset)
        {
            if(hashmap[i]%2 == 1)
            {
                return false;
            }
        }
        return true;
    }
};