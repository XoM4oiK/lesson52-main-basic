//#include "maint.h"
//
//int maks_number(int num) {
//	if (num < 0) { num = -num; }
//	if (num < 10) { return num; }
//	int d = num % 10;
//	num = maks_number(num / 10);
//    return d > num ? d : num;
//}
//
//int main() {
//	int num;
//	cout << "enter num" << endl;
//	cin >> num;
//	cout << maks_number(num);
//	return 0;
//}