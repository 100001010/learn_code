#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	int n;
	cout<<"�п�J�n�d�ߪ�����:";
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
				cout<<"�b"<<dream.top()<<"���ڸ�"<<endl;
			}
			else{
				cout<<"Not in a dream"<<endl;
			}
		}
		
	} 
	
	return 0;
}
