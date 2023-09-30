#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	int n;
	cout<<"請輸入要查詢的次數:";
	cin>>n;
	stack<string> dream;
	for(int i=0; i<n; i++){
		string x;
		cin>>x;
		if(x=="Sleep"){
			string name;
			cin>>name;
			dream.push(name);
		}
		else if(x=="Kick"){
				dream.pop();
			
		}
		else if(x=="Test"){
			if(!dream.empty()){
				cout<<"在"<<dream.top()<<"的夢裡"<<endl;
			}
			else{
				cout<<"Not in a dream"<<endl;
			}
		}
		
	} 
	
	return 0;
}
