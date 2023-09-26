#include <iostream>
using namespace std;
void newValues(int** arr, int n, int m){
    // создание новой матрицы
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            matrix[i][j] = 0;
        }
    }
    // конец создания новой матрицы с нулями и начало метода
    for (int i = 0; i < n; i++){ // i для вверх и вниз
        for (int j = 0; j < m; j++){ // j для вправо и влево
            if (i == 0){
                if (arr[i][j] == 1){
                    continue;
                } else {
                    if (j == 0){
                        matrix[i][j] = arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
                    } else if (j == m - 1){
                        matrix[i][j] = arr[i][j-1] + arr[i+1][j] + arr[i+1][j-1];
                    } else {
                        matrix[i][j] = arr[i][j+1] + arr[i][j-1] + arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
                    }
                }
            } else if (i == n - 1){
                if (j == 0){
                    matrix[i][j] = arr[i][j+1] + arr[i-1][j] + arr[i-1][j+1];
                } else if (j == m - 1){
                    matrix[i][j] = arr[i][j-1] + arr[i-1][j] + arr[i-1][j-1];
                } else {
                    matrix[i][j] = arr[i][j+1] + arr[i][j-1] + arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1];
                }

            } else {
                if (j == 0){
                     matrix[i][j] = arr[i][j+1] + arr[i-1][j] + arr[i-1][j+1] + arr[i+1][j] + arr[i+1][j+1];
                } else if (j == m - 1){
                     matrix[i][j] = arr[i-1][j] + arr[i-1][j-1] + arr[i][j-1] + arr[i+1][j-1] + arr[i+1][j];
                } else {
                    matrix[i][j] = arr[i-1][j] + arr[i-1][j-1] + arr[i][j-1] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1] + arr[i][j+1] + arr[i-1][j+1];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0){
                cout << matrix[i][j] << " ";
            } else {
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    int** matrix = new int*[n];

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = 0;
        }
    }
    int w;
    cin >> w;
    for (int i = 0; i < w; i++){
        int x,y;
        cin >> x >> y;
        matrix[x-1][y-1] = 1;
    }
    newValues(matrix, n, m);

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
