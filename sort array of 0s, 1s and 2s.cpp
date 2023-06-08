// sort an array containing 0s, 1s and 2s
// using dutch flag algorithm
// main function not made

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0, mid=0, high=n-1;
   while (mid<=high){
      if (arr[mid]==0){
         swap(arr[mid], arr[low]);
         mid++;
         low++;
      }
      else if (arr[mid]==1) mid++;
      else{
         swap(arr[high], arr[mid]);
         high--;
      }
   }
}
