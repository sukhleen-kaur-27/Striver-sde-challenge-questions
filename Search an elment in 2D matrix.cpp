// can be done using a normal while loop will tak O(n*m)
// can also be solved if we use binary search on the 2D array
// main function not created

bool searchMatrix(vector<vector<int>>& mat, int target) {
    if (!mat.size()) return false;
    int n = mat.size();
    int m = mat[0].size();
    int low=0, high=(n*m) -1;
    while (low<=high){
        int mid = (low+high)/2;
        if (mat[mid/m][mid%m]>target){
            high = mid-1;
        }
        else if(mat[mid/m][mid%m]<target){
            low = mid+1;
        }
        else{
            return true;
        }
    }
    return false;

    // int i = 0;
    // int j = mat[0].size()-1;
    // int n = mat.size();
    // while (i<n & j>=0){
    //     if (mat[i][j] == target){
    //         return true;
    //     }
    //     if (mat[i][j]>target){
    //         j--;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // return false;

}
