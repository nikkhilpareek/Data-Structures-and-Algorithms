// Quick Sort

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<= high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void qS(int arr[], int low, int high){
    if(low<high){
        int partition_Index = partition(arr, low, high);
        qS(arr, low, partition_Index-1);
        qS(arr,partition_Index+1, high);
    }
}

int main(){
    int arr[5] = {23,3,54,23,5};
    qS(arr, 0, 4);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
