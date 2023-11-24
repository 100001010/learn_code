#include<iostream>
using namespace std;
int main(){
	int a[1024],n,i,ans; 
    cin>>n;  
	cin>>ans;         
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
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
    for(int v=n/2;v<=n;v/=2){
    	if(ans>a[v]){
    		v+=1;
		}
		else if(ans<a[v]){
			v-=1;	
		}
    	else{
    		cout<<ans<<" in "<<"a["<<v<<"]";
    		break;
		}
	}
    return 0;
}

