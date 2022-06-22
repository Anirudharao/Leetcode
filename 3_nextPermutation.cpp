#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    //Traverse from the end to find a[i] < a[i+1]
//     Once you find a[i], traverse again to find the first number greater than a[i] and swap these two
//     Reverse all the numbers from i to n
    
    int ind1=-1;
    int ind2=-1;
    for(int i=permutation.size()-2; i>=0; i--){
        if(permutation[i] < permutation[i+1]){
            ind1 = i;
            break;
        }
    }
    
    if(ind1 == -1){
        sort(permutation.begin(), permutation.end());
        return permutation;
    }
    
    for(int i=permutation.size()-1; i>ind1; i--){
        if(permutation[i] > permutation[ind1]){
            ind2 = i;
            break;
        }
    }
    
    swap(permutation[ind1], permutation[ind2]);
    reverse(permutation.begin()+ind1+1, permutation.end());
    
    return permutation;
}