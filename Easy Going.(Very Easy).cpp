//Easy Going.(Very Easy)
#include<iostream>
using namespace std;
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t > 0)

	{
		int i, n, m, a[1000], k, l = 0, s = 0, ds;
		cin >> n >> m;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		bubble(a, n);

		k = n - m;
		for (i = 0; i < k; i++)
		{
			s = s + a[i];
		}
		for (i = n - 1; i >= m; i--)
		{
			l += a[i];
		}
		ds = l - s;
		cout << ds;
		t--;
	}
}