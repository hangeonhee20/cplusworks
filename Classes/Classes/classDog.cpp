#include <iostream>
using namespace std;
/*
   클래스(class)
   - 사물(객체)을 추상화한 자료형이다.
   - 사물의 속성(멤버변수)과 기능(멤버함수)을 가지고 있음.
   - 클래스 이름은 첫글자가 대문자임
   - 캡슐화를 위해 접근제어자가 있음
	 (private: 접근불허, public:접근허용)
*/

//Dog 클래스 정의
class Dog {
public:
	//멤버 변수
	string type;  //강아지 종류
	int age;      //강아지 나이

	Dog() {}  //기본 생성자

	//강아지 정보 출력
	void showInfo() {
		cout << "강아지 종류: " << type << endl;
		cout << "강아지 나이: " << age << endl;
	}

	void bark() {cout << "왈~ 왈~\n";}
};


int main()
{
	//클래스 사용 - 인스턴스를 생성
	//인스턴스로 멤버에 접근 - 점(.) 연산자 사용
	Dog dog1;  
	dog1.type = "푸들"; 
	dog1.age = 2;
	dog1.showInfo();
	dog1.bark();

	Dog dog2; //매개변수가 있는 생성자로 인스턴스 생성
	dog2.type = "진돗개";
	dog2.age = 3;
	dog2.showInfo();
	dog2.bark();

	return 0;
}