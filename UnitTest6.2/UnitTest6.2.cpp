#include "pch.h" 
#include "CppUnitTest.h" 
#include "../Lab 6.2/Source.cpp" 


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 25;
			int b[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
			int h[n] = { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
			Inverse(b, 25);
			Assert::AreEqual(b[1], h[1]);
		}
	};
}
