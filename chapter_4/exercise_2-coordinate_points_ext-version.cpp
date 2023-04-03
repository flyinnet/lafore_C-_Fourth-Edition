/*Расширенная версия упражнения. От стандартных требований добавлена проверка на не числовые значения ввода пользователя.
 * Отличия от требуемой задачи:
 * 1. Массив структур
 * 2. Структура принимает строковое значение, а не целочисленное.
 * 3. Проверка строки на не числовое значение. Функция: !isdigit
 * 4. Преобразования типов для вычисления и обратно для сохранения в структуру.
 * 5. Функция size() для подсчета длинны строки
*/

#include <iostream>

using namespace std;

struct point
{
	string axis_x;			//координата по оси X
	string axis_y;			//координата по оси y
};

int main()
{
	point points[2], goal_point;	//Объявляем массив структур и структуру для вычисляемой точки
	for (int i=0; i<2; i++)
	{
		cout << "Введите координаты точки. (Пример 10 20): ";
		cin >> points[i].axis_x >> points[i].axis_y;
		bool numbers = 1;			//Объявляем и присваиваем значение переменной для 
		for (int j=0; j < points[i].axis_x.size(); j++)
		{
			if (!isdigit(points[i].axis_x[j]))	//Проверяем каждый символ введенный пользователем на число
			{
				cout << "Допущена ошибка, в введенных координатах имеется не числовой символ" << endl;
				return 1;
			};
		};
		for (int j=0; j < points[i].axis_y.size(); j++)
		{
			if (!isdigit(points[i].axis_y[j]))
			{
				cout << "Допущена ошибка, в введенных координатах имеется не числовой символ" << endl;
				return 1;
			};
		};
	}
	goal_point.axis_x = to_string(stoi(points[0].axis_x) + stoi(points[1].axis_x));
	goal_point.axis_y = to_string(stoi(points[0].axis_y) + stoi(points[1].axis_y));
	cout << "Координаты точки point1 + point2 = " << goal_point.axis_x << ", " << goal_point.axis_y << endl;
	return 0;
}
