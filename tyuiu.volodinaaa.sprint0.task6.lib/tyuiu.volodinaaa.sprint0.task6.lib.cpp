// tyuiu.volodinaaa.sprint0.task6.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task6
{
	virtual int Calculate(float a, float b) override
	{
		return a / 3 / b + 6;
	};
};
class ServiceV2 :public ISprint0Task6
{
	virtual int Calculate(float a, float b) override
	{
		return a*b/(5+a)+6;
	};
};
