#include <iostream>
using namespace std;
int task1()
{
	setlocale(0, "");

	cout << "Введите число,которое хотите возвести в квадрат и в куб: " << endl;
	int a, square, cube, q;
	cin >> a;
	q = a;
	system("cls");
	for (int i = 0; i < 1; i++) {
		square = a *= a;
	}
	for (int i = 0; i < 2; i++)
	{
		cube = a * q;
	}
	cout << square << endl << cube << endl;
	return 0;
}

int task2()
{
	setlocale(0, "");
	int num1, num2;
	cout << "Введите 2 числа,из которых нужно вычесть сред.арифмет.: ";
	cin >> num1 >> num2;
	system("cls");

	double result;
	result = num1 + num2;
	cout << result / 2;

	return 0;
}

int task3()
{
	setlocale(0, "");
	int beginning, ending, sum;
	cout << "Введите начало диапазона и конец: " << endl;
	cin >> beginning >> ending;
	sum = 0;
	system("cls");

	for (int i = beginning; i <= ending; ++i)
	{
		if (i % 2 == 0)
		{
			sum += i;
			cout << sum << endl;
		}
	}
	return 0;
}

int task4() {


	setlocale(0, "");
	int beginning, ending, sum;
	beginning = 1;
	ending = 150;
	sum = 0;
	cout << "Выберите кратность 5 или 7: " << endl;


	for (int i = beginning; i <= ending; ++i)
	{
		if (i % 5 == 0 || i % 7 == 0)
		{
			sum += i;
			cout << sum << endl;
		}

	}
	return 0;
}

int task5()
{
	setlocale(0, "");
	cout << "Первые 10 чисел Фибоначчи: " << endl;
	int num1, num2, sum;
	num1 = 1;
	num2 = 0;

	for (int i = 0; i <= 9; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		cout << sum << endl;
	}
	return 0;
}

int task6()
{
	setlocale(0, "");

	cout << "Введите число,делители которого вам нужны: " << endl;
	int a;
	cin >> a;
	system("cls");

	cout << "Делители: " << endl;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			cout << i << endl;
		}
	}
	return 0;

}

int main()
{
	/*task1();*/
	/*task2();*/
	/*task3();*/
	/*task4();*/
	/*task5();*/
	task6();
}