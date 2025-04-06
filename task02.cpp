//#include "maint.h"
//
//int cont_of_numbers_digit(int num) {
//	if (num < 0) { num = -num; }
//	if (num < 10) { return 1; }
//	return cont_of_numbers_digit(num / 10) + cont_of_numbers_digit(num % 10);
//}
//int main() {
//
//	int num;
//	cout << "enter num" << endl;
//	cin >> num;
//	cout << cont_of_numbers_digit(num);
//	return 0;
//}