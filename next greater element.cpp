#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> ans(n,-1);
    stack<int> st;
    st.push(arr[n-1]);

    for(int i=n-2; i>=0; i--){
        if(arr[i]<st.top()){
            ans[i]=st.top();
            st.push(arr[i]);
        }
        else{
            while(!st.empty() &&st.top()<=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(arr[i]);
        }
    }
    return ans;

    // vector<int> ans;
    // for(int i=0; i<n; i++){
    //     int maxi = -1;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]<arr[j]){
    //             maxi = arr[j];
    //             break;
    //         }            
    //     }
    //     ans.push_back(maxi);
    // }
    // return ans;
}
