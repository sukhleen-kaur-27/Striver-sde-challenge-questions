#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	// better solution
	set<vector<int>> s1;

    for(int i=0; i<n; i++){
        set<int> hashset;
        for(int j=i+1; j<n; j++){
            int third = -(arr[i]+arr[j]-K);
            if (hashset.find(third)!=hashset.end()){
                vector<int> temp = {arr[i],arr[j], third};
                sort(temp.begin(), temp.end());
                s1.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(s1.begin(), s1.end());
    return ans;




	// brute force solution
	// set<vector<int>> s1;
	// for(int i=0; i<n; i++){
	// 	for(int j=i+1; j<n; j++){
	// 		for(int k=j+1; k<n; k++){
	// 			if (arr[i]+arr[j]+arr[k]==K){
	// 				vector<int> temp = {arr[i], arr[j], arr[k]};
	// 				sort(temp.begin(), temp.end());
	// 				s1.insert(temp);
	// 			}
	// 		}
	// 	}
	// }
	// vector<vector<int>> ans(s1.begin(), s1.end());
	// return ans;
}
