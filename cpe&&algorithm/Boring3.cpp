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
	
	if(m==1){
		cout<<"Boring!";
		return 0;
	}
	
	while(a.back()>=1){
		if(a.back()%m!=0){
			cout<<"Boring!";
			while(!a.empty()){
				a.pop();
			} 
			break;
		}
		int num=a.back()/m;
		if(num==1){
			a.push(num); 
			break;
		}
		a.push(num);
	}
	
	while(!a.empty()){
		cout << a.front() << " " ;
		a.pop() ;
	}
	
 	return 0;
}
