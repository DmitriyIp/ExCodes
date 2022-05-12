#pragma once
#include <iostream>

using namespace std;

class Pair
{
public:
    int first;
    int second;
public:
    //������������
    Pair(void);
    Pair(int, int);
    Pair(const Pair&);

    //����������
    ~Pair(void);

    //���������
    int get_first();
    int get_second();

    //������������ 
    void set_first(int);
    void set_second(int);

    //���������� ����������
    bool operator> (const Pair&);
    bool operator< (const Pair&);
    bool operator== (const Pair&);
    bool operator!= (const Pair&);

    Pair& operator+ (const Pair&);
    Pair& operator- (const Pair&);
    Pair& operator* (const Pair&);
    Pair& operator/ (int);
    Pair& operator=(const Pair&);

    //���������� ���������� ��� ������ � ��������
    friend ostream& operator<<(ostream&, const Pair&);
    friend istream& operator>>(istream&, Pair&);

};