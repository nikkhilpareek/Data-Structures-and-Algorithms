#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &arr){
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> result;
    for(int i = 0; i<n; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }else{
            pos.push_back(arr[i]);
        }
    }
    merge(neg.begin(), neg.end(), pos.begin(), pos.end(), std::back_inserter(result));    return result;
}
