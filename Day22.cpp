class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix[i].size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};

// this is for clockwise 
// We can do this for anti clockwise by just doing the symmetric swapping firsy and reversing next
