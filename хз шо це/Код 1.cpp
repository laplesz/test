#include <iostream>

int main()
{
    int N;
    std::cout << "Input array size: ";
    std::cin >> N;

    int *A = new int[N];
    std::cout << "Input array elements: ";
    for (int i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }

    int minPositive = -1;
    int minIndex = -1;

    for (int i = 0; i < N; ++i)
    {
        if (A[i] > 0 && (minPositive == -1 || A[i] < minPositive))
        {
            minPositive = A[i];
            minIndex = i;
        }
    }

    if (minIndex != -1)
    {
        std::cout << "Min positive element: " << minPositive << " with inddex " << minIndex << std::endl;
    }
    else
    {
        std::cout << "There are no positive elements." << std::endl;
    }

    return 0;
}
