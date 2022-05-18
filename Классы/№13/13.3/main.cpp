#include <iostream>
#include <set>
#include <algorithm>
#include "Pair.h"

using namespace std;
typedef set<Pair> Tset;
typedef Tset::iterator it;

Pair s;

Tset make_set(int n)//�-�� ��� �������� ��-��
{
	Tset a;
	Pair p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		a.insert(p);
	}

	return a;
}

void print_set(Tset& a)//����� ��-��
{
	it i = a.begin();
	while (i != a.end())
	{
		cout << *i << "\n";
		i++;
	}
}

void add_max_elem(Tset& a)//�������� ���� �������
{
	const Pair b = *max_element(a.begin(), a.end());
	a.insert(b);
}

void del_elem(Tset& a, int n1, int n2)//������� �������� �� ���������� [n1; n2]
{
	if (n1 > a.size() || n2 > a.size() || n1 > n2) { cout << "������!!!\n"; return; }

	it i = a.begin();
	int k = 1;

	while (k != n1)//����� �������� � ����� ��������
	{
		i++;
		k++;
	}
	it beg = i;
	while (k != n2 + 1)//����� �������� � ������ �������
	{
		i++;
		k++;
	}
	it end = i;
	
	a.erase(beg, end);//remove ������������ �� ���������, �.�. �������� �������� ��� ���������, � ��� �������� ��� �������� � ��������� ������
}

Pair avereage(Tset& a)//����� ��������
{
	it i = a.begin();
	Pair sum;

	while (i != a.end())
	{
		sum = sum + *i;
		i++;
	}

	return sum / a.size();
}

void add_elem(Tset& a, Pair& p)//�������� � ������� �������� ����� �������
{
	Tset b;
	it i = a.begin();

	while (i != a.end())
	{
		Pair buf = *i;
		b.insert(buf + p);
		i++;
	}

	a = b;
}

bool operator< (const Pair& a, const Pair& b)//���������� ��������� <, ���������� ��� ��������� ����������� ���������
{
	return (a.first < b.first) || (a.second < b.second);
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ���������� ��������� � ��������� >> "; cin >> n;

	Tset a = make_set(n);
	cout << "\n���� ���������:\n";
	print_set(a);

	add_max_elem(a);//�.� � ��� ��������� ��� ����������, �� ������ �� ���������
	cout << "\n��������� ������������ �������:\n";
	print_set(a);

	int n1, n2;
	cout << "\n������� ���������� �� �������� ����� ��������� �������� >> "; cin >> n1 >> n2;
	del_elem(a, n1, n2);
	print_set(a);

	s = avereage(a);
	add_elem(a, s);//�.�. �������� �������� ��� const, �� �������� � ���� ����������, �.� for_each ������������ ����������
	cout << "\n������� �������� ��������� � ���������: " << s << "\n���������� ������� ������� �� ���� ��������� ��������� : \n";
	print_set(a);

	return 0;
}