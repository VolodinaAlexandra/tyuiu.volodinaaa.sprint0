// tyuiu.volodinaaa.sprint0.task5.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * b * c;
	};
};
class ServiceV1 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * c + b * c;
	};
};
class ServiceV2 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return a + b + c;
	};
};