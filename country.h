// country.h
#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <array>
#include <string>

const int SIZE = 3;  // Кількість країн

struct country_s_t {
    std::string name;
    double area;
    long population;
};

class Country {
private:
    std::array<country_s_t, SIZE> countries;
public:
    // Конструктор та деструктор
    Country();
    ~Country();

    // Методи введення та виведення даних
    void inputCountries();
    void outputCountries() const;
};

#endif // COUNTRY_H
