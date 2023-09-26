#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int n, m, w;
	cin >> n >> m >> w;

	vector<vector<int>> matrix_mines(n, vector<int>(m, 0));

	for (int i = 0; i < w; i++) {
		int x, y;
		cin >> x >> y;
		x = x - 1;
		y = y - 1;


		matrix_mines[x][y] = -1; // bomb has been planted :) 
		for (int dy = -1; dy <= 1; dy++) {
			for (int dx = -1; dx <= 1; dx++) {
				int new_x = x + dx; // area around the bomb (x, y)
				int new_y = y + dy; 

				if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && matrix_mines[new_x][new_y] != -1) {
					matrix_mines[new_x][new_y]++;
				}
			}
		}
	}
	// output
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix_mines[i][j] == -1) {
				cout << '*';
			}
			else {
				cout << matrix_mines[i][j];
			}
		
		}
		cout << endl;
	}
}