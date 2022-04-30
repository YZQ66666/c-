/*FileName:  T7_.cpp
*Author：    Ziqi Yang
*E-mail :    3273241847@qq.com
*Date :      Mar 1th.2022
*College:    He Nan University
*Funtion:    计算机模拟程序
*/
#include <iostream>
#include <cstring>
using namespace std;


int k, n, m;
int flat[8][8];
int op; 
int fir[8][2] = { {-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2} };
void DFS(int x, int y, int step, int path[30][2]) {
	path[step][0] = x;
	path[step][1] = y;
	if (step == n * m && op == 1) {
		op = 0;
		for (int i = 1; i <= n * m; i++) {
			cout << (char)(path[i][1] - 1 + 'A') << path[i][0];
		}
		cout << endl;
		return;
	}
	else {
		flat[x][y] = 1;
		for (int i = 0; i < 8; i++) {
			int xx = x + fir[i][0];
			int yy = y + fir[i][1];
			if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && flat[xx][yy] == 0) {
				DFS(xx, yy, step + 1, path);
			}
		}
		flat[x][y] = 0;
	}
}
int main(int argc, char* argv[]) {
	int id = 1;
	cin >> k;
	while (k--) {
		cin >> n >> m;
		op = 1;
		memset(flat, 0, sizeof(flat));
		int path[30][2];
		cout << "Scenario #" << id++ << ":" << endl;
		DFS(1, 1, 1, path);
		if (op) {
			cout << "impossible" << endl;
		}
		cout << endl;
	}
	return 0;
}
