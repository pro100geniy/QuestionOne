#include "Header.h"
#include <iostream>
using namespace std;
int a, b, c, d;
char l;

void input()
{
	cout << "������� ������ �����: ";
	cin >> a >> l >> b;
	cout << "������� ������ �����: ";
	cin >> c >> l >> d;
}



void Res(double ch, double zn)
{
	cout << "\n\n����� ����� " << ch << "/" << zn;
	cout << "\n\n����� ����� " << ch / zn;
}


