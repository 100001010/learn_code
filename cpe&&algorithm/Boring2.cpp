#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	int n,m;
	cout << "輸入n的值：";
	cin >> n;
	cout << "輸入m的值：";
	cin >> m; 
	
	queue<int> a;
	a.push(n); //[n] 
	while (a.back()%m == 0 && a.back()>m){
		int num = a.back()/m;
		a.push(num); //[n,num] 
	} 
	
	if (a.back()%m != 0){
		cout << "Boring!" ;
	}
	else{
		while (!a.empty() ){
			cout << a.front() << " " ;
			a.pop() ;
		}
		cout << "1";
	}
	
 	return 0;
}
