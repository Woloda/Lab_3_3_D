#include <iostream>
#include <iomanip>

#include "Triangle_Public.h"
#include "Triangle_Private.h"

int main(void) {
	using std::cout;

	Triangle_Public A;

	cout << "\nThe first object --- Triangle_Public: ";
	std::cin >> A;

	cout << "\n\nDisplay first object --- Triangle_Public: ";
	cout << A;

	cout << "\n\nAdding object numbers is : " << A.Addition();

	cout << "\n\nLetter string conversion method: ";
	cout << A.operator std::string();

	cout << "\n\nThe area of the triangle is: " << A.Calcul_Square();

	angle alpha, beta, sigma;
	cout << "\n\nThe angles of the triangle are: ";

	A.Calcul_Angles(alpha, beta, sigma, A.Calcul_Square());
	cout << "\n\nThe first angle of the triangle is: " << std::setprecision(3) << alpha;
	cout << "\nThe second angle of the triangle is: " << std::setprecision(3) << beta;
	cout << "\nThe third angle of the triangle is: " << std::setprecision(3) << sigma;

	Triangle_Private B;
	cout << "\n\nThe first object --- Triangle_Private: ";
	std::cin >> B;

	cout << "\n\nDisplay first object --- Triangle_Private: ";
	cout << B;

	cout << "\n\nAdding object numbers is : " << B.Addition();

	cout << "\n\nLetter string conversion method: ";
	cout << B.operator std::string();

	cout << "\n\nThe area of the triangle is: " << B.Calcul_Square();

	cout << "\n\nThe angles of the triangle are: ";

	B.Calcul_Angles(alpha, beta, sigma, B.Calcul_Square());
	cout << "\n\nThe first angle of the triangle is: " << std::setprecision(3) << alpha;
	cout << "\nThe second angle of the triangle is: " << std::setprecision(3) << beta;
	cout << "\nThe third angle of the triangle is: " << std::setprecision(3) << sigma;

	return 0;
}