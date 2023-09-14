#include "pch.h"
#include "CppUnitTest.h"
#include"../tyuiu.volodinaaa.sprint0.task5.lib/tyuiu.volodinaaa.sprint0.task5.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service();
			float a, b, c;
			float v;

			v = date->Zadacha(9,7.5,5);
			Assert::AreEqual(337.5f, v);
		}
	};
}
