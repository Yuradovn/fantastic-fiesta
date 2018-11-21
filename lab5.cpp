
//19.Натуральне число називається досконалим, якщо воно дорівнює сумі всіх своїх дільників, за винятком самого себе, наприклад, 6=1+2+3. Дано натуральні числаa і b(a ≤ b).Отримати всі досконалі числа, які належать інтервалу [a, b].
#include "iostream"
#include "conio.h"
#include "math.h"
using namespace std;
int main()
{
	unsigned long long a, b;
	cin >> a;
	cin >> b;
	while (a <= b)
	{
		unsigned long long sum = 0;
		for (int i = a - 1; i > 0; i--)
		{
			if (a % i == 0)
			{
				sum += i;
			}
		}
		if (sum == a)
		{
			cout << a << endl;
		}
		a++;
	}
	_getch();
	return 0;
}
