#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

bool isJolly(vector<int>& nums /*儲存輸入的數列*/) {
    int n = nums.size();
    set<int> diff; //"儲存" 數列中相鄰數字差的絕對值

    for (int i = 1; i < n; i++) { //"計算"每兩個相鄰數字差的絕對值
        int absDiff = abs(nums[i] - nums[i - 1]);
        if (absDiff >= 1 && absDiff <= n - 1) { //1 >= x >= n-1(x介於1~n-1)
            diff.insert(absDiff);
        } 
		else {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    cout << "輸入n的值：" ;
    
    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

         if (isJolly(nums)) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}

