#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	int choice = 0;
	bool exit = true;


	while (exit == true) {

		cout << "\n\t1. ������ ���������� � �������\n\t2. ������������ ���� �����\n\t3. ����� �������\n\t4. �������\n\t5. ������������ ���\n\t6. �����\n\t0. �����  ";
		cin >> choice;
		if (choice == 1) {

		}
		else if (choice == 2) {

		}
		else if (choice == 0) {

			exit = false;
			cout << "�� ��� �����!";
		}



	}

	system("pause");
	return 0;
}