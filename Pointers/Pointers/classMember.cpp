#include <iostream>
using namespace std;

// Member Ŭ���� ����

class Member {

private:
	string id;
	string password;

public:
	Member(string id,string password) {
		this->id = id;
		this->password = password;
	}

	string getId();
	string getPassword();
};
string Member::getId() {
	return id;
}
string Member::getPassword() {
	return password;
}



int main() 
{
	const int SIZE = 3;

	Member memberList[SIZE] = {
		Member("flower","f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	for (int i = 0; i < SIZE; i++) {
		cout << "���̵�: " << memberList[i].getId() << 
			"��й�ȣ: " << memberList[i].getPassword() << endl;
	}

	



	// �迭 �ν��Ͻ� ����


	return 0;
}