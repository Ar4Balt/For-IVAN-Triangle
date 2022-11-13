#pragma once

#include "Point.h"

#include <string>
#include <math.h>

using namespace std;

class Triangle {
private:
	Point A,
		B,
		C;
	double AB,
		BC,
		CA;
	string Type;
public:
	Triangle() {
		AB = Side(A, B);
		BC = Side(B, C);
		CA = Side(C, A);
	}
	Triangle(Point A, Point B, Point C) {
		this->A = A;
		this->B = B;
		this->C = C;
		AB = Side(A, B);
		BC = Side(B, C);
		CA = Side(C, A);
		selection(AB, BC, CA);
	}
	Triangle(Point A, Point B, Point C, string Type) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->Type = Type;
	}

	Point getA() {
		return A;
	}
	Point getB() {
		return B;
	}
	Point getC() {
		return C;
	}
	string getType() {
		return Type;
	}

	void setB(Point b) {
		B = b;
	}
	void setA(Point a) {
		A = a;
	}
	void setC(Point c) {
		C = c;
	}
	void setType(string type) {
		Type = type;
	}

	void getAp(){
		cout << "X = " << A.getX() << "; Y = " << A.getY() << endl;
	}
	void getBp() {
		cout << "X = " << B.getX() << "; Y = " << B.getY();
	}
	void getCp() {
		cout << "X = " << C.getX() << "; Y = " << C.getY();
	}

	double Side(Point, Point);
	double getPerimetr(Triangle);
	void selection(double, double, double);
	
	void Print() {
		cout << "Points:\n A = "; getAp();
		cout << "B = "; getBp();
		cout << "C = "; getCp();
		cout << "Sides:\n AB = " << AB << std::endl
			<< "BC = " << BC << std::endl
			<< "CA = " << CA << std::endl
			<< "Type: \"" << Type << "\"\n" ;
	}
};