#define MODE 1
#include <iostream>
#if MODE == 1
void add(){
    int x(0), y(0);
    std::cout << "Введите x" << std::endl;
    std::cin >> x;
    std::cout << "Введите y" << std::endl;
    std::cin >> y;
    std::cout << "Результат сложения "<<x + y;
}
#endif

int main(){
#ifndef MODE
#error "MODE не определен"
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