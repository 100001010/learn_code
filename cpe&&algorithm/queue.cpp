#include <iostream>
#include <queue>
using namespace std;

int main(){
//佇列(queue)：先進先出

queue<int> a;
//push: 值放入尾巴
a.push(8); //[8]
a.push(14); //[8,14]
a.push(-7); //[8,14,-7]
//front: 回傳頭的值
cout << &a.front() << endl; //8
//back: 回傳尾巴的值
cout << a.back() << endl; //-7
//size: 回傳目前長度
cout << a.size() << endl; //3
cout << &a << endl;
//印出陣列中的所有元素 
//pop: 移出頭的值 
/*int size= a.size();
for (int i=0; i<size; i++){
	cout << a.front() << ",";
	a.pop();
}*/
return 0;
}
