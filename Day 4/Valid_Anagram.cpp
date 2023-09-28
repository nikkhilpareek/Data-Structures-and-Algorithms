// This is Not the Best Solution (Not even a Good Solution).
// There is another Solution mentioned below which is better.
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};

// Second Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<int,int> alpha;
        for(int i=0;i<s.size();i++){
            alpha[s[i]-'a']++;
            alpha[t[i]-'a']--;
        }
        for(auto it:alpha){
            if(it.second!=0){
                return  false;
            }
        }
        return true;
    }
};
