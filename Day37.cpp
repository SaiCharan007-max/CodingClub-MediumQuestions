class Solution {
public:
    string reverseWords(string s) {
        vector<string> strings;
        stringstream ss(s);
        string word;
        while(ss >> word)
            strings.push_back(word);
        reverse(strings.begin(), strings.end());
        string ans = "";
        for(string x : strings) {
            ans += x;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};
