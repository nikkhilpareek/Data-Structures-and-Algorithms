#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int l = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]>l){
                l = arr[i];
            }
        }
        return l;
}
