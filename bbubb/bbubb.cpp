#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int array[size][size];
    int firstElement;
    std::cout << "Введите значение первого элемента массива: ";
    std::cin >> firstElement;

    array[0][0] = firstElement;

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            if (i != 0 || j != 0) 
            {
                array[i][j] = array[i - 1][j - 1] * 2;
            }
        }
    }

    std::cout << "Результирующий массив:";
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << array[i][j] << " ";
        }
    }

    return 0;
}

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int array[size][size];
    int firstElement;
    std::cout << "Введите значение первого элемента массива: ";
    std::cin >> firstElement;

    array[0][0] = firstElement;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != 0 || j != 0)
            {
                array[i][j] = array[i - 1][j - 1] * 2;
            }
        }
    }

    std::cout << "Результирующий массив:";
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << array[i][j] << " ";
        }
    }

    return 0;
}
