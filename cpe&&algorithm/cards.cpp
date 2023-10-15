#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<int> o_card;
	queue<int> d_card;
	for (int i=1; i<=n; i++){
		o_card.push(i);
	}
	for (int j=1; j<=n; j++){
		if (o_card.size() >= 2){
			d_card.push(o_card.front());
			o_card.pop(); 
			o_card.push(o_card.front());
			o_card.pop(); 
		}
	}
	
	cout<<"Discarded cards: ";
	for (int i=0; i<n-1; i++){
		cout<<d_card.front()<<",";
		d_card.pop();
	}
	cout<<endl;
	cout<<"Remaining card: ";
	cout<<o_card.front()<<",";
	
	return 0;
} 
