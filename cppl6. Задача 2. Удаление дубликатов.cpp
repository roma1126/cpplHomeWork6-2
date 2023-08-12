#include <iostream>
#include <set>

template<class T>
void print(const T& p0)
{
    std::cout << "[OUT]:" << std::endl;
    for (const auto& i : p0)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");

    int numberOfElements = 0;
    int elements = 0;
    std::set<int, std::greater<>> p1;

    std::cout << "Введите количество элементов: ";
    std::cin >> numberOfElements;

    while (numberOfElements)
    {
        std::cout << "[IN]: ";
        std::cin >> elements;
        p1.insert(elements);
        numberOfElements--;
    }

    print(p1);
}