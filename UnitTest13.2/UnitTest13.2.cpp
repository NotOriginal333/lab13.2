#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.2/math_operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132
{
	TEST_CLASS(UnitTest132)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = CUBE(2);
			Assert::AreEqual(8, test);
		}
	};
}
