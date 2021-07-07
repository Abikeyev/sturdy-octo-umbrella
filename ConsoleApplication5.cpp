#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	bool var = true;
	do {
		cout << "Выберите фразу 1 или 2: ";
		int a;
		int n;
		cin >> a;
		if (a == 1) {
			cout << "Сколько раз повторить фразу: ";
			cin >> n;
			for (int i = 0; i < n; i++) {
				cout << "Hello, WORLD!!! " << endl;
			}
		}
		else if (a == 2) {
			cout << "Сколько раз повторить фразу: ";
			cin >> n;
			for (int i = 0; i < n; i++) {
				cout << "Godbye! " << endl;
			}
		}
		else {
			cout << "Введите правильное число для фраз! " << endl;
		}
		cout << " " << endl;
	} while (var);
	return 0;
}