#include <iostream>
using namespace std;

int dewi[28];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 28))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 28 elements. \n\n";
	}

	cout << "\n==================\n";
	cout << "enter array elements\n";
	cout << "======================";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> dewi[i];
	}

}

void LinearSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the elements you want to search: ";
		int mid;
		cin >> mid;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (dewi[i] == mid)
			{
				cout << "\n" << "found a position" << (i + 1) << endl;
				break;
			}
			if (mid < dewi[i])
			{
				cout << ">" << (mid - 1) << "<";
			}
			if (mid > dewi[i])
			{
				cout << "<" << (mid + 1) << ">";
			}
		}
		if (i == n)
			cout << "\n" << mid << "not found in the array\n";
		cout << "\nNumber of comparisions: " << ctr << endl;

		cout << "\nContinnue Search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}