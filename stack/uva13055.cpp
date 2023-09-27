#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
    
	int n;
    cin >>n;
    stack<string> s;
      
	for(int i=0;i<n;i++){
    	string a;
    	cin>>a;
     	if(a=="Sleep"){
     		string name;
     		cin>>name;
     		s.push(name);
		 }
    	
    	else if(a=="Kick")
		{	if(!s.empty()){
		
			    s.pop();}
		}
    	else if(a=="Test" ){
    		 if(!s.empty()){
			 
    		 	cout<<s.top()<<endl;}
			 
			 else{
			 	cout<<"Not in a dream";
			 }
    	}
	}
    	return 0;
}
    
    
    

