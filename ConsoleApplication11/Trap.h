#pragma once
#include "Figures.h"
class Trap :
    public Figures
{
private:
    double a;
    double b;
    double c;
    double d;
public:
    Trap(double a, double b, double c, double d, string name) :a{ a }, b{ b }, c{ c }, d{ d }{
        this->name = name;
        cornerCount = 4;
        if ((a + b + c<d) or (d+a+b<c) or (c+d+a<b) or (b+c+d<a)) {
            a = b = c = d=-1;
            name = "undefined";
            cornerCount = 0;
        }
        else {
            recalculatePS();

        }
    }
    void displaytrap();
    void recalculatePS();
    int check(double a, double b, double c, double d);
    void set_a(double a);
    void set_b(double b);
    void set_c(double c);
    void set_d(double d);
    void set_abcd(double a, double b, double c,double d) {
        if (!check(a, b, c, d)) {
            set_a(a);
            set_b(b);
            set_c(c);
            set_d(d);
        }
    }
};

