// tyuiu.volodinaaa.sprint0.task7.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{
		return a;
	};
};
