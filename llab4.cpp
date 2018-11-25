#include "iostream"
#include "conio.h"
#include "math.h"
using namespace std;
int factorial(int n);
int main()
{
	float s = 0; 
	float s1 = 1;
	float x;
	int fact = 1;
	cout << "Submit X: ";
	cin >> x;
	const float EPS = 0.00001;
	if (x >= 0 && x <= 2)
	{
		for (int i = 1; fabs(s - s1) >= EPS; i++)
		{
			s1 = s;
			s = s + (i * pow(x, 2) - 1) / (1 + factorial(fact));
			fact *= 2;
		}
		cout << s;
	}
	else
		cout << "X got to be 0<=X<=2";

	_getch();
	return 0;
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}



