#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna6.1.rec/Laboratorna6.1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestSum)
		{
			const int SIZE = 16;
			int arr[SIZE];
			create(arr, SIZE, -10, 35, 0);
			Assert::AreEqual(240, Sum(arr, SIZE, 0, 0), 0.00001);
		}
	};
}
