// tyuiu.volodinaaa.sprint0.task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../tyuiu.volodinaaa.sprint0.task6.lib/tyuiu.volodinaaa.sprint0.task6.lib.cpp"

int main()
{
    ISprint0Task6* service = new Service();
    setlocale(LC_ALL, "Rus");
    std::cout << "Введи значение Х  ";
    float a;
    std::cin >> a;
    std::cout << "Введи значение Y  ";
    float b;
    std::cin >> b;
    std::cout << "x/3/y+6 =  " << service->Calculate(a, b);
    std::cout << std::endl;

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
