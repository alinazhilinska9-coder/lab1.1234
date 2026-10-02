#include <iostream>

int main() {
    int total_seconds;
    std::cout << "Введите количество секунд: ";
    std::cin >> total_seconds;

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    std::cout << "Полных минут: " << minutes << "\n";
    std::cout << "Оставшихся секунд: " << seconds << std::endl;

    return 0;
}
