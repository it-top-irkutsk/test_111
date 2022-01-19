#include <iostream>
#include <string>

#include "calculate.h"
#include "cli.h"

using namespace std;

int main() {
    system("chcp 65001");

    int num1;
    int num2;
    char symb;
    bool exit = false;

    do {
        num1 = Input<int>("Введите первое число: ");
        num2 = Input<int>("Введите второе число: ");
        symb = Input<char>("Введите символ арифметической операции ( + - * / ), 0 - для выхода: ");

        switch (symb) {
            case '+':
                cout << Add(num1, num2) << endl;
                break;
            case '-':
                cout << Sub(num1, num2) << endl;
                break;
            case '*':
                cout << Mul(num1, num2) << endl;
                break;
            case '/':
                cout << Div(num1, num2) << endl;
                break;
            case '0':
                exit = true;
                break;
        }
    } while (!exit);

    cout << "До свидания..." << endl;

    return 0;
}