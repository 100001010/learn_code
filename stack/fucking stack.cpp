                /*  push  �N���إ[�Jstack����
                    pop   �qstack���������� 
					size  �Ǧ^stack�����ؼƥ� 
                    empty ����stack�O�_���ť�
                    top   �Ǧ^stack���ݶ��ذѦ�  */
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
	cout<<s.size();        /*����1�ӳ�1��*/ 
    cout<<endl<<endl<<endl;



  if (s.empty()){
         cout << "empty\n" ; }
   else  cout << "�D��\n" ;
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
 





