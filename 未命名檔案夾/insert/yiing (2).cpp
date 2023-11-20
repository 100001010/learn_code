#include<iostream>
using namespace std;
int main(){
    int a[1024],n,b,i;
    cin>>n;           //輸入幾個數做排序
    cin>>a[0]>>a[1];
    if(a[0]<a[1]){
    	swap(a[0],a[1]);
	}
    for(i=2;i<n;i+=1){
        cin>>a[i];
        for(int j=i;a[j]>a[j-1]&&j>0;j-=1){
        	swap(a[j],a[j-1]);
        	
		}
    }
    for(i=0;i<n;i+=1){
    	cout<<a[i]<<' ';
    
	}
    
    return 0;
}

