#include <iostream>
using namespace std;
int main()
{
	int i, j, temp, n;
	cout << "Enter size of the Array:";
	cin >> n;
	int a[n];
	cout << "Enter elements of the Array:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		j = i + 1;
		while (j > 0 && a[j - 1] > a[j])
		{
			swap(a[j - 1], a[j]);
			j--;
		}
	}
	system("cls");
	cout << "Sorted Array is:" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	return 0;
}
