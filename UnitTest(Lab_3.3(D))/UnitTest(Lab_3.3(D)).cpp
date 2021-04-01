#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_3.3(D)/Triangle_Public.cpp"
#include "../Lab_3.3(D)/Triangle_Private.cpp"
#include "../Lab_3.3(D)/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab33D
{
	TEST_CLASS(UnitTestLab33D)
	{
	public:
		
		TEST_METHOD(Test_Triangle_Public)
		{
			Triangle_Public a(5, 7, 8);
			Assert::AreEqual(a.Addition(), 20.0);
		}

		TEST_METHOD(Test_Triangle_Private)
		{
			Triangle_Private a(5, 5, 6);
			Assert::AreEqual(a.Calcul_Square(), 12.0);
		}
	};
}