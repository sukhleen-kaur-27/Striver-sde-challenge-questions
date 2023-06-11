// has both the solutions of TC -> O(N^2) with SC-> O(1) and TC -> O(NlogN) with SC -> O(N)
// faster solution is using mergeSort
// no main function is there

#include <bits/stdc++.h> 
// can be done using merge sort as well

long long merge(long long *a, int low, int mid, int high){
    int left = low; 
    int right = mid+1;
    vector<int> temp;
    long long cnt = 0;
    while((left<=mid) && (right<=high)){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        a[i] = temp[i-low];
    }
    return cnt;
}

long long mergeSort(long long *a, int low, int high){
    long long cnt = 0;
    if (low < high) {
      int mid = (low + high) / 2;
      cnt += mergeSort(a, low, mid);
      cnt += mergeSort(a, mid + 1, high);
      cnt += merge(a, low, mid, high);
    }
    return cnt;
}


long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr, 0, n-1);
    // return cnt;

    // O(N^2) solution
    // long long ans= 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]>arr[j]){
    //             ans++;
    //         }
    //     }
    // }
    // return ans;
}
