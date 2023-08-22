#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
#include <functional>
/*less<Type>i+1i碞ユ传swap(ど)
less_equal<Type>单i+1单i碞ユ传swap(ど)
greater<Type>i+1i碞ユ传swap()
greater_equal<Type>单i+1单i碞ユ传swap()
equal_to<Type>单i+1单i碞ユ传swap
not_equal_to<Type>ぃ单i+1ぃ单i碞ユ传swap*/
//Type琌璶逼 "じ摸"

using namespace std;
int main(){
	//sortど经逼 
	int a[]={8, 6, 4, 9, 1, 7, 3, 5, 2, 10};
	sort(a, a+10);
	for (int i=0; i<10; i++){
		cout << a[i] << ","; //1, 2, 3,..., 10
	}
	//sort(begin, end, less<Type>())
	//sort(a, a+10, less<int>());
	//sort(begin, end, greater<Type>())
	//sort(a, a+10, greater<int>());
	
	//俱瞶vector 
	vector<int> b = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2}; 
    sort(b.begin(), b.begin()+10); //ど经 
//or => sort(b.begin(), b.end());
	for(int i=0; i<b.size(); i++){
		cout << b[i] << " ";
	}
	sort(b.rbegin(), b.rend()); //经
	for(int i=0; i<b.size(); i++){
		cout << b[i] << " ";
	}
	 
	//﹃string 
	string s="fabdceg";
	sort(s.begin(), s.end(), less<char>()); //ど经 
	for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        cout << c << " ";
    }
	sort(s.begin(), s.end(), greater<char>()) //经 
	for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        cout << c << " ";
    }
	
	 
	return 0;
}
