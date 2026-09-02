class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map1;
        for(int i = 0 ; i <nums.size(); i++){
             int curr = target- nums[i];
             if(map1.find(curr) != map1.end()){
                return {map1[curr], i};
             }
               map1[nums[i]] = i;
                
        }
        return{};
    }
};
