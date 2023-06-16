// to find if sum if is present 

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n= arr.size();
   vector<vector<int>> ans;
   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         if(arr[i]+arr[j]==s){
            vector<int> temp = {min(arr[i], arr[j]),max(arr[i],arr[j])};
            ans.push_back(temp);   
         }
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}
