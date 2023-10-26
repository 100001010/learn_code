#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	map<string, int> students= {
        {"Tom", 1},
        {"Jack", 2},
        {"Ann", 4}
    };

    for (const auto& n : students) {
        cout << "key: " << n.first<< " value: " << n.second << "\n";
    }

    students["Tiffany"] = 5;
    students["John"] = 3;

    cout << students["John"] << "\n";
    cout << students["Tiffany"] << "\n";

    for (const auto& n : students) {
        cout << "key: " << n.first << " value: " << n.second << "\n";
    }

	cout<<endl<<endl;
	
	struct student{
		int id;
		string name;
		int age;
	};
	
	map <string ,student> studentmap;
	studentmap["Tom"] = {1, "Tom", 18};
    studentmap["Ann"] = {4, "Ann", 20};
    studentmap["Jack"] = {2, "Jack", 16};
    for (const auto& m : studentmap) {
        cout << "name: " << m.first << " id: " << m.second.id << " age: " << m.second.age << "\n";
    }
    return 0;
}
