#include <iostream>
#include <cstring>
#include<Windows.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<clocale>

struct personal_account
{
    int number_check;
    std::string first_name;
    double balance;
    };

void NewBalance(personal_account* p,double *new_balanc)
{
    p->balance = *new_balanc;
};


int main()
{ 
    personal_account p;
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double new_balanc;
    std::cout << "Введите номер счёта: ";
    std::cin >> p.number_check;
    std::cout << "\n";
    std::cout << "Введите имя владельца: "<<std::endl;
    std::cin >> p.first_name;
    std::cout << "Введите баланс: ";
    std::cin >> p.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balanc;
    NewBalance( &p, &new_balanc);
    std::cout << "Ваш счёт: " << p.first_name << ", " << p.number_check << ", " << p.balance << std::endl;


    return 0;
}

