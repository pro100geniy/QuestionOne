#include "Header.h"
#include <iostream>
using namespace std;
int a, b, c, d;
char l;

void input()
{
	cout << "¬ведите первую дробь: ";
	cin >> a >> l >> b;
	cout << "¬ведите вторую дробь: ";
	cin >> c >> l >> d;
}



void Res(double ch, double zn)
{
	cout << "\n\n—умма равна " << ch << "/" << zn;
	cout << "\n\n—умма равна " << ch / zn;
}


