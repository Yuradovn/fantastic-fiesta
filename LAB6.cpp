#include "iostream"
#include "conio.h"
using namespace std;
int n;
float x;
int factorial(int n);
float calc(int n,float x);

int main()
{
	cout << "Submit n:";
	cin >> n;
	cout << "Submit x:";
	cin >> x;
	if (n <= 0)
	{
		cout << "n should be whole number";
	}
	else
	{
		cout <<"The result is: " << calc(n,x);
	}
	_getch();
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
float calc(int n, float x)
{
	long double d, d1;
	d = 1;
	d1 = 0;
	double const EPS = 0.00001;
	for (int i = 0; fabs(d - d1) >= EPS; i++)
	{
		d = d1;
		d1 += (pow(-1, i) / (factorial(i) * factorial(n + i))) * pow(x / 2, 2 * i + n);
		cout << d1 << endl;
	}
	return d1;
}