﻿#include "pch.h"
#include "CppUnitTest.h"
#include"../tyuiu.volodinaaa.sprint0.task6.lib/tyuiu.volodinaaa.sprint0.task6.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* date = new ServiceV2();
			float a, b;
			int r;

			r = date->Calculate(5,30);
			Assert::AreEqual(21, r);
		}
	};
}
