#include <iostream>  
#include <cstdlib>  
#include <ctime>
#include <limits>  
using namespace std;
// Функция генерации случайного числа  
int generateRandomNumber(int min, int max){  
    return rand() % (max - min + 1) + min;  
}  
