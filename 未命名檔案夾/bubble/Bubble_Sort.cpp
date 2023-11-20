#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		vector<int> bubble(n);
		for(int i=0 ; i<bubble.size() ; i++){
			cin>>bubble[i];
		}
		for(int i=0,j=bubble.size() ; i<j ; ){
			if( i==j-1 ){
				j--;
				i=0;
				continue;
			}
			else if( bubble[i]>bubble[i+1] ){
					swap(bubble[i],bubble[i+1]);
			}
			i++;
		}
		for(int i=0 ; i<bubble.size() ; i++){
			cout<<bubble[i]<<" ";
		}
		cout<<endl;
	}
	
	/*int n;
	while(cin>>n){
		vector<int> bubble(n);
		for(int i=0 ; i<bubble.size() ; i++){
			cin>>bubble[i];
		}
		for(int i=0,j=bubble.size()-1 ; i<j ; i++){
			int Max=*max_element(bubble.begin(),bubble.end());
			if(Max=j){
				j--;
				continue;
			}
			else if(bubble[i]>bubble[i+1]){
				swap(bubble[i],bubble[i+1]);
			}
		}
		for(int i=0 ; i<bubble.size() ; i++){
			cout<<bubble[i]<<" ";
		}
		cout<<endl;
	}*/ 
	return 0;
}
