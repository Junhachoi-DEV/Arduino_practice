#include <iostream>
using namespace std;

void main() {
	int a, b, num_c;
	int* p1, * p2;

	cout << "a ���� �Է�: ";
	cin >> a;
	cout << "b ���� �Է�: ";
	cin >> b;
	
	p1 = &b;
	p2 = &a;

	num_c = *p1; //3��° ������ ���� ��ġ�� �ٲ��ִ°��̴�.
	*p1 = *p2;
	*p2 = num_c;

	cout << "�ٲ� ���� a��" << a << "b��" << b << endl;

}