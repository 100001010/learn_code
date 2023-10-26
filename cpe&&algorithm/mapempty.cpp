#include<iostream>
#include<string> 
#include<map>  
using namespace std;
int main(){
	map<int, string> studentMap;
	studentMap.insert(pair<int, string>(1, "Tom"));
	studentMap.insert(pair<int, string>(7, "Jack"));
	studentMap.insert(pair<int, string>(15, "John"));

	studentMap.clear();
	
	if (studentMap.empty()) {
    	cout << "empty\n";
	} 
	else 
    cout << "not empty, size is "<< studentMap.size() <<"\n";
    		
 return 0;
}
