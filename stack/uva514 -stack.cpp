#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break; //有break 才不會一 直yes和no  
        while (1) {
            /* 輸入 */
            stack<int> station;
            int input_num[N];
            for (int i = 0; i < N; i++) {
                cin >> input_num[i];
                if (input_num[i] == 0) break; //沒有這句的話，想停止就要輸入N+1個0 
            }

            if (input_num[0] == 0) break; //沒有這句的話，輸入0會顯示no，並不會停止 
             
            int yes_no=1 ; // 判斷是否全部能符合
            int A_train = 1; // 目前A站的列車

            for (int i = 0; i < N; i++) {
                int      need_train = input_num[i];
                if (station.size() != 0 && station.top() == need_train) {
                    station.pop();
                } else {
                    // 如果不是，就從A_train開始找
                    while (A_train <= N && A_train != need_train) {
                        station.push(A_train);
                        A_train++;
                    }
                   
                    if (A_train > N) {
                        yes_no = 0;
                        break;
                    }
                    A_train++;  //可以讓你把所有列車編號輸入完 
                }
            }

            if (yes_no == 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
