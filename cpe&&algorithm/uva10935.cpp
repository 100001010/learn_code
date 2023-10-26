#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	queue<int> cards;
	while(cin>>n && n!=0){
		for(int i=1;i<=n;i++)
        	cards.push(i);
        /*   if (cards.size()==1) 
          cout<< "Discarded cards: ";  */	 
		    if (cards.size() >=1) 
          		cout<< "Discarded cards: "; 
		    while (cards.size()>=2) {
	            cout << cards.front() << ", ";
   	            cards.pop();
       	        cards.push(cards.front());
           	    cards.pop();
			 	if(cards.size()==2){	
					cout<<cards.front();
					cards.pop();
			 	} 
	    	}
            cout<<endl<<"Remaining card: "<<cards.front()<<endl;
            cards.pop(); 
  }     
}
