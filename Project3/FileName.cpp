#include<iostream>
#include<cstdlib>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	//������� 1
	/*int b = INT_MIN;
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
	*/


	//������� 2
	/*int a[10]{};
	cout << "����� �������";
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		
		cout << a[i] << endl;
		
	}
	*/
	//������� 3
	/*int size;
	cout << "������� ������ ������� " << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "������� ����� ��� ������� " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		cout << endl;

	}
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i] << endl;

	}
	delete[]arr;
	*/
	//������� 4
	int ROW;
	int COL;
	
	int sum = 0;
	cout << "������� ROW " << endl;
	cin >> ROW;
	cout << "������� COL " << endl;
	cin >> COL;
	int COL2 = COL;
	int* arr2 = new int[COL2];
	int** arr = new int*[ROW];
	for (int  i = 0; i <ROW; i++)
	{
		arr[i] = new int[COL];
	}
	for (int j = 0; j < COL; j++) {
		arr2[j] = 0;
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			
			arr[i][j] = rand() % 100;
			arr2[j] +=arr[i][j];

		}
	}
	cout  << "����� �������:"<<endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j]<<"\t";

		}
		cout << endl;
	}
	cout << "����� ����� ��������:" << endl;
	for (int j = 0; j < COL2; j++)
	{
		cout<< arr2[j] << "\t";
	}
	for (int i = 0; i < ROW; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	delete[] arr2;
}