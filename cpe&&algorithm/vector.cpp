#include <iostream>
#include <vector>
using namespace std;
int main(){
	
vector<int> b;
// push _back: 把元素加到尾巴
b.push_back(8); //{8}
b.push_back(14); //{8, 14}
b.push_back(-7); //{8, 14, -7}
//pop_back: 移除尾巴的值
b.pop_back(); //{8, 14} 
//size: 回傳目前長度
cout << b.size() << endl; //2

//從另一個vector容器複製資料過來當作初始值
vector <int> b1={8, 14, -7};
vector <int> b2=b1;
cout << b2 << endl;
/* or =>     b2(b1);*/

//從傳統陣列裡複製過來當作初始值
int n[6] = {8, 14, -7, -2, 41, 26};
vector<int> b3(n+2, n+5);
/*b3(n+2,n+5) => 建一個大小為n的vector，
將v的元素依序初始化為: "n+2" "n+3" "n+4"，
=> {-7, -2, 41}*/ 

//印出vector內所有內容
for (int i = 0; i < b3.size(); i++) {
    cout << vec[i] << ",";
	} //{-7, -2, 41}
//改變裡面的值
b3[0]=100; //{100, -2, 41}
//insert: 插入元素
b3.insert(b3+2, 6); //{100, -2, 6, 41}
//clear: 移除某個位置元素
b3.erase(b3+3); //{100, -2, 6}

	
	return 0;
}
