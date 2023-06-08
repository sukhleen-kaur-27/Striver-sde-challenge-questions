// set matrix zero question
// main function for input not created
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int rows = 1;
	int n = matrix.size();
	int m = matrix[0].size();
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if (matrix[i][j]==0){
				matrix[i][0]=0;
				if (j==0){
					rows = 0;
				}
				else{
				matrix[0][j]=0;
				}
			}
		}
	}
	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			if (matrix[0][j]==0 || matrix[i][0]==0)
				matrix[i][j]=0;
			}
	}

	if (matrix[0][0]==0){
		for(int j=0; j<m; j++){
			matrix[0][j]=0;
		}
	}
	if(rows==0){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}

}
