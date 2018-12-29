#include "iostream"
#include "conio.h"
#include <iomanip>
using namespace std;


void inputMatr(int**, int, int);//Функція вводу матриці
void outputMatr(int**, int, int);//Функція виводу матриці
void avg(int**, float*, int, int);//Функція яка вираховує середнє значення рядка і записує його у одновимір. масив
void sort(float*, int);//Функція яка сортує одновимір. масив
void outputVect(float*, int); //Функція яка виводить одновимір. масив
int n;
int m;
int main()
{
	cout << "Input number of rows: ";
	cin >> n;
	cout << "Input number of cols: ";
	cin >> m;
	int** matr = new int*[n];
	float* vect = new float[n];
	inputMatr(matr, n, m);
	cout << "Matrix: \n";
	outputMatr(matr, n, m);
	avg(matr, vect, n, m);
	sort(vect, n);
	cout << "Vector: ";
	outputVect(vect, n);

	_getch();

}


void inputMatr(int** arr, int row, int cols)
{
	for (int i = 0; i < row; i++) 
	{
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++) 
		{
			cout << "Input item - row " << i + 1 << " column " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
}
void outputMatr(int** arr, int row, int cols) 
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < cols; j++) 
		{
			cout << setw(8) << right << arr[i][j];
		}
		cout << endl;
	}
}
void avg(int** arr,float* vect ,int row, int cols)
{
	int n = 0; //Лічильник для одновимір. масиву
	for (int i = 0; i < row; i++)
	{
		int a = 0;   // В цю змінну записується сума чисел рядка
		for (int j = 0; j < cols; j++)
		{
			a += arr[i][j];
		}
		*(vect + n) = (float)a / (float)cols;
		n++;
	}
}
void sort(float *vect, int size)
{
	float temp; 
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (*(vect + j) < *(vect + j + 1) )
			{
				temp = *(vect + j);
				*(vect + j) = *(vect + j + 1);
				*(vect + j + 1) = temp;
			}
		}
	}
}

void outputVect(float *vect, int size)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(vect + i) << " ";
	}
}