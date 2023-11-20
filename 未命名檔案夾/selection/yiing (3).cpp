#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>a(1024);
	int n,i,b;
    cin>>n;//輸入幾個數做排序
    for(i=0;i<n;i+=1){
        cin>>a[i];
    } 
    b=a[0];
    for(int j=0;j<n;j++){
		for(i=1;i<n;i+=1){
			if(b<a[i]){
				b=a[i];
			}
		}
		cout<<b<<' ';
		a.clear();
		b=-2,147,483,648;
		
	}
	
    return 0;
}
