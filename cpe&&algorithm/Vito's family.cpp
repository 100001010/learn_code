#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int alldata;
	cout << "要處理幾組測試資料：";
	cin >> alldata;
	//r個親戚 + r個門牌號碼 = 一組資料
	
	for(int info=0; info<alldata; info++){
		int r;
		cout << "輸入第" << info+1 << "組的親戚數量：";
		cin >> r;
		
		vector<int> housenum(r);
		for(int i=0; i<r; i++){
			cout << "輸入第" << i+1 << "位親戚的門牌號碼：";
			cin >> housenum[i];
		}  
		sort(housenum.begin() , housenum.end());
		
		int mid_housenum=housenum[r/2];
		int total_distance=0;
		for(int j=0; j<r; j++){
			int distance = abs(mid_housenum - housenum[j]);
			total_distance = total_distance + distance;
		}
		
		cout << "最小距離為：" << total_distance << endl << endl;
	}
	
	return 0;
}
