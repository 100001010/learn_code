                /*  push  將項目加入stack頂端
                    pop   從stack中移除項目 
					size  傳回stack中項目數目 
                    empty 測試stack是否為空白
                    top   傳回stack頂端項目參考  */
#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack <int> s;
	s.push(3);
	s.push(4);
	cout<<s.size();
	cout<<endl<<endl<<endl;

	
	
	if(!s.empty()){
		s.pop();
	} 
	cout<<s.size();        /*拿掉1個剩1個*/ 
    cout<<endl<<endl<<endl;



  if (s.empty()){
         cout << "empty\n" ; }
   else  cout << "非空\n" ;
         cout<<endl<<endl<<endl;




if (!s.empty()) cout << s.top() << "\n" ;
 
 s.push(5); 
 s.push(6);       
 s.push(7); 
 if (!s.empty()) cout << s.top() << "\n" ; 
    

}
//7 
//6 
//5
 





