#include <iostream>
using namespace std;
#include <Windows.h>
#include "Header.h"

int main(){
	double ch,zn;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
input();

ch = Chislitel();
zn = Znamenatel();

Res(ch, zn);

}


