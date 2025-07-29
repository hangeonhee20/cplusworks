
#include "Dog.h"
#include <iostream>

int main() {
	Dog dog1("말티즈", 4);

	cout << "강아지 종류: " << dog1.gettype() << endl;
	cout << "강아지 나이: " << dog1.getAge() << endl;

	return 0;
}