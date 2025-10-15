class Solution {
public:
    int value(char c){
        switch(c){
            case 'I':
                 return 1;
            case 'V':
                 return 5;
            case 'X':
                 return 10;
            case 'L':
                 return 50;
            case 'C':
                 return 100;
            case 'D':
                 return 500;
            case 'M':
                 return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = n-1; i >= 0; i--){
            if(i<n-1) {
                if(value(s[i])<value(s[i+1])) 
                    ans -= value(s[i]);
                else
                    ans += value(s[i]);
            }
            else if (i == n-1)
                ans += value(s[i]);
        }
        return ans;
    }
};
