// using extra space first then we'll do it without using extra space as well

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=0;
	int j=0;
	vector<int> ans;
	while ((i<m) && (j<n)){
		if (arr1[i]<arr2[j]){
			ans.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i]> arr2[j]){
			ans.push_back(arr2[j]);
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	while (i<m){
		ans.push_back(arr1[i]);
		i++;
	}
	while(j<n){
		ans.push_back(arr2[j]);
		j++;
	}
	return ans;
}
