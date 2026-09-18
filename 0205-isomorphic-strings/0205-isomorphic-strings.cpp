class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() == 1) return true;
        unordered_map<char, char> mp;

        for(int i=0; i<s.size(); i++) {
            if(mp.find(s[i]) == mp.end()) {
                mp[s[i]] = t[i];
            } else {
                if(mp[s[i]] != t[i]) return false;
            }
        }

        unordered_set<char> seen;
        for(auto p : mp) {
            if(seen.count(p.second)) {
                return false;
            }

            seen.insert(p.second);
        }

        return true;
    }
};