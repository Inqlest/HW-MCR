#define MODE 1
#include <iostream>

void add(){
    int x(0), y(0);
    std::cout << "Введите x" << std::endl;
    std::cin >> x;
    std::cout << "Введите y" << std::endl;
    std::cin >> y;
    std::cout << "Результат сложения "<<x + y;
}

int main(){
#ifndef MODE
std::cout <<"MODE не определен" << std::endl;
#endif
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
std::cout << "Работаю в боевом режиме" << std::endl;
add();
#else
std::cout << "Работаю в неизвестном режиме" << std::endl;
#endif
}