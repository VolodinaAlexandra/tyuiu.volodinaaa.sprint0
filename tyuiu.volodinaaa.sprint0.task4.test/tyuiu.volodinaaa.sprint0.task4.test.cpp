#include "pch.h"
#include "CppUnitTest.h"
#include "../tyuiu.volodinaaa.sprint0.task4.lib/tyuiu.volodinaaa.sprint0.task4.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* date = new Service1();
			int a{ 3 };
			int b{ 4 };
			int c{ 1 };
			int d{ 2 };
			int e;
			
			e = date->Calculate(a, b, c, d);
			Assert::AreEqual(17, e);
		}
	};
}
