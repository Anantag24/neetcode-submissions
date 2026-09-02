class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int>map1;
    unordered_map<char,int>map2;
    for(int i = 0; i < s.length(); i++){
        map1[s[i]]++;
    }
    for(int j = 0; j < t.length(); j++){
        map2[t[j]]++;
    }
     if(map1 == map2){
        return true;
     }
     return false;

    }
};
