/* Расширенная версия программы из упражнения 1. Добавлена проверка на количество символов и устранена ошибка с первыми нулями. Что нового использовалось:
 * 1. Функция size для подсчета длинны строки
 * 2. Функция isdigit для проверки введенных пользователем данных на не числовые символы
*/
#include <iostream>

using namespace std;

struct phone 
{
	string area_code;			//Код города
	string telephone_exhange;	//код телефонной станции
	string subscriber;			//код абонента
};

int main()
{
	phone my_phone = {"212", "767", "8900"}, your_phone;
	cout << "Введите номер телефона без указания кода страны." << endl;
	cout << "пример: 923 142 1111 (код города, номер АТС, номер абонента): ";
	cin >> your_phone.area_code >> your_phone.telephone_exhange >> your_phone.subscriber;
	for (int j=0; j < your_phone.area_code.size(); j++)
		{
			if (!isdigit(your_phone.area_code[j]))	//Проверяем каждый символ введенный пользователем на число
			{
				cout << "Допущена ошибка, в коде города" << endl;
				return 1;
			};
		}
	for (int j=0; j < your_phone.telephone_exhange.size(); j++)
		{
			if (!isdigit(your_phone.telephone_exhange[j]))	//Проверяем каждый символ введенный пользователем на число
			{
				cout << "Допущена ошибка, в номере телефонной станции" << endl;
				return 1;
			};
		}
	for (int j=0; j < your_phone.subscriber.size(); j++)
		{
			if (!isdigit(your_phone.subscriber[j]))	//Проверяем каждый символ введенный пользователем на число
			{
				cout << "Допущена ошибка, в номере абонента" << endl;
				return 1;
			};	
		};
	if (your_phone.telephone_exhange.size() != 3 || your_phone.area_code.size() != 3)
	{
		cout << "Вы ввели не верный код города или номер телефонной станции, он должен быть трехзначым" << endl;
		return 1;
	}
	if (your_phone.subscriber.size() != 4)
	{
		cout << "Вы ввели не верный номер абонента, он должен быть четырехзначным" << endl;
		return 1;
	}
	cout << "Мой номер: " "+7 " << "(" << my_phone.area_code << ") " << my_phone.telephone_exhange << "-" << my_phone.subscriber << endl;
	cout << "Ваш номер: " "+7 " << "(" << your_phone.area_code << ") " << your_phone.telephone_exhange << "-" << your_phone.subscriber << endl;
	return 0;
}
	
