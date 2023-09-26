#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	const int N = 100, M = 100;
	int A[N][M];
	
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++){
			A[i][j] = 0;
			if (i + 1 + j == n) {
				A[i][j] = 1;
			}
			if (((i > j) && (i > n - 1 - j)) || ((i < j) && (i> n - 1 - j)) || ((i == j) && (i > n - 1 -j))) {
				A[i][j] = 2;
			}

		}
	}
	for (i = 0; i < n; i++) {  
		for (j = 0; j < n; j++){  
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}