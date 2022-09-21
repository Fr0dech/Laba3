
#include <iostream>

int main()
{
    int chislo, proizvedenie = 1, maxim = 0, itognum = 0;
    int n;
    std::cout << "Please enter amount of numbers in your massive: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter number's value: ";
        std::cin >> chislo;
        std::cout << std::endl;
        if (chislo % 10 == 2)
        {
            proizvedenie = proizvedenie * chislo;
            if (chislo > maxim)
            {
                maxim = chislo;
                itognum = i;
            }
        }
    }
    std::cout << proizvedenie << " - composition of all numbers ending with '2'." << std::endl;
    std::cout << maxim << " - max number of all ending with '2'." << std::endl;
    std::cout << itognum << " - numeration of max number ending with '2'." << std::endl;
}
