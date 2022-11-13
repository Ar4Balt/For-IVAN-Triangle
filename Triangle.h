#pragma once

#include "Point.h"

#include <string>
#include <math.h>
#include <iostream>

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

	//вывод координат точки
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

	//выводит координаты точек(было лень делать через operator)
	void getAp(){
		std::cout << "X = " << A.getX() << "; Y = " << A.getY() << endl;
	}
	void getBp() {
		cout << "X = " << B.getX() << "; Y = " << B.getY();
	}
	void getCp() {
		std::cout << "X = " << C.getX() << "; Y = " << C.getY();
	}

	//высчитывание длинны стороны
	double Side(Point, Point);
	//периметр
	double getPerimetr(Triangle);
	//выбор вида треугольника по сторонам
	void selection(double, double, double);
	
	//вывод полной информации об треугольнике 
	void Print() {
		std::cout << "Points:\n A = "; getAp();
		std::cout << "B = "; getBp();
		std::cout << "C = "; getCp();
		std::cout << "Sides:\n AB = " << AB << endl
			<< "BC = " << BC << endl
			<< "CA = " << CA << endl
			<< "Type: \"" << Type << "\"\n";
	}
};