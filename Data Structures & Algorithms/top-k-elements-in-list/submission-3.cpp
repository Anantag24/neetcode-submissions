class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // 1. Count frequency
        unordered_map<int, int> freq;

        for(int num : nums) {
            freq[num]++;
        }

        // 2. Create buckets
        // index = frequency
        vector<vector<int>> buckets(nums.size() + 1);

        // 3. Put each number into its frequency bucket
        for(auto &pair : freq) {
            buckets[pair.second].push_back(pair.first);
        }

        // 4. Start from highest frequency
        vector<int> ans;

        for(int i = nums.size(); i >= 1; i--) {

            for(int num : buckets[i]) {
                ans.push_back(num);

                if(ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};