#include<iostream>
using namespace std;
class list{
    private:
        int _v;
        list *_p;
    public:
        list(int v,list *p){
            _v=v;
            _p=p;
        }
        int get_v(){
            return _v;
        }
        
};
int main(){
    int a;
    list i(10,&a),i2(100,i);
    cout<<i.get_v();














    /*
    int a=10;
    cout<<&a<<endl;
    int &b=a;
    cout<<&b<<endl;
    cout<<b<<endl;
    a=11;
    cout<<b<<endl;
    
    int a[4];
    for(int &i:a)
        cin>>i;
    
    for(int &i:a)
        cout<<i<<" ";
    
a    4 3 6 3   0x1234
     _ _ _ _

&i    8 0 9 8  0x1234
     _ _ _ __
           i
        int i=&a[0];

    int a=0;
    int *p=&a;
    cout<<&a<<endl<<p<<endl<<&p<<endl;
    *p=10;
    cout<<a<<endl;
    cout<<*p<<endl;

    int a[10];
    for(int i=0;i<10;i++){
        cout<<&a[i]<<endl;
        a[i]=i;
    }
    cout<<endl;
    cout<<a<<endl<<&a<<endl<<&a[0];
    int *p=a;
    cout<<endl;
    for(int i=0;i<100;i++){

        *(p+i)=1;
        
    }
    
    int *p = new int [10];
    for(int i=0;i<100;i++)
        *(p+i)=i;
    cout<<p<<endl<<*(p+50);
    delete p;

    // int a = 100;
    // int len = sizeof(a) * 8;
    // // cout << len;

    // for(int i = len - 1; i >= 0; i--) {
    //     int x = (*((int*)&a) >> i);
    //     cout << (x & 1);
    // }
    // cout << endl;
*/ 
}
/*




 
p->&a

name value       address
a    10           0x16f502fcc
p    0x16f502fcc 0x16f502fc0
*/
