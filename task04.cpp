//#include "maint.h"
//
//bool it_the_same_number(int num,int num2) {
//	if (num < 0) { num = -num; }
//	if (num < 10) { return num==num2; }
//	return it_the_same_number(num / 10, num2 - num % 10);
//}
//
//int main() {
//	int num, num2;
//	cout << "enter num" << endl;
//	cin >> num >> num2;
//	cout << (it_the_same_number(num, num2) == 1 ? "YES" : "NO");
//	return 0;
//} 