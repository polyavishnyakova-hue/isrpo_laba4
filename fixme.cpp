#include <iostream>

// Функция сложения
int add(int a, int b) {
    return a + b;
}

// Функция вычитания
int subtract(int a, int b) {
    return a - b;
}

// Функция умножения
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 10;
    int y = 5;
    int z = 3;
    
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
    std::cout << "x + y = " << add(x, y) << std::endl;
    std::cout << "x - y = " << subtract(x, y) << std::endl;
    std::cout << "x * y = " << multiply(x, y) << std::endl;
    std::cout << "x + y + z = " << add(add(x, y), z) << std::endl;
    
    // Простой цикл для демонстрации
    for (int i = 1; i <= 3; ++i) {
        std::cout << i << " * " << x << " = " << multiply(i, x) << std::endl;
    }
    
    return 0;

}// My change for conflict

}// Diana's conflicting change

