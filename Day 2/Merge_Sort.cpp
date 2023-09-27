#include <iostream>
#include <vector>
void merge(int arr[], int low ,int mid, int high){
    std::vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i<=high; i++ ){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int l, int h) {
    if(l>=h){
        return;
    }
    int mid = (l+h)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr,mid+1, h);
    merge(arr,l,mid,h);

}
