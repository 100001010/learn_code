#include <iostream> 
#include <string> 
#include <map>
using namespace std;
int main(){
	int n;
	string s;

	cin>>n;
	getline(cin,s);
	getline(cin,s);
	while(n--)
	{
		map<string ,int> tree;
		int total=0;
		while(getline(cin,s) && s!="")
		{
			tree[s]++;
			total++;
		}
		for(map<string ,int>::iterator it=tree.begin();it!=tree.end();it++)
		{	cout<<(*it).first; 
			printf(" %.4f\n",(*it).second*100./total);
		}
		if(n!=0)
			cout<<endl;
	}
} 

