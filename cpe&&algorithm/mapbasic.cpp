#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	
	map<int,string> student;
	
    //student={ {7,"cat"},{8,"dog"} };

	student.insert(pair<int, string>(6,"banana"));
	student.insert(pair<int, string>(6,"apple"));
	
	student[3]="Dam";
	student[1]="Andy";	
	student[2]="Panda";
	
	for(const auto & s:student){
		cout<<"id: "<< s.first<<" ,name: "<<s.second<<endl;
	}	

	cout<<endl<<endl;
	
	
	for(map<int, string>::reverse_iterator it= student.rbegin(); it != student.rend(); it++) {
// or
// for (auto it = studentMap.begin(); it != studentMap.end(); it++) {					舉例迭帶器 反向reverse 
    cout << "id: " << (*it).first << ", name: " << (*it).second << "\n";
	}	
    
    
    student.insert(pair<int, string>(11, "Tom"));

    pair <map<int, string>::iterator, bool> retPair;
    retPair = student.insert(pair<int, string>(11, "Anna"));  
    
    if (retPair.second == true)
        cout << "Insert Successfully\n";
    else
        cout << "Insert Failure\n";  
        

	return 0;
}
