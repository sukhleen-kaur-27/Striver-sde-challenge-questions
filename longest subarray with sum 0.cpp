#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  // optimal solution 
  int n = arr.size();
  int maxi = 0;
  map<int, int> mpp;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    if(sum==0){
      maxi = i+1;
    }
    else {
      if (mpp.find(sum) != mpp.end()) {
        maxi = max(maxi, i - mpp[sum]);
      } 
      else {
        mpp[sum] = i;
      }
    }
  }
  return maxi;


  // better solution

  // int n = arr.size();
  // int maxi = 0;
  // for(int i=0; i<n; i++){
  //   int sum = 0;
  //   for(int j = i; j<n; j++){
  //     sum += arr[j];
  //     if (sum==0){
  //       maxi = max(maxi, j-i+1);
  //     }
  //   }  
  // }
  // return maxi;

}

