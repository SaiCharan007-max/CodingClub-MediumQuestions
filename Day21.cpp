class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> indexi;
        unordered_set<int> indexj;

        for(int i=0 ; i < matrix.size(); i++) 
            for(int j = 0; j < matrix[i].size(); j++)
                if(matrix[i][j] == 0) {
                    indexi.insert(i);
                    indexj.insert(j);
                }
        
        for(int i=0 ; i < matrix.size(); i++) 
            for(int j = 0; j < matrix[i].size(); j++) 
                if(indexi.count(i) || indexj.count(j))
                    matrix[i][j] = 0;
            
    }
};
