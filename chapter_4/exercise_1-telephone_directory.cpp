#include <iostream>

using namespace std;

struct phone 
{
	int area_code;			//Код города
	int telephone_exhange;	//код телефонной станции
	int subscriber;			//код абонента
};

int main()
{
	phone my_phone = {212, 767,8900}, your_phone;
	cout << "Введите номер телефона без указания кода страны." << endl;
	cout << "пример: 923 142 1111 (код города, номер АТС, номер абонента): ";
	cin >> your_phone.area_code >> your_phone.telephone_exhange >> your_phone.subscriber;
	if (100 > your_phone.area_code || your_phone.area_code > 999)
	{
		cout << "Вы ввели не верный код города, код города должен быть трехзначным" << endl;
	}
	else if (100 > your_phone.telephone_exhange || your_phone.telephone_exhange > 999)
	{
		cout << "Вы ввели не верный номер телефонной станции, он должен быть трехзначым" << endl;
	}
	else if (1000 > your_phone.subscriber || your_phone.subscriber > 9999)
	{
		cout << "Вы ввели не верный номер абонента, он должен быть четырехзначным" << endl;
	}
	else
	{
		cout << "Мой номер: " "+7 " << "(" << my_phone.area_code << ") " << my_phone.telephone_exhange << "-" << my_phone.subscriber << endl;
		cout << "Ваш номер: " "+7 " << "(" << your_phone.area_code << ") " << your_phone.telephone_exhange << "-" << your_phone.subscriber << endl;
	}
	return 0;
}
	
