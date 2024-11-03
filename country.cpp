// country.cpp
#include "country.h"

// Конструктор
Country::Country() {
    // Ініціалізація, якщо потрібно
}

// Деструктор
Country::~Country() {
    // Очищення, якщо потрібно
}

// Метод введення даних про країни
void Country::inputCountries() {
    for (int i = 0; i < SIZE; ++i) {
        country_s_t country;
        std::cout << "Введіть назву країни " << i + 1 << ": ";
        std::cin >> country.name;
        std::cout << "Введіть площу країни (км²) " << i + 1 << ": ";
        std::cin >> country.area;
        std::cout << "Введіть кількість населення країни " << i + 1 << ": ";
        std::cin >> country.population;

        // Зберігаємо введені дані у масиві країн
        countries[i] = country;
    }
}

// Метод виведення даних про країни
void Country::outputCountries() const {
    std::cout << "\nІнформація про країни:\n";
    for (const auto& country : countries) {
        std::cout << "Назва: " << country.name 
                  << ", Площа: " << country.area << " км²"
                  << ", Населення: " << country.population << " осіб" << std::endl;
    }
}
