// tyuiu.volodinaaa.sprint0.task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../tyuiu.volodinaaa.sprint0.task7.lib/tyuiu.volodinaaa.sprint0.task7.lib.cpp"

int main()
{
    ISprint0Task7* service = new Service();
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите четырехзначное число =  ";
    int a;
    std::cin >> a;
    int a1 = a / 1000;
    int a2 = (a / 100) % 10;
    int a3 = (a / 10) % 10;
    int a4 = a % 10;

    int k;
    std::cout << "Введите цифру k =  ";
    std::cin >> k;
    bool l = (a1 == k) || (a2 == k) || (a3 == k) || (a4 == k);
    std::cout << "В записи исходного числа " << a << "     :\t" << std::boolalpha << l << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
