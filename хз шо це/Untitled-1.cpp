#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int n, T;
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Введіть число T: ";
    std::cin >> T;

    int first_greater_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > T)
        {
            first_greater_idx = i;
            break;
        }
    }

    if (first_greater_idx == -1)
    {
        std::cout << "У масиві немає елемента, більшого за T." << std::endl;
        return 0;
    }

    int max_neg = std::numeric_limits<int>::min();
    int max_neg_idx = -1;

    for (int i = 0; i < first_greater_idx; i++)
    {
        if (arr[i] < 0 && arr[i] > max_neg)
        {
            max_neg = arr[i];
            max_neg_idx = i;
        }
    }

    if (max_neg_idx != -1)
    {
        std::cout << "Номер першого максимального від'ємного елемента: " << max_neg_idx + 1 << std::endl;
    }
    else
    {
        std::cout << "Серед елементів до першого більшого за T немає від'ємних чисел." << std::endl;
    }

    return 0;
}