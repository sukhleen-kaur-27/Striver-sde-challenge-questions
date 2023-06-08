// using only hash map
// will add the optimal solution as well


#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int, int> hashh;
	for (int i=0; i<n; i++){
		hashh[arr[i]]++;
	}
	int low = n/2;
	for(auto it : hashh){
		if (it.second>n/2)
		return it.first;
	}
	return -1; 

}
