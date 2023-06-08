// only one element has duplicates
// main function not created

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(), arr.end());
	int count = 1;
	for (int i = 1; i<n; i++){
		if (arr[i] == arr[i-1]){
			count++;
		}
		else{
			count = 1;
		}
		if (count>=2){
			return arr[i];
		}
	}
}
