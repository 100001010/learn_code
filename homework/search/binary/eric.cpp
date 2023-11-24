#include<iostream>
#include<vector>
using namespace std;
#define size 4

int main(){
    int arr[size];  
    int find = 2;
    for(int &i:arr)
        cin>>i;
    int b_p=0,e_p=size;
    while(b_p!=e_p){
        cout<<b_p<<" "<<e_p<<endl;
        int m_p=(b_p+e_p)/2;
        if(arr[m_p]==find){
            cout<<m_p;
            return 0;
        }else if (arr[m_p]>find){
            e_p=m_p;
        }else if (arr[m_p]<find){
            b_p=m_p;
        }
    }
    cout<<-1;
    return 0;
    
}