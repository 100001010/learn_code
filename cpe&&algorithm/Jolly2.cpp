#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

bool isJolly(vector<int>& nums /*�x�s��J���ƦC*/) {
    int n = nums.size();
    set<int> diff; //"�x�s" �ƦC���۾F�Ʀr�t�������

    for (int i = 1; i < n; i++) { //"�p��"�C��Ӭ۾F�Ʀr�t�������
        int absDiff = abs(nums[i] - nums[i - 1]);
        if (absDiff >= 1 && absDiff <= n - 1) { //1 >= x >= n-1(x����1~n-1)
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
    cout << "��Jn���ȡG" ;
    
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

