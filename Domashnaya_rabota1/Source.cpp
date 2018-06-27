#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Задача номер 79: " << endl;
	double result = 1;
	for (float i = 0; i <= 10; i += 0.1)
	{
		result *= (1 + sin(double(i)));
	}
	cout << "Результат = " << result << endl;

	cout << endl;

	cout << "Задача номер 80: " << endl;
	double x = 0, result1 = 1, total = 0, result2 = 1, result3 = 1, result4 = 1, result5 = 1, result6 = 1, total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;

	cout << "Введите число х:" << endl;
	cin >> x;

	for (int i = 1; i <= 3; i++)
	{
		result1 = result1*i;		
	}
	total = x - (pow(x, 3) / result1);


	for (int i = 1; i <= 5; i++)
	{
		result2 = result2*i;		
	}
	total1 = total + (pow(x, 5) / result2);

	for (int i = 1; i <= 7; i++)
	{
		result3 = result3*i;		
	}
	total2 = total1 - (pow(x, 7) / result3);

	for (int i = 1; i <= 9; i++)
	{
		result4 = result4*i;		
	}
	total3 = total2 + (pow(x, 9) / result4);

	for (int i = 1; i <= 11; i++)
	{
		result5 = result5*i;		
	}
	total4 = total3 - (pow(x, 11) / result5);

	for (int i = 1; i <= 13; i++)
	{
		result6 = result6*i;		
	}
	total5 = total4 + (pow(x, 13) / result6);

	cout << "Результат = " << total5 << endl;

	cout << endl;

	cout << "Задача номер 83. а): " << endl;
	double a = 0, res = 0;

	cout << "Введите а:" << endl;
	cin >> a;

	for (int i = 1; res <= a; i++)
	{
		res = res + (1.0 / i);
	}
	cout << "Результат = " << res << endl;

	cout << endl;

	cout << "Задача номер 83. б): " << endl;
	double a1 = 0, res1 = 0, i, n = 0;

	cout << "Введите а:" << endl;
	cin >> a1;

	for (int i = 1; res1 < a1; i++)
	{
		res1 = res1 + (1.0 / i);
		n = i;
	}
	cout << "При наименьшем n = " << n << " результат будет больше введенного а." << endl;

	system("pause");
	return 0;
}