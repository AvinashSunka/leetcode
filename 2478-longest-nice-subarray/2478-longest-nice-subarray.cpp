class Solution {
public:
    int longestNiceSubarray(vector<int>& arr) {
    int n = arr.size();
    int first = 0, last = 0, count = 0, bitmask = 0;

    while (last < n) {
        if ((bitmask & arr[last]) == 0) { 
            bitmask |= arr[last]; 
            count = max(count, last - first + 1);
            last++;
        } else {
            bitmask &= ~arr[first]; 
            first++;
        }
    }
    return count;
    }
};