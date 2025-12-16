#include <iostream>
#include <string>
#include <Windows.h>

bool CheckEmpty(const std::string& str);
std::string CapitalsLetters(const std::string& str);
void AddDot(std::string& str);
void ShowResult(const std::string& str);
inline void Getline(std::string& str);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string text;
    std::cout << "Введите предложение - ";
    Getline(text);

    if (CheckEmpty(text))
    {
        std::cout << "Строка пустая\n";
        Sleep(1500);
        return 0;
    }

    text = CapitalsLetters(text);
    AddDot(text);
    ShowResult(text);
    return 0;
}

bool CheckEmpty(const std::string& str)
{
    return str.empty();
}

std::string CapitalsLetters(const std::string& str)
{
    std::string result = str;
    bool newWord = true;

    for (size_t i = 0; i < result.size(); i++)
    {
        if (result[i] >= 'А' && result[i] <= 'я')
        {
            if (newWord)
            {
                if (result[i] >= 'а' && result[i] <= 'я')
                {
                    result[i] = result[i] - 32;
                }
                newWord = false;
            }
            else
            {
                if (result[i] >= 'А' && result[i] <= 'Я')
                {
                    result[i] = result[i] + 32;
                }
            }
        }
        else if (result[i] == ' ' || result[i] == '\t')
        {
            newWord = true;
        }
    }

    return result;
}

void AddDot(std::string& str)
{
    if (str.empty()) return;
    size_t last = str.size() - 1;
    while (last > 0 && (str[last] == ' ' || str[last] == '\t'))
    {
        last--;
    }
    if (last < str.size() && str[last] != '.')
    {
        str += '.';
    }
}

void ShowResult(const std::string& str)
{
    system("cls");
    std::cout << "Результат - " << str << "\n\n";
    system("pause");
}

inline void Getline(std::string& str)
{
    std::getline(std::cin, str, '\n');
}