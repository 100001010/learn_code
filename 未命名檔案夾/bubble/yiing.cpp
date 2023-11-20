#include<iostream>
using namespace std;
int main(){
	int a[1024],n,b,i; 
    cin>>n;           //輸入幾個數做排序
    for(i=0;i<n;i+=1){
        cin>>a[i];
		}
	for(int j=0;j<n;j++){
		for(i=1;i<n;i++){
    	if(a[i]<a[i-1]){
    		swap(a[i],a[i-1]);
			}	
   		}
	}	
    for(i=0;i<n;i+=1){
    	cout<<a[i]<<' ';
    
	}
    return 0;
}

