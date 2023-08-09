#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//void swpa(int a,int b){//call by varul
//     int t=a;
//     a=b;
//     b=t;
// }
void swap(int &a,int &b){//call by refrence
    int t=a;
    a=b;
    b=t;
}
// void swap(int *a,int *b){//call by pointer
//     int t=*a;
//     *a=*b;
//     *b=t;
// }

void f(int &a,int &b,void (*fp)(int &a,int &b)){
    (*fp)(a,b);
}


bool haha(int a,int b){
    if(a<b)
        return 1;
    else
        return 0;
}
int main(){  
    /*  

    int a=10;
    int &r=a;
    int *p=&r;
    cout<<"a="<<a<<" &a="<<&a<<endl;
    cout<<"r="<<r<<" &r="<<&r<<endl;
    cout<<"p="<<p<<" &p="<<&p<<" *p="<<*p<<endl;
    int **p2=&p;
    cout<<"p2="<<p2<<" &p2="<<&p2<<" *p2="<<*p2<<" **p2="<<**p2<<endl;
    */
   
//   int a1=10,b1=100;
//    int *pa=&a1;
//    int *pb=&b1;
//    cout<<a1<<" "<<b1<<endl;//10 100
//    swap(pa,pb);
//    cout<<a1<<" "<<b1<<endl;//10 100
   
 //   f(a1,b1,swap);
 //   cout<<a1<<" "<<b1;

    vector<int> v({1,8,7,3,9,4,6});
    for(int i:v)
        cout<<i++<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),haha);
    for(int &i:v)
        cout<<i++<<" ";
    cout<<endl;


}
