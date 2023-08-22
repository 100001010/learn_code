#include <iostream>
#include <set>
using namespace std;
int main(){
	int arr[]={5,6,7,8};
	set<int> g(arr, arr+4);
	for(auto it = g.begin(); it != g.end(); it++){
		cout << *it << "," ;
	}
	
	set<int> z={1, 2, 3};
	//insert�q���ڥ[�J���� 
	z.insert(4);
	z.insert(5);
	for(auto it = z.begin(); it != z.end(); it++){
		cout << *it << "," ;
	}
	
	//set�����ǩ�(�ɾ�)�Τ����Ʃ�
	set<int> z1={3, 8};
	z1.insert(2); 
	z1.insert(5); 
	z1.insert(5); 
	z1.insert(9);
	z1.insert(8);
	for(auto it = z1.begin(); it != z1.end(); it++){
		cout << *it << "," ;
	} //�p�G��cout << it << ","; �o�˷|��X���N����"�a�}"�Ӥ��O������
	for(auto it = z1.rbegin(); it != z1.rend(); it++){
		cout << *it << "," ; //���� 
	}
	
	//erase�R�����w����
	z1.erase(2);
	z1.erase(8);
	for(auto it = z1.begin(); it != z1.end(); it++){
		cout << *it << "," ;
	}  
	
	//clear�M�� 
	z.clear() ;
	
	//count�P�_�����O�_�s�b
	cout << z1.count(2) << endl; //0
	cout << z1.count(9) << endl; //1
	//char
	set<char> z2;
	z2.insert('a');
	z2.insert('b');
	z2.insert('c');
	cout << z2.count('a') << endl; //1
	cout << z2.count('e') << endl; //0 
	
	//empty�P�_�O�_����
	if(z.empty()/*z1.empty()*/){
		cout << "empty" << endl;
	}
	else{
		cout << "not empty, size is " << z.size()/*z1.size()*/ << endl;
	}

	
	return 0;
} 
