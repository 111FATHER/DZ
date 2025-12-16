#include <iostream>




/*
	int argc, char* argv[]
*/

// argc и argv - это параметры функции main.
// Они дают возможность передать аргументы из командной строки в программу

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;

	}
	system("pause");
}

// int main - это принятый стандарт с++. По факту void main не будет показывается ошибкой, только если мы работаем
// в visual studio, но в других компиляторах он не будет выполнятся.


