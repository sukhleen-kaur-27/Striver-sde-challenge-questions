// print pascal's triangle 
// only the best approach
// main function not created


#include <bits/stdc++.h>
vector<long long> generateRow(int row){
  long long val = 1;
  vector<long long> ans;
  ans.push_back(val);
  for(int i=1; i<row;i++){
    val=val*(row-i);
    val=val/(i);
    ans.push_back(val);
  }
  return ans;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long>> ans;
  // Write your code here.
  for(int i=1; i<=n; i++){
    ans.push_back(generateRow(i));
  }
  return ans;


}
