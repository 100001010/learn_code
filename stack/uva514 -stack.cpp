#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break; //��break �~���|�@ ��yes�Mno  
        while (1) {
            /* ��J */
            stack<int> station;
            int input_num[N];
            for (int i = 0; i < N; i++) {
                cin >> input_num[i];
                if (input_num[i] == 0) break; //�S���o�y���ܡA�Q����N�n��JN+1��0 
            }

            if (input_num[0] == 0) break; //�S���o�y���ܡA��J0�|���no�A�ä��|���� 
             
            int yes_no=1 ; // �P�_�O�_������ŦX
            int A_train = 1; // �ثeA�����C��

            for (int i = 0; i < N; i++) {
                int      need_train = input_num[i];
                if (station.size() != 0 && station.top() == need_train) {
                    station.pop();
                } else {
                    // �p�G���O�A�N�qA_train�}�l��
                    while (A_train <= N && A_train != need_train) {
                        station.push(A_train);
                        A_train++;
                    }
                   
                    if (A_train > N) {
                        yes_no = 0;
                        break;
                    }
                    A_train++;  //�i�H���A��Ҧ��C���s����J�� 
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
