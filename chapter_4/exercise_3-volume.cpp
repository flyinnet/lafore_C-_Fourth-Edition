/*Упражнение 3: Расчет объема
 * Значение символа степени 3 брал из таблицы символов: 
 * https://symbl.cc/ru/collections/superscript-and-subscript-numbers/
 * Особенность: В таблице нет интерпретации для C++.
 * Однако можно взять значение для css и после символа "\"
 * добавить букву u обозначающую unicode. Такая интерпретация подойдет
 * для компилятора gnu g++ */
#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};
struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};

int main()
{
	Volume volume = {
		volume.length.feet = 10,
		volume.length.inches = 5.75, 
		volume.width.feet = 5, 
		volume.width.inches = 3.5, 
		volume.height.feet = 3, 
		volume.height.inches = 7.3
		};
	cout << "Объем помещения равен: " <<
	(float(volume.length.feet) + volume.length.inches / 12) *
	(float(volume.width.feet) + volume.width.inches /12) *
	(float(volume.height.feet) + volume.height.inches /12) << 
	"ft\u00B3" << endl;
	return 0;
}
