﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication5.6/ConsoleApplication5.6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest56
{
	TEST_CLASS(UnitTest56)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
