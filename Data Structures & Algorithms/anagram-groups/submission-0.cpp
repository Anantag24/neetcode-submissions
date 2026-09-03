class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>map1; 
       for(int i = 0; i < strs.size(); i++){
        string sorted_string = strs[i];
       sort(sorted_string.begin(), sorted_string.end());
        map1[sorted_string].push_back(strs[i]);
       }
       vector<vector<string>>ans;
       for(auto&pair:map1){
        ans.push_back(pair.second);
       }
       return ans;
    }
};
