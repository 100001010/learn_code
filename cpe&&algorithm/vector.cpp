#include <iostream>
#include <vector>
using namespace std;
int main(){
	
vector<int> b;
// push _back: �⤸���[�����
b.push_back(8); //{8}
b.push_back(14); //{8, 14}
b.push_back(-7); //{8, 14, -7}
//pop_back: �������ڪ���
b.pop_back(); //{8, 14} 
//size: �^�ǥثe����
cout << b.size() << endl; //2

//�q�t�@��vector�e���ƻs��ƹL�ӷ�@��l��
vector <int> b1={8, 14, -7};
vector <int> b2=b1;
cout << b2 << endl;
/* or =>     b2(b1);*/

//�q�ǲΰ}�C�̽ƻs�L�ӷ�@��l��
int n[6] = {8, 14, -7, -2, 41, 26};
vector<int> b3(n+2, n+5);
/*b3(n+2,n+5) => �ؤ@�Ӥj�p��n��vector�A
�Nv�������̧Ǫ�l�Ƭ�: "n+2" "n+3" "n+4"�A
=> {-7, -2, 41}*/ 

//�L�Xvector���Ҧ����e
for (int i = 0; i < b3.size(); i++) {
    cout << vec[i] << ",";
	} //{-7, -2, 41}
//���ܸ̭�����
b3[0]=100; //{100, -2, 41}
//insert: ���J����
b3.insert(b3+2, 6); //{100, -2, 6, 41}
//clear: �����Y�Ӧ�m����
b3.erase(b3+3); //{100, -2, 6}

	
	return 0;
}
