#include <iostream>
using namespace std;

int arr[39];
int a;
int i;

void input(); 
{
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 39))
			break;
		cout << "\nArray should have minimum1 maximum 39 elements. \n\n ";
	}

	// Accept array elements
	cout << "\n-----------------\n";
	cout << "Enter array elemnets ";
	cout << "---------------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << "> ";
		cin >> arr[i];
	}
}

void Linearsearch()
{
	char ch;
	int ctr;

	do
	{
		//Accept the number to be scared
		cout << "/nEnter the element you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nCountinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
}