#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			if(a[j]>a[j-1])
				swap(a[j-1],a[j]);
		}
	}

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
} 
