#include "pch.h"
#include "CppUnitTest.h"
#include "../tyuiu.volodinaaa.sprint0.task5.lib/tyuiu.volodinaaa.sprint0.task5.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new ServiceV1();
			float a, b, c;
			float s;

			s = date->Zadacha(2.75,0.5,7);
			Assert::AreEqual(22.75f, s);
		}
	};
}
