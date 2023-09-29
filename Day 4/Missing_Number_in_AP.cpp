#include <vector>

int missingNumber(std::vector<int> &arr, int n) 
{
    if (n <= 2) {
        return -1;
    }

    int commonDifference = (arr[n - 1] - arr[0]) / n;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1] + commonDifference) {
            return arr[i - 1] + commonDifference; 
        }
    }

    return -1;
}
