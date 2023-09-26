#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[i][j] = 0;
        }
    }

    int step = n - 1;
    for (int i = 0; i < n; i++)
    {
        matrix[i][step] = 1;
        step--;
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j - 1] == 1)
                flag = 1;
            if (flag == 1)
                matrix[i][j] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}