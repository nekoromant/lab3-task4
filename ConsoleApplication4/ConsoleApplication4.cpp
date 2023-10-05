// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Дано оценка по пятибалльной шкале
вывести «отлично» для числа 5, «хоhрошо» для 4, «средне» для 3 и «хуже
среднего» для значений от 0 до 2 включительно*/

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите оценку по пятибалльной шкале: ";
	cin >> n;
		
	switch (n)
	{
	case 5: cout << "Отлично\n"; break;
	case 4: cout << "Хорошо\n"; break;
	case 3: cout << "Средне\n"; break;
	case 2:;
	case 1:;
	case 0: cout << "Хуже среднего\n"; break;
	default: cerr << "Ошибка: число не является оценкой\n";
	}

	system("pause");
	return 0;
}
