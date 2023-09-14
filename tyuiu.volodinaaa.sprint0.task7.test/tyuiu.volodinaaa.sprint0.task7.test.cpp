#include "pch.h"
#include "CppUnitTest.h"
#include"../tyuiu.volodinaaa.sprint0.task7.lib/tyuiu.volodinaaa.sprint0.task7.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* date = new Service();
			int a;
			bool k;

			k = date->Rezalt(true);
			Assert::AreEqual(true, k);

		}
	};
}
