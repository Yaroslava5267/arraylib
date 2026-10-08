#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Оценки фильмов по десятибалльной шкале
    int ratings[] = {
        8, 7, 9, 6, 10,
        8, 7, 9, 5, 8
    };
    const std::size_t n = sizeof(ratings) / sizeof(ratings[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "=== Рейтинги фильмов ===\n";
    std::cout << "Количество фильмов: " << n << "\n\n";

    std::cout << "Исходные рейтинги: ";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ratings[i];
        if (i + 1 < n) std::cout << ", ";
    }
    std::cout << "\n\n";

    // Средний рейтинг
    std::cout << "Средний рейтинг:       " << arr_average(ratings, n) << "\n";
    // Максимальный рейтинг
    std::cout << "Максимальный рейтинг:  " << arr_max(ratings, n)     << "\n";
    // Минимальный рейтинг
    std::cout << "Минимальный рейтинг:   " << arr_min(ratings, n)     << "\n";
    // Медиана рейтингов
    std::cout << "Медиана рейтингов:     " << arr_median(ratings, n)  << "\n";

    // Количество фильмов с рейтингом не ниже 8
    // (это условие не покрыто функциями библиотеки — считаем циклом)
    int count_high = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (ratings[i] >= 8) ++count_high;
    }
    std::cout << "Фильмов с рейтингом >= 8: " << count_high << "\n";

    return 0;
}