#include "Triangle.h"

using namespace std;

double Triangle::Side(Point a, Point b) {
	double ab = sqrt(pow((getB().getX() - getA().getX()), 2) +
		pow((getB().getY() - getA().getY()), 2));
	return 0.0;
}

double Triangle::getPerimetr(Triangle triangle) {
	double ab = Side(triangle.A, triangle.B);
	double bc = Side(triangle.B, triangle.C);
	double ca = Side(triangle.C, triangle.A);
	double perimetr = ab + bc + ca;
	return perimetr;
}

void Triangle::selection(double ab, double bc, double ca) {
	if (ab == bc && bc == ca && ca == ab) {
		//равносторонний
		Type = "ravnostoronni";
	}
	else if (ab == bc ^ bc == ca ^ ca == ab) {
		//равнобедренный
		Type = "ravnobedrenni";
	}
	else if (ab * ab == bc * bc + ca * ca 
		|| bc * bc == ab * ab + ca * ca 
		|| ca * ca == bc * bc + ab * ab) {
		//прямоугольный
		Type = "pramougoln";
	}
}

