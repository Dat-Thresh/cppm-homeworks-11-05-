#include <iostream>
#include <string>
#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure() {
        name = "���������������";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
 }
void Quadrangle::get_info(){
    std::cout << name << ":\nC������: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}