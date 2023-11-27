#include <iostream>
using namespace std;

int binary_search(int nums[], int k, int target) {
    int left = 0;
    int right = k - 1;
    while (left <= right) {
        int mid = (left + right)/ 2; 
        if (nums[mid] > target) {
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int k, target;
    cin >> k ;

    int nums[k];
    for (int i = 0; i < k; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    cout << binary_search(nums, k, target) << endl;
    return 0;
}
