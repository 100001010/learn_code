#include <iostream>
#include <queue>
using namespace std;

int main(){
//��C(queue)�G���i���X

queue<int> a;
//push: �ȩ�J����
a.push(8); //[8]
a.push(14); //[8,14]
a.push(-7); //[8,14,-7]
//front: �^���Y����
cout << &a.front() << endl; //8
//back: �^�ǧ��ڪ���
cout << a.back() << endl; //-7
//size: �^�ǥثe����
cout << a.size() << endl; //3
cout << &a << endl;
//�L�X�}�C�����Ҧ����� 
//pop: ���X�Y���� 
/*int size= a.size();
for (int i=0; i<size; i++){
	cout << a.front() << ",";
	a.pop();
}*/
return 0;
}
