
#include "Dog.h"	//  ������� �ҷ�����(����� ���� ��������� �ֵ���ǥ ���)
#include <iostream>
// ������ ����
Dog::Dog(string _type, int _age) {
	type = _type;
	age = _age;
}

// �Լ� ����
string Dog::gettype() {
	return type;
}

int Dog::getAge() {
	return age;
}

void Dog::bark() {
	cout << "��~��~\n";
}