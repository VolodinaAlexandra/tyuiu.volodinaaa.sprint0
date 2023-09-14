// tyuiu.volodinaaa.sprint0.task5.v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../tyuiu.volodinaaa.sprint0.task5.lib/tyuiu.volodinaaa.sprint0.task5.lib.cpp"

int main()
{
    ISprint0Task5* service = new ServiceV2();
    std::cout << "Task5.V3\n";
    float a, b, c, s;
    printf("a = ");
    scanf_s("%f", &a);
    printf("b = ");
    scanf_s("%f", &b);
    printf("c = ");
    scanf_s("%f", &c);
    std::cout << "Result 5.45+2.5+3 = " << service->Zadacha(5.45, 2.5, 3);
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
