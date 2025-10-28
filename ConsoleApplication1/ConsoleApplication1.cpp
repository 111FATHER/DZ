#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <iomanip>
#include <algorithm>

//void numbers1(int num11)
//{
//	while (true)
//	{
//		std::cout << "Введите шестизначное число - ";
//		std::cin >> num11;
//		if (num11 >= 100000 && num11 <= 999999)
//		{
//			int num1 = num11 / 100000;
//			int num2 = (num11 / 10000) % 10;
//			int num3 = (num11 / 1000) % 10;
//			int num4 = (num11 / 100) % 10;
//			int num5 = (num11 / 10) % 10;
//			int num6 = num11 % 10;
//
//			int first = num1 + num2 + num3;
//			int second = num4 + num5 + num6;
//
//			if (first == second)
//			{
//				std::cout << "Ваше число счастливое\n";
//			}
//			else
//			{
//				std::cout << "Ваше число не счастливое\n";
//			}
//			break;
//		}
//		else
//		{
//			std::cout << "Ошибка\n";
//		}
//	}
//	std::cout << "\n";
//}
//void numbers2(int num22)
//{
//	while (true)
//	{
//		std::cout << "Введите четырехзначное число - ";
//		std::cin >> num22;
//		if (num22 >= 1000 && num22 <= 9999)
//		{
//			int num1 = num22 / 1000;
//			int num2 = (num22 / 100) % 10;
//			int num3 = (num22 / 10) % 10;
//			int num4 = num22 % 10;
//			
//			std::swap(num1, num2);
//			std::swap(num3, num4);
//			std::cout << "Замена - " << num1 << num2 << num3 << num4 << "\n";
//			break;
//		}
//		else
//		{
//			std::cout << "Ошибка\n";
//		}
//	}
//	std::cout << "\n";
//}
//void numbers3(int num33)
//{
//	int max;
//	std::cout << "Введите число 1 - ";
//	std::cin >> max;
//	for (int i = 1; i < 7; i++)
//	{
//		int num;
//		std::cout << "Введите число " << i + 1 << " - ";
//		std::cin >> num;
//		if (num > max)
//		{
//			max = num;
//		}
//	}
//
//	std::cout << "Максимальное число - " << max << "\n";
//}

void Randarr()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100 + 1;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	std::cout << "маленькое - " << min << "\n";
	std::cout << "большое - " << max << "\n";
}
void Randarr2()
{
	int minRange, maxRange;
	std::cout << "Введите минимальное значение диапазона - ";
	std::cin >> minRange;
	std::cout << "Введите максимальное значение диапазона - ";
	std::cin >> maxRange;

	int arr[10];
	std::cout << "Массив - ";
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % (maxRange - minRange + 1);
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	int value;
	std::cout << "Введите значение для сравнения - ";
	std::cin >> value;

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] < value) {
			sum += arr[i];
		}
	}
	std::cout << "Сумма элементов, меньших " << value << " - " << sum;
	std::cout << "\n";
}
\

int main()
{

	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
/*std::cout << "ЗАДАНИЕ 1\n";
	int num11 = 0;
	numbers1(num11);

	std::cout << "ЗАДАНИЕ 2\n";
	int num22 = 0;
	numbers2(num22);

	std::cout << "ЗАДАНИЕ 3\n";
	int num33 = 0;
	numbers3(num33);*/


	std::cout << "ЗАДАНИЕ 1\n";
	Randarr();
	std::cout << "\n";

	std::cout << "ЗАДАНИЕ 2\n";
	Randarr2();
	std::cout << "\n";

	std::cout << "ЗАДАНИЕ 3\n";
	std::cout << "Не понимаю как сделать, даже с gpt не понимаю строчки";







return 0;


}