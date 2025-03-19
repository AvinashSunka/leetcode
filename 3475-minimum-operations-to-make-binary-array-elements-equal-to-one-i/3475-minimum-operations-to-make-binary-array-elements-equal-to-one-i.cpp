class Solution {
public:
    int minOperations(vector<int>& nums) {
        int left = 0, right = 2, n = nums.size(), index = 0, i, count = 0;
        while(right < n)
        {
            if(nums[left] == 0)
            {
                count ++;
                for(i = left; i<=right; i++)
                {
                    nums[i] = 1 - nums[i];
                }
            }
            left ++;
            right++;
        }

        if(nums[left + 1] == 1 && nums[left] == 1)
        {
            return count;
        }

        return -1;
    }
};