#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
    map <long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
