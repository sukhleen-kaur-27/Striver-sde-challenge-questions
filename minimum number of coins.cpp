#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int count = 0;
    vector<int> arr = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    for(int i = arr.size()-1; i>=0; i--){
        if(amount==0) break;
        while(amount>=arr[i]){
            amount -= arr[i];
            count++;
        }
    }
    return count;
}
