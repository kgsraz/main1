#include <iostream>
#include "IsKPeriodic.h"

int main() {
    setlocale(LC_ALL, "RU");
    std::string input;
    int k;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    std::cout << "Введите значение K: ";
    std::cin >> k;

    if (IsKPeriodic(input, k)) {
        std::cout << "Строка является кратной " << k << ".\n";
    }
    else {
        std::cout << "Строка не является кратной " << k << ".\n";
    }

    return 0;
}

