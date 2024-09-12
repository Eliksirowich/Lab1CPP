#include<iostream>
#include<cstdlib>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int b = INT_MIN;
	int c = INT_MAX;
	int a[10]{55, 511,2,123,95,66,12,23,52,101};
	
	for (int i = 0; i < 10; i++)
	{

		cout << a[i] << endl;
		if (a[i] >= b)
		{
			b = a[i];
		}
		if (a[i] < c)
		{
			c = a[i];
		}
	}
	cout << b << " max" << endl;
	cout << c << " min" << endl;
	cout << b + c << endl;
}