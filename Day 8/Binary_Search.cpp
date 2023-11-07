// Iterative Code:
int search(vector<int> &nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

// Recursive Code:
int BSrec(int arr[], int low, int high, int target){
    if(low>high){
        return -1;
    }

    int mid = low + (high-low)/2;
    if(target == arr[mid]){
        return mid;
    }else if(target>arr[mid]){
        return BSrec(arr,mid+1,high,target);
    }
    return BSrec(arr, low, mid-1, target);
}
