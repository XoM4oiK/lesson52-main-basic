#include "maint.h"

int ctep_number(int num,int n) {
	if (n < 0) { return 0; }
	if (n == 0) { return 1; }
	return num * ctep_number(num  , n - 1);
}

int main() {
	int num,n;
	cout << "enter num" << endl;
	cin >> num>>n;
	cout << ctep_number(num,n);
	return 0;
}