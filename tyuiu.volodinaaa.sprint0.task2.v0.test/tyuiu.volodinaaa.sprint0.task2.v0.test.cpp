#include "pch.h"
#include "CppUnitTest.h"
#include "../tyuiu.volodinaaa.sprint0.task2.v0.lib/tyuiu.volodinaaa.sprint0.task2.v0.lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittest1
{
	TEST_CLASS(unittest1)

	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task2V0* service = new Service();
			int a = 3;
			int b = 4;
			int c;

			//run
			c = service->Add(a, b);

			//Valid
			Assert::AreEqual(7, c);


		}
	};
}
