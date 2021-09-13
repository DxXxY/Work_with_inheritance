#include "Trap.h"

void Trap::displaytrap()
{
    cout << "Trap ";
    display();
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}

void Trap::recalculatePS()
{
    P = a + b + c + d;
    S = (a + b) / 2 * sqrt(c * c - ((((a - b) * (a - b) + c * c - d * d) / 2 * (a * b)) * (((a - b) * (a - b) + c * c - d * d) / 2 * (a * b))));

}

int Trap::check(double a, double b, double c, double d)
{
    if ((a + b + c < d) or (d + a + b < c) or (c + d + a < b) or (b + c + d < a)) {
        return 1;
    }
    return 0;
}

void Trap::set_a(double a)
{
    if (!check(a, this->b, this->c, this->d)) {
        this->a = a;
        recalculatePS();

    }
}

void Trap::set_b(double b)
{
    if (!check(this->a, b, this->c, this->d)) {
        this->b = b;
        recalculatePS();

    }
}

void Trap::set_c(double c)
{
    if (!check(this->a,this->b, c, this->d)) {
        this->c = c;
        recalculatePS();
    }
}

void Trap::set_d(double d)
{
    if (!check(this->a, this->b, this->c, d)) {
        this->d = d;
        recalculatePS();
    }
}
