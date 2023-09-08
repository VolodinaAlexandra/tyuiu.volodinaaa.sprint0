#include "pch.h"
#include "CppUnitTest.h"
#include"../tyuiu.volodinaaa.sprint0.task3.v0.lib/tyuiu.volodinaaa.sprint0.task3.v0.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service1();
			int a = 10;
			int b = 9;
			int c = 8;
			int d;

			d = date->SummV3(a,b,c);

			Assert::AreEqual(27, d);
		}
	};
}
