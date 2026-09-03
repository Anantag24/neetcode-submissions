class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set1;
        for(int i = 0; i < nums.size(); i++){
            set1.insert(nums[i]);
        }
        int longest = 0;
        for(int num:nums){
        if(set1.find(num-1)== set1.end()){
            int current = num;
                int length = 1;
        
         while (set1.find(current + 1) != set1.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
    }
    return longest;
    }
};
