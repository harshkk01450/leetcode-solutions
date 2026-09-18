class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;

        int j = 0;
        string str = "";
        for(int i=0; i<pattern.size(); i++) {
            if(j >= s.size()) return false;
            while(j < s.size() && s[j] != ' ') {
                str+= s[j];
                j++;
            }
            j++;

            if(mp.find(pattern[i]) == mp.end()) {
                mp[pattern[i]] = str;
            } else {
                if(mp[pattern[i]] != str) return false;
            }
            str = "";
        }
        cout<<j<<endl<<s.size();
        if(j < s.size()) return false;

        unordered_set<string> seen;
        for(auto p : mp) {
            if(seen.count(p.second)) {
                return false;
            }

            seen.insert(p.second);
        }

        return true;
    }
};