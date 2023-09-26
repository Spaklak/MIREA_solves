#include <iostream>
using namespace std;
int main()
{
	int a[100], N, i, l = 1, start, fin, k = 0, j;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	i = 0;
	while (i < N - 1)
	{
		if (a[i] == a[i + 1])
		{
			if (l == 1) start = i;
			l++;
			if (i + 1 == N - 1)
			{
				k += l;
				break;
			}
			i++;
		}
		
		else {
			if (l > 1)
			{
				k += l;
				fin = i;
				for (j = i + 1; j < N; j++)
				{
					a[j - l] = a[j];
				}
				N -= l;
				l = 1;
				i = 0;
			}
			else i++;
		}
	}
	cout << k;
	return 0;
}