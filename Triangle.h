#pragma once

#include "Point.h"

#include <iostream>
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
		CA,
		Perimetr;
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

	void setA(Point a) {
		A = a;
	}
	void setB(Point b) {
		B = b;
	}
	void setC(Point c) {
		C = c;
	}
	void setA(double a_x, double a_y) {
		Point point(a_x, a_y);
		A = point;
	}
	void setB(double b_x, double b_y) {
		Point point(b_x, b_y);
		B = point;
	}
	void setC(double c_x, double c_y) {
		Point point(c_x, c_y);
		C = point;
	}

	void setType(string type) {
		Type = type;
	}

	//выводит координаты точек(было лень делать через operator)
	void getAp(){
		cout << "X = " << A.getX() << "; Y = " << A.getY() << endl;
	}
	void getBp() {
		cout << "X = " << B.getX() << "; Y = " << B.getY();
	}
	void getCp() {
		cout << "X = " << C.getX() << "; Y = " << C.getY() << endl;
	}

	double getAB() {
		return AB;
	}
	double getBC() {
		return BC;
	}
	double getCA() {
		return CA;
	}
	void setAB(double ab) {
		this->AB = ab;
	}
	void setBC(double bc) {
		this->BC = bc;
	}
	void setCA(double ca) {
		this->CA = ca;
	}

	void setPerimetr(double p) {
		this->Perimetr = p;
	}
	double setPerimetr() {
		return Perimetr;
	}

	//высчитывание длинны стороны
	double Side(Point, Point);
	//периметр
	double getPerimetr(Triangle);
	//выбор вида треугольника по сторонам
	void selection(double, double, double);
	
	//вывод полной информации об треугольнике 
	void Print() {
		cout << "Points:\nA = "; getAp();
		cout << "B = "; getBp();
		cout << "\nC = "; getCp();
		cout << "Sides:\nAB = " << AB << endl
			<< "BC = " << BC << endl
			<< "CA = " << CA << endl
			<< "Type: \"" << Type << "\"\n";
	}
};