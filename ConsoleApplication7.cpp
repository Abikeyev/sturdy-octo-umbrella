#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	int c;
	int e;
	bool d = true;

	do {
		cout << "Введите число:" << endl;
		cin >> a;
		cout << "Выберите действие:" << endl;
		cout << "1 - +" << endl;
		cout << "2 - -" << endl;
		cout << "3 - *" << endl;
		cout << "4 - /" << endl;
		cout << "5 - Завершить счет" << endl;
		cin >> b;
		cout << "Введите второе число:" << endl;
		cin >> c;

		if (b == 1) {
			e = a + c;
		}
		else if (b == 2) {
			e = a - c;
		}
		else if (b == 3) {
			e = a * c;
		}
		else if (b == 4) {
			e = a / c;
		}
		else if (b == 5) {
			d = false;
		}
		else {
			cout << "" << endl;
			cout << "Сделайте правильный выбор действия!!!" << endl;
			cout << "" << endl;
			continue;
		}
		cout << "----------------------------------" << endl;
		cout << "Ответ: " << e << endl;
		cout << "----------------------------------" << endl;
	} while (d);
	return 0;
}