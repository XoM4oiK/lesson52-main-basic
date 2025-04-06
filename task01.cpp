//#include "maint.h"
//
//int sum_of_numbers_digit(int num) {
//	if (num < 0) { num = -num; }
//	if (num < 10) { return num; }
//	int d = num % 10;
//	return sum_of_numbers_digit(num / 10) + d;
//}
//int main() {
//
//	int num;
//	cout << "enter num" << endl;
//	cin >> num;
//	cout << sum_of_numbers_digit(num);
//	return 0;
//}