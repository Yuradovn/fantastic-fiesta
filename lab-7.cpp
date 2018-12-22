#include "iostream"
#include "conio.h"
#include "ctime"
using namespace std;
int n;
unsigned long long height;
unsigned long long location;
void inputArr(int *arr , int size);//функція ввода масива
void outputArr(int *arr, int size);//функція вивода
int climbing(int *arr, int size, int height, int location);// в цій функції все рахується
int main()
{
	cout << "Submit number of days: ";
	cin >> n;
	cout << "What is height of the tree? ";
	cin >> height;
	cout << "How high the snail is located ";
	cin >> location;
	if (height < location)
	{
		cout << "Snail can`t be above the tree";
		_getch();
		return 0;
	}
	int *arr = new int[n];
	inputArr(arr , n);
	outputArr(arr, n);
	cout<<"After "<<n<<" Days of climbing snail will be "<< climbing(arr, n, height, location) <<" sm above the earth";
	_getch();
	return 0;
}




void inputArr(int *arr , int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 2;
	}
}

void outputArr(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int climbing(int *arr,int size, int height, int location)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 1)
		{
			if (location >= height)
			{
				location = height;
			}
			else
			{
				location += 2;
			}
		}
		else
		{
			if (location >= height)
			{
				location = height;
			}
			else
			{
				location -= 1;
			}
		}
	}
	return location;
}
