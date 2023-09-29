#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(),arr.end()-1);
    return arr;
}
