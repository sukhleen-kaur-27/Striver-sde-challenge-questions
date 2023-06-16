#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> hashmap;
    for(int i=0; i<n; i++){
        hashmap.insert(arr[i]);
    }
    int large_sum = 0;
    
    for(auto it:hashmap){
        if(!hashmap.count(it-1)){
            int current_num = it;
            int maxi = 1;
            while(hashmap.count(current_num+1)){
                current_num++;
                maxi++;
            }
            large_sum = max(maxi, large_sum);
        }
    }
    return large_sum;


    // for(int i=0; i<n; i++){
    //     if(hashmap.find(arr[i]-1) == hashmap.end()){
    //         int maxi = 1;
    //         while(hashmap.find(arr[i]+maxi)!=hashmap.end()){
    //             maxi++;
    //         }
    //         large_sum = max(maxi,large_sum);
    //     }
    // }
    // return large_sum;


}
