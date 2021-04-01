#include <iostream>

#include "Triangle.h"


Triangle::Triangle(const number v_x, const number v_y, const number v_z) {
	if ((v_z < (v_x + v_y)) && (v_x < (v_z + v_y)) && (v_y < (v_x + v_z))) {
		Set_x(v_x);
		Set_y(v_y);
		Set_z(v_z);
	}
	else {
		Set_x(1);  //за умовчанням
		Set_y(2);  //за умовчанням
		Set_z(3);  //за умовчанням
	}
}

Triangle::Triangle(const Triangle& obj) {
	Set_x(obj.Get_x());
	Set_y(obj.Get_y());
	Set_z(obj.Get_z());
}

std::ostream& operator << (std::ostream& out, Triangle& obj) {  //операції виводу
	out << "\n\nEnter the number x: " << obj.Get_x();
	out << "\nEnter the number y: " << obj.Get_y();
	out << "\nEnter the number z: " << obj.Get_z();

	return out;
}

std::istream& operator >> (std::istream& in, Triangle& obj) {  //операції вводу 
	number a, b, c;
	bool perevirka{ false };

	do {
		std::cout << "\n\nEnter the side: ";
		std::cout << "\n\nEnter the number x: "; in >> a;
		std::cout << "Enter the number y: ";     in >> b;
		std::cout << "Enter the number z: ";     in >> c;

		if ((c < (a + b)) && (a < (c + b)) && (b < (a + c)))
			perevirka = true;
		else {
			std::cout << "\n\nIncorrectly entered data!!!";
			exit(-1);
		}

	} while (!perevirka);

	obj.Set_x(a); obj.Set_y(b);	obj.Set_z(c);
	return in;
}

double Triangle::Calcul_Square() {  //обчислення площі
	double a, b, c;
	a = this->Get_x();
	b = this->Get_y();
	c = this->Get_z();

	double half_p;
	half_p = (a + b + c) / 2;
	return sqrt(half_p * (half_p - a) * (half_p - b) * (half_p - c));
}

void Triangle::Calcul_Angles(angle& alpha, angle& beta, angle& sigma, double square) {  //обчислення кутів трикутника
	double a, b, c;
	a = this->Get_x();
	b = this->Get_y();
	c = this->Get_z();

	alpha = asin((2.0 * square) / (b * c));
	beta = asin((2.0 * square) / (a * c));
	sigma = asin((2.0 * square) / (a * b));
}