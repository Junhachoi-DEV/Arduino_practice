#include <iostream>
using namespace std;

void main() {
	int a, b, num_c;
	int* p1, * p2;

	cout << "a 값을 입력: ";
	cin >> a;
	cout << "b 값을 입력: ";
	cin >> b;
	
	p1 = &b;
	p2 = &a;

	num_c = *p1; //3번째 빈통을 만들어서 위치를 바꿔주는것이다.
	*p1 = *p2;
	*p2 = num_c;

	cout << "바뀐 값은 a는" << a << "b는" << b << endl;

}