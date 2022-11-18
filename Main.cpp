#include <iostream>
#include "Triangle.h"

using namespace std;

int main(){
    cout << "Hello World!\n";
    Triangle triangle;
    triangle.setA(5, 3);
    triangle.setB(7.5, 5.3);
    triangle.setC(4.5, 1.3);

    triangle.setAB(triangle.Side(triangle.getA(), triangle.getB()));
    triangle.setBC(triangle.Side(triangle.getB(), triangle.getC()));
    triangle.setCA(triangle.Side(triangle.getC(), triangle.getA()));

    triangle.selection(triangle.getAB(), triangle.getBC(), triangle.getCA());


    triangle.Print();
}