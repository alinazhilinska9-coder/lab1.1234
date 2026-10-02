#include <iostream>

int main() {
    int attendance;
    bool hasLabs;

    // Считываем две цифры через пробел (например: 80 1)
    std::cout << "Введите посещаемость (%) и hasLabs (0 или 1): ";
    std::cin >> attendance >> hasLabs;

    // Считаем допуск (true, если посещаемость >= 75 И есть лабораторные)
    bool isAllowed = (attendance >= 75) && hasLabs;

    // Выводим true или false
    std::cout << std::boolalpha;
    std::cout << "Допуск: " << isAllowed << std::endl;

    // Поясняющее сообщение
    if (isAllowed) {
        std::cout << "Студент допущен." << std::endl;
    } else {
        std::cout << "Студент НЕ допущен." << std::endl;
    }

    return 0;
}
