#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
#include <functional>
/*less<Type>�G�p��Ai+1�p��i���N�洫swap(�ɧ�)
less_equal<Type>�G�p�󵥩�Ai+1�p�󵥩�i���N�洫swap(�ɧ�)
greater<Type>�G�j��Ai+1�j��i���N�洫swap(����)
greater_equal<Type>�G�j�󵥩�Ai+1�j�󵥩�i���N�洫swap(����)
equal_to<Type>�G����Ai+1����i���N�洫swap
not_equal_to<Type>�G������Ai+1������i���N�洫swap*/
//Type�O���n�ƧǪ� "��������"

using namespace std;
int main(){
	//sort�G�ɾ��Ƨ� 
	int a[]={8, 6, 4, 9, 1, 7, 3, 5, 2, 10};
	sort(a, a+10);
	for (int i=0; i<10; i++){
		cout << a[i] << ","; //1, 2, 3,..., 10
	}
	//sort(begin, end, less<Type>())
	//sort(a, a+10, less<int>());
	//sort(begin, end, greater<Type>())
	//sort(a, a+10, greater<int>());
	
	//��zvector 
	vector<int> b = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2}; 
    sort(b.begin(), b.begin()+10); //�ɾ� 
//or => sort(b.begin(), b.end());
	for(int i=0; i<b.size(); i++){
		cout << b[i] << " ";
	}
	sort(b.rbegin(), b.rend()); //����
	for(int i=0; i<b.size(); i++){
		cout << b[i] << " ";
	}
	 
	//�r��string 
	string s="fabdceg";
	sort(s.begin(), s.end(), less<char>()); //�ɾ� 
	for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        cout << c << " ";
    }
	sort(s.begin(), s.end(), greater<char>()) //���� 
	for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        cout << c << " ";
    }
	
	 
	return 0;
}
