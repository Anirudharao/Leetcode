#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int smallest = INT_MAX;
    int maxProfit = 0;
    
    for(int i=0; i<prices.size(); i++){
        smallest = min(smallest, prices[i]);
        maxProfit = max(maxProfit, prices[i]-smallest);
    }
    
    return maxProfit;
}