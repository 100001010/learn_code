#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,ans;
	cin>>n;
	vector<int>arr(n);
	cin>>ans;//what do you want number?	
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
	}
	for(int j=0;j<n;j+=1){
		if(ans==arr[j]){
			cout<<ans<<" in "<<"arr["<<j<<"]";
			break;
		}
	}
    return 0;
}

