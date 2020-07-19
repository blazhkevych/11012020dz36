/*
* Пользователь 	вводит объем в бушелях.Перевести его 	в кварты.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите объем в бушелях : \n";
	int a;
	cin >> a;
	cout << "кварт = " << a * 32 << endl;
	return 0;
}
