#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.1.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[] = { 2, 8, -3, -4 };
			int S = SuArr(A, 4);
			Assert::AreEqual(6, S);
		}
	};
}