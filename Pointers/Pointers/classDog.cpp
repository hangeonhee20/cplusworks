#include <iostream>
using namespace std;
/*
	Ŭ����
	- �繰 (��ä)���� �߻�ȭ�� �ڷ����̴�
	- �繰�� �Ӽ�(�������)�� ���(����Լ�)�� ������ ����
	- Ŭ���� �̸��� ù���ڰ� �빮����
	- ĸ��ȭ�� ���� ���������ڰ� ����
	 (private : ���ٺ���, public : �������)
*/
// dog Ŭ���� ����
class Dog {
public:
	// �������
	string type; // ������ ����
	int age;	 // ������ ����

	// ������ ���� ���
	void showInfo() {
		cout << "������ ����:" << type << endl;
		cout << "������ ����:" << age << endl;
	}
};
int main() {

	// Ŭ���� ��� - �ν��Ͻ��� ����
	// �ν��Ͻ��� ����� ���� - ��(.) ������ ���
	Dog dog1;
	dog1.type = "Ǫ��";
	dog1.age = 2;
	dog1.showInfo();

	Dog dog2;
	dog2.type = "������";
	dog2.age = 3;
	dog2.showInfo();

	return 0;
}