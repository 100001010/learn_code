#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int alldata;
	cout << "�n�B�z�X�մ��ո�ơG";
	cin >> alldata;
	//r�ӿ˱� + r�Ӫ��P���X = �@�ո��
	
	for(int info=0; info<alldata; info++){
		int r;
		cout << "��J��" << info+1 << "�ժ��˱��ƶq�G";
		cin >> r;
		
		vector<int> housenum(r);
		for(int i=0; i<r; i++){
			cout << "��J��" << i+1 << "��˱������P���X�G";
			cin >> housenum[i];
		}  
		sort(housenum.begin() , housenum.end());
		
		int mid_housenum=housenum[r/2];
		int total_distance=0;
		for(int j=0; j<r; j++){
			int distance = abs(mid_housenum - housenum[j]);
			total_distance = total_distance + distance;
		}
		
		cout << "�̤p�Z�����G" << total_distance << endl << endl;
	}
	
	return 0;
}
