#include<iostream>
#include<cstdlib>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	//Задание 1
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


	//Задание 2
	/*int a[10]{};
	cout << "Вывод массива";
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		
		cout << a[i] << endl;
		
	}
	*/
	//Задание 3
	/*int size;
	cout << "Введите размер массива " << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Введите числа для массива " << endl;
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
	//Задание 4
	/*int ROW;
	int COL;
	
	int sum = 0;
	cout << "Введите ROW " << endl;
	cin >> ROW;
	cout << "Введите COL " << endl;
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
	cout  << "Вывод массива:"<<endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j]<<"\t";

		}
		cout << endl;
	}
	cout << "Вывод суммы столбцов:" << endl;
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
	*/
setvbuf(stdin, NULL, _IONBF, 0);
setvbuf(stdout, NULL, _IONBF, 0);
bool trust = false;

struct Student {
	string famil;
	string name;
	string facult;
	int Nomzach;
} stud[3];

	
  


     for (int i = 0; i < 3; i++) {
	cout << "Введите фамилию студента: ";
	cin >> stud[i].famil;
      }

      for (int i = 0; i < 3; i++) {
	cout << "Введите имя студента " << stud[i].famil << ": ";
	cin >> stud[i].name;
      }


        for (int i = 0; i < 3; i++) {
	cout << "Введите название факультета студента " << stud[i].famil << " " << stud[i].name << ": ";
	cin >> stud[i].facult;
          }


  for (int i = 0; i < 3; i++) {
	cout << "Введите номер зачётной книжки студента " << stud[i].famil << " " << stud[i].name << ": ";
	cin >> stud[i].Nomzach;
     }


   for (int i = 0; i < 3; i++) {
	cout << "Студент " << stud[i].famil << " " << stud[i].name
		<< " обучается на факультете " << stud[i].facult
		<< ", номер зачётной книжки: " << stud[i].Nomzach << endl;
      }
   string searchFamil;
   string searchname;
   string searchsearchfacult;
   int Nomzach;
   cout << "Введите фамилию для поиска: "<<endl;
   cin >> searchFamil;
   bool found = false;
   for (int i = 0; i < 3; i++)
   {
	   if (stud[i].famil == searchFamil)
	   {
		   cout << "Найден студент: " << stud[i].famil << " " << stud[i].name
			   << ", факультет: " << stud[i].facult
			   << ", номер зачётной книжки: " << stud[i].Nomzach << endl;
		   
		   break;
	   }
   }
   if (!found)
   {
	   cout << "Студент с фамилией " << searchFamil << " не найден." << endl;
   }

   cout << "Введите имя для поиска: " << endl;
   cin >> searchname;
   
   for (int i = 0; i < 3; i++)
   {
	   if (stud[i].name == searchname)
	   {
		   cout << "Найден студент: " << stud[i].famil << " " << stud[i].name
			   << ", факультет: " << stud[i].facult
			   << ", номер зачётной книжки: " << stud[i].Nomzach << endl;

		   break;
	   }
   }
   if (!found)
   {
	   cout << "Студент сименем " << searchname << " не найден." << endl;
   }

   cout << "Введите название факультета для поиска: " << endl;
   cin >> searchsearchfacult;
   
   for (int i = 0; i < 3; i++)
   {
	   if (stud[i].facult == searchsearchfacult)
	   {
		   cout << "Найден студент: " << stud[i].famil << " " << stud[i].name
			   << ", факультет: " << stud[i].facult
			   << ", номер зачётной книжки: " << stud[i].Nomzach << endl;

		   break;
	   }
   }
   if (!found)
   {
	   cout << "Студент с факультета " << searchsearchfacult << " не найден." << endl;
   }
   cout << "Введите номер зачётной книги для поиска: " << endl;
   cin >> Nomzach;
  
   for (int i = 0; i < 3; i++)
   {
	   if (stud[i].Nomzach == Nomzach)
	   {
		   cout << "Найден студент: " << stud[i].famil << " " << stud[i].name
			   << ", факультет: " << stud[i].facult
			   << ", номер зачётной книжки: " << stud[i].Nomzach << endl;

		   break;
	   }
   }
   if (!found)
   {
	   cout << "Номер зачётной книжки " << Nomzach << " не найден." << endl;
   }
return 0;
}