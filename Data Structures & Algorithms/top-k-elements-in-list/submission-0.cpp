class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map1;
        for(int i = 0; i < nums.size(); i++){
            map1[nums[i]]++;
        }
        vector<pair<int,int>>st;
        for(auto &pair : map1){
        st.push_back(pair);
        }
        sort(st.begin(), st.end(), [](pair<int,int>& a, pair<int,int>& b) {
    return a.second > b.second;
});
   vector<int>ans;
   for(int m = 0; m < k; m++){
         ans.push_back(st[m].first);
    }
    return ans;
    }
};
