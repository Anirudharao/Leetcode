#include <bits/stdc++.h> 
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int col0 = 1; //keeps track of the first column
    for(int i=0; i<matrix.size(); i++){
        if(matrix[i][0] == 0) col0 = 0;
        for(int j=1; j<matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    for(int i=matrix.size()-1; i>=0; i--){
        for(int j=matrix[0].size()-1; j>=1; j--){
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
        if(col0 == 0) matrix[i][0] = 0;
    }
}
