#pragma once

//класс для упрощения создания класса Triangle
class Point {
private:
    double X = 0.0;
    double Y = 0.0;

public:
    Point() {

    }
    Point(double number_x, double number_y) {
        X = number_x;
        Y = number_y;
    }

    double getX() {
        return X;
    }
    double getY() {
        return Y;
    }
    void setX(double x) {
        X = x;
    }
    void setY(double y) {
        Y = y;
    }
};