#include <iostream>
using namespace std;

// Member 클래스 정의

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
		cout << "아이디: " << memberList[i].getId() << 
			"비밀번호: " << memberList[i].getPassword() << endl;
	}

	



	// 배열 인스턴스 생성


	return 0;
}