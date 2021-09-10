
#include <iostream>
using namespace std;

float main()
{
	setlocale(0, "");
	float i = 0;
	float sum = 0;
	while (i < 5000)
	{
		i++;
		sum += i;
	}
	cout << "Сумма чисел от 1 до 5000 = " << sum << endl;
	cout << " Конечное число = " << i << endl;
	return 0;
}
