
#include "Dog.h"	//  헤더파일 불러오기(사용자 정의 헤더파일은 쌍따옴표 사용)
#include <iostream>
// 생성자 구현
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

// 함수 구현
string Dog::gettype() {
	return type;
}

int Dog::getAge() {
	return age;
}

void Dog::bark() {
	cout << "왈~왈~\n";
}