#include <iostream>  
#include <cstdlib>  
#include <ctime>
#include "module.cpp"
#include "header.h"  
using namespace std;
int main() {

  // Инициализация генератора случайных чисел
    srand(time(0));

    int userNumber;
    bool isGuessed = false;
    cout << "Добро пожаловать в игру 'Угадай число'!\n";
  
    int MIN_NUMBER;  
    int MAX_NUMBER;
    cout << "Введите диапазон выборки числа (мин. затем макс.).\n";
    cin >> MIN_NUMBER >> MAX_NUMBER; // Устанавливаем диапазон чисел  
    int secretNumber = generateRandomNumber(MIN_NUMBER, MAX_NUMBER); // Генерируем случайное число  
}
