#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    map<int, string> studentMap;
    studentMap[1] = "Tom";
    studentMap[7] = "Jack";
    studentMap[15] = "John";

    studentMap.erase(7); //�R�����w��Key 
    for (const auto& m : studentMap) {
        cout << m.first << " " << m.second << "\n";
    }
	
	cout<<endl<<endl;


	
    studentMap[1] = "Tom";
    studentMap[7] = "Jack";
    studentMap[15] = "John";

    auto ret = studentMap.erase(1);				/*�ڧR�F�h�֭Ӥ���*/ 
    cout << ret << "\n";						
    for (const auto& m : studentMap) {
        cout << m.first << " " << m.second << "\n";
    }

    ret = studentMap.erase(15);
    cout << ret << "\n";
    for (const auto& m : studentMap) {
        cout << m.first << " " << m.second << "\n";
    }


    return 0;
}
