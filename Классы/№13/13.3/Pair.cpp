#include "pair.h"
#include <iostream>

using namespace std;

//������������
Pair::Pair(void)
{
    first = 0;
    second = 0;
}
Pair::Pair(int a, int b)
{
    first = a;
    second = b;
}
Pair::Pair(const Pair& a)
{
    first = a.first;
    second = a.second;
}

//����������
Pair::~Pair(void) = default;

//���������
int Pair::get_first() { return first; }
int Pair::get_second() { return second; }

//������������
void Pair::set_first(int a) { first = a; }
void Pair::set_second(int b) { second = b; }



//���������� ����������
bool Pair::operator>(const Pair & a)
{
    if ((first > a.first) || (first == a.first && second > a.second)) return true;
    return false;
}
bool Pair::operator< (const Pair& a)
{
    if ((first < a.first) || (first == a.first && second < a.second)) return true;
    return false;
}
bool Pair::operator== (const Pair& a)
{
    if (first == a.first && second == a.second) return true;
    return false;
}
bool Pair::operator!= (const Pair& a)
{
    if (first != a.first || second != a.second) return true;
    return false;
}

Pair& Pair::operator+ (const Pair& a)
{
    first += a.first;
    second += a.second;
    return *this;
}
Pair& Pair::operator- (const Pair& a)
{
    first -= a.first;
    second -= a.second;
    return *this;
}
Pair& Pair::operator* (const Pair& a)
{
    first *= a.first;
    second *= a.second;
    return *this;
}
Pair& Pair::operator/ (int n)
{
    first /= n;
    second /= n;
    return *this;
}
Pair& Pair::operator=(const Pair & a)
{
    if (this == &a) return *this;
    first = a.first;
    second = a.second;
    return *this;
}

//���������� ���������� ��� ������ � ��������
ostream& operator<<(ostream & out, const Pair & a)
{
    out << "First: " << a.first << " Second: " << a.second;
    return out;
}
istream& operator>>(istream & in, Pair & a)
{
    cout << "Enter first >> "; in >> a.first;
    cout << "Enter second >> "; in >> a.second;
    return in;
}