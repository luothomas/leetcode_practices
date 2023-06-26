class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> T;
        for(int i = 0; i < nums.size(); i++)
        {
            T[nums[i]] = i;
        }
        for(int n = 0; n < nums.size(); n++)
        {
            int temp = target - nums[n];
            if(T.count(temp) && T[temp] != n)
            {
                return {n, T[temp]};
            }
        }
        return {};
    }
};