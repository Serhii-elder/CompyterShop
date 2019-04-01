#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	int choice = 0;
	bool exit = true;


	while (exit == true) {

		cout << "\n\t1. Выдать информацию о товарах\n\t2. Коректеровка базы даных\n\t3. Поиск товаров\n\t4. Выборка\n\t5. Коректеровка цен\n\t6. Отчет\n\t0. Выход  ";
		cin >> choice;
		if (choice == 1) {

		}
		else if (choice == 2) {

		}
		else if (choice == 0) {

			exit = false;
			cout << "На все добре!";
		}



	}

	system("pause");
	return 0;
}