// find out the number of pairs that satisfy the condition i<j and arr[i] > 2*arr[j]
// TC -> O(2N log N)
// SC -> O(N)


#include <bits/stdc++.h> 
int count_pairs(vector<int> &arr, int low, int mid, int high){
	int right = mid+1;
	int count = 0;
	for(int i=low; i<=mid; i++){
		while(right<=high && arr[i]>2*arr[right]){
			right++;
		}
		count+= right - (mid+1);
	}
	return count;
}
void merge(vector<int> &arr, int low, int mid, int high){
	vector<int> temp;
	int left = low;
	int right = mid+1;
	while(left<=mid && right<=high){
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for(int i=low; i<=high; i++){
		arr[i] = temp[i-low];
	}
}
int mergeSort(vector<int> &arr, int low, int high){
	int count = 0;
	if(low>=high) return count;
	int mid = (low+high)/2;
	count += mergeSort(arr, low, mid);
	count += mergeSort(arr, mid+1, high);
	count += count_pairs(arr, low, mid, high);
	merge(arr, low, mid, high);
	return count;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return mergeSort(arr, 0, n-1);	
}
