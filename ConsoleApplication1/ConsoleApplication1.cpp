#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <iomanip>
#include <algorithm>
#include <cmath>

// ЗАДАНИЯ ЗА 29.09.2025
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
	for (int i = 0; i < 10; i++) 
    {
		arr[i] = rand() % (maxRange - minRange + 1);
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	int value;
	std::cout << "Введите значение для сравнения - ";
	std::cin >> value;

	int sum = 0;
	for (int i = 0; i < 10; i++) 
    {
		if (arr[i] < value) {
			sum += arr[i];
		}
	}
	std::cout << "Сумма элементов, меньших " << value << " - " << sum;
	std::cout << "\n";
}
void Randarr3()
{
    int Profit[12];
    int Start, End, max, min;
    std::cout << "Введите годовую прибыть помесячно\n";
    for (int i = 0; i < 12; i++)
    {
        std::cout << i + 1 << " месяц - ";
        std::cin >> Profit[i];
    }
    std::cout << "Введите начало диапазона - ";
    std::cin >> Start;
    std::cout << "Введите конец диапазона - ";
    std::cin >> End;

    max = min = Profit[Start];

    for (int i = Start - 1; i <= End - 1; i++)
    {
        if (Profit[i] > max)
        {
            max = i + 1;
        }
        if (min > Profit[i])
        {
            min = i + 1;
        }
    }
    std::cout << max << " - Самый прибыльный месяц\n"
        << min << " - Самый провальный месяц";
}



// ЗАДАНИЯ ЗА 1.10.2025
void year(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        std::cout << "Год " << year << " високосный\n";
    }
    else 
    {
        std::cout << "Год " << year << " не високосный\n";
    }
}
void days(int year1, int month1, int day1, int year2, int month2, int day2) 
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays1 = 0;
    for (int i = 1; i < year1; i++) 
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
            totalDays1 += 366;
        }
        else 
        {
            totalDays1 += 365;
        }
    }
    for (int i = 1; i < month1; i++) 
    {
        if (i == 2 && ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))) 
        {
            totalDays1 += 29;
        }
        else 
        {
            totalDays1 += daysInMonth[i - 1];
        }
    }
    totalDays1 += day1;
    int totalDays2 = 0;
    for (int i = 1; i < year2; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            totalDays2 += 366;
        }
        else 
        {
            totalDays2 += 365;
        }
    }
    for (int i = 1; i < month2; i++)
    {
        if (i == 2 && ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)))
        {
            totalDays2 += 29;
        }
        else 
        {
            totalDays2 += daysInMonth[i - 1];
        }
    }
    totalDays2 += day2;
    int difference;
    if (totalDays2 > totalDays1) 
    {
        difference = totalDays2 - totalDays1;
    }
    else 
    {
        difference = totalDays1 - totalDays2;
    }
    std::cout << "Разница между " << day1 << "." << month1 << "." << year1 << " и " << day2 << "." << month2 << "." << year2 << " составляет " << difference << " дней\n";
}
void average(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    double average = 1.0 * sum / size;
    std::cout << "Среднее арифметическое - " << average;
    std::cout << "\n";
}
void elements(int arr[], int size) 
{
    int plus = 0, minus = 0, nol = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0) {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            nol++;
        }
    }

    std::cout << "Положительных элементов: " << plus;
    std::cout << "\n";
    std::cout << "Отрицательных элементов: " << minus;
    std::cout << "\n";
    std::cout << "Нулевых элементов: " << nol;
    std::cout << "\n";
}



// ЗАДАНИЯ ЗА 27.10.2025
int* arr = new int[5];
int size = 5;

void distributionArr(int*& arr)
{
    delete[] arr;
    arr = new int[5];
}

void initializationArr(int*& arr)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 5;
    }
}

void printArr(int*& arr)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        std::cout << "\n";
    }
}

void deleteArr(int*& arr)
{
    delete[] arr;
}

void endArr(int*& arr)
{
    int size2 = size + 1;
    int* Arr2 = new int[size2];

    for (int i = 0; i < size; i++)
    {
        Arr2[i] = arr[i];
    }
    Arr2[size2 - 1] = 5;
    arr = Arr2;

    for (int i = 0; i < size2; i++)
    {
        std::cout << Arr2[i];
        std::cout << "\n";
    }
}












int main()
{

	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));





    std::cout << "ЗАДАНИЯ ЗА 29.09.2025 Тема - Урок №7 Двухмерные массивы\n\n";
    Sleep(3000);
    std::cout << "ЗАДАНИЕ 1\n";
	Randarr();
	std::cout << "\n";

	std::cout << "ЗАДАНИЕ 2\n";
	Randarr2();
	std::cout << "\n";

	std::cout << "ЗАДАНИЕ 3\n";
    Randarr3();
    std::cout << "\n";

   

    system("pause");
    system("cls");





    std::cout << "ЗАДАНИЯ ЗА 1.10.2025 Тема - Урок №8 Функции\n\n";
    Sleep(3000);
    std::cout << "ЗАДАНИЕ 1\n";
    int year1, month1, day1, year2, month2, day2;

    std::cout << "Введите первую дату\n";
    std::cout << "Год - ";
    std::cin >> year1;
    std::cout << "Месяц - ";
    std::cin >> month1;
    std::cout << "День - ";
    std::cin >> day1;

    std::cout << "\nВведите вторую дату\n";
    std::cout << "Год - ";
    std::cin >> year2;
    std::cout << "Месяц - ";
    std::cin >> month2;
    std::cout << "День - ";
    std::cin >> day2;

    std::cout << "\n Високосный год \n";
    year(year1);
    year(year2);

    std::cout << "\n Расчет разницы в днях \n";
    days(year1, month1, day1, year2, month2, day2);

    std::cout << "\nЗАДАНИЕ 2\n";
    int u;
    std::cout << "Введите размер массива - ";
    std::cin >> u;
    int* arr = new int[u];
    std::cout << "Введите элементы массива\n";
    for (int i = 0; i < u; i++)
    {
        std::cout << "Элемент " << i + 1 << " - ";
        std::cin >> arr[i];
    }
    std::cout << "\nРезультат\n";
    average(arr, u);
    delete[] arr;

    std::cout << "\nЗАДАНИЕ 3\n";
    int y;
    std::cout << "Введите размер массива - ";
    std::cin >> y;

    int* arr1 = new int[y];

    std::cout << "Введите элементы массива";
    std::cout << "\n";
    for (int i = 0; i < y; i++)
    {
        std::cout << "Элемент " << i + 1 << " - ";
        std::cin >> arr1[i];
    }

    std::cout << "\nРезультат";
    std::cout << "\n";
    elements(arr1, y);

    delete[] arr1;



    system("pause");
    system("cls");
    std::cout << "ЗАДАНИЯ ЗА 27.10.2025 Тема Урок №0 Особая неделя\n\n";
    distributionArr(arr);
    initializationArr(arr);
    std::cout << "Первый" << "\n";
    std::cout << "\n";
    printArr(arr);
    std::cout << "\nВторой массив";
    std::cout << "\n";
    endArr(arr);
    deleteArr(arr);

return 0;


}