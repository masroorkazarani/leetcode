class Solution {
public:
    int maxUniqueSplit(string s) {
        set<string> st;
        return backtrack(s, 0, st);
    }
    
    int backtrack(string& s, int start, set<string>& st) {
        if (start == s.size()) return 0;
        
        int maxSplits = 0;
        
        for (int i = start + 1; i <= s.size(); i++) {
            string sub = s.substr(start, i - start);
            if (st.find(sub) == st.end()) {
                st.insert(sub);
                maxSplits = max(maxSplits, 1 + backtrack(s, i, st));
                st.erase(sub);
            }
        }
        
        return maxSplits;
    }
};