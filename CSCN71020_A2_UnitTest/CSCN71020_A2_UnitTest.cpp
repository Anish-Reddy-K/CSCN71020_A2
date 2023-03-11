#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\anish\source\repos\CSCN71020_A2\BCSRec\main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A2UnitTest
{
	TEST_CLASS(CSCN71020A2UnitTest)
	{
	public:

		// Test Case: getPerimeter
		TEST_METHOD(getPerimeter_test)
		{
			int l = 2;
			int b = 4;
			int result = 0;
			int expected = 12;
			result = getPerimeter(&l, &b);
			Assert::AreEqual(expected, result);
		}

		// Test Case: getArea
		TEST_METHOD(getArea_test)
		{
			int l = 6;
			int b = 8;
			int result = 0;
			int expected = 48;
			result = getArea(&l, &b);
			Assert::AreEqual(expected, result);
		}

		// Test Case 1: setLength - 0
		TEST_METHOD(setLength_test_1)
		{
			int input = 0;
			int expected_length = 1;
			setLength(input, &expected_length);
			Assert::AreNotEqual(input, expected_length);
		}

		// Test Case 2: setLength - 88
		TEST_METHOD(setLength_test_2)
		{
			int input = 88;
			int expected_length = 88;
			setLength(input, &expected_length);
			Assert::AreEqual(input, expected_length);
		}

		// Test Case 3: setLength - 100
		TEST_METHOD(setLength_test_3)
		{
			int input = 100;
			int expected_length = 99;
			setLength(input, &expected_length);
			Assert::AreNotEqual(input, expected_length);
		}


		// Test Case 1: setWidth - 0
		TEST_METHOD(setWidth_test_1)
		{
			int input = 0;
			int expected_width = 1;
			setWidth(input, &expected_width);
			Assert::AreNotEqual(input, expected_width);
		}

		// Test Case 2: setWidth - 75
		TEST_METHOD(setWidth_test_2)
		{
			int input = 75;
			int expected_width = 75;
			setWidth(input, &expected_width);
			Assert::AreEqual(input, expected_width);
		}

		// Test Case 3: setWidth - 100
		TEST_METHOD(setWidth_test_3)
		{
			int input = 100;
			int expected_width = 99;
			setWidth(input, &expected_width);
			Assert::AreEqual(input, expected_width);
		}

	};
}


