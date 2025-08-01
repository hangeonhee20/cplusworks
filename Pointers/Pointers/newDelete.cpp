#include <iostream>

using namespace std;

int main() {

	// 정수형 포인터(정적)
	int n = 3;
	int* p;

	p = &n;
	cout << n << endl;
	cout << *p << endl;	// 3
	*p += 10;	// *p = *p + 10
	cout << *p << endl;// 13
	cout << n << endl; // 13

	//정수형 포인터(동적 생성)
	int* ptr;
	ptr = new int;

	if (ptr == nullptr) {
		cout << "메모리를 할당할 수 없습니다.\n";
		return 1;	// or -1
	}

	*ptr = 5;
	cout << *ptr << endl;	// 5

	*ptr += 5;
	cout << *ptr + 5<< endl;	// 5


	// 정수형 포인터(배열 생성)
	int* pa;
	pa = new int[10];

	// 값 저장
	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;

	// 값 출력
	cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;
	// *(pa + 1) -> 1번 인덱스(괄호 주의!)
	cout << *pa << " " << *(pa + 1) << *(pa + 2) << endl;

	// 1_10까지 저장
	for (int i = 0; i < 10; i++) {
		//pa[i] = i + 1;
		*(pa + i) = i + 1;
	}

	// 출력 
	for (int i = 0; i < 10; i++) {
		//cout << p[i] << " ";
		cout << *(pa + i) << " ";
	}


	delete ptr;		// 메모리 제거(해제)
	delete[] pa;	// 베열인 경우 제거

	return 0;
}