#include <iostream>

extern int x;

void f() {
	x++;
	std::cout << x << std::endl;
}
