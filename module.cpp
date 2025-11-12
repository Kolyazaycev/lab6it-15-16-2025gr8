#include <iostream>  
#include <cstdlib>  
#include <ctime>
#include <limits>  
using namespace std;
// Функция генерации случайного числа  
int generateRandomNumber(int min, int max){  
    return rand() % (max - min + 1) + min;  
}  
// Функция проверки ввода пользователя
bool checkInput(int& number){
    if (!(cin >> number)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}
