
#include "Triangle.h"
#include <iostream>
#include <string>
//�����������
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure() {
    name = "�����������";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
};

void Triangle::get_info() {
    std::cout << name << ":\nC������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}