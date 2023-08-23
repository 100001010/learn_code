#include<vector>
#include<set>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> vec;
        set<int>se;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            vec.push_back(t);
        }
        auto it=vec.begin();
        for(;it!=vec.end();it++){
            se.insert(abs(*it-*(it+1)));
        }
        
        auto itse=se.begin();
        advance(itse, n-1);
        if(se.size()==n-1&&se.count(1)&&se.count(n-1))
            cout<<"Jolly\n";
        else if(n==1)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";

    }
}
