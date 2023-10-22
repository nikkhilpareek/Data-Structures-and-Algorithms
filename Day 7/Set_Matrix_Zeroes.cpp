class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1;
        int m = matrix.size();
        int n = matrix[0].size();

        // This Loop will Mark Which Column and Row to make zero
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;       // Marking Row

                    if(j != 0){
                        matrix[0][j] = 0; // marking column
                    }else{
                        col0 = 0;
                    }
                }
            }
        }

        // Marking Zeros in the Matrix from (1,1) to (n-1, m-1)
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                if(matrix[i][j] != 0){
                    // check if we have marked the row or column
                    if(matrix[i][0] == 0 || matrix[0][j] == 0 ){
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // Marking zeroes in the First Column
        if(matrix[0][0] == 0){
            for(int j = 0; j<n; j++){
                matrix[0][j] = 0;
            }
        }

        // Marking Zeroes in First Row
        if(col0 == 0){
            for(int i = 0; i<m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
