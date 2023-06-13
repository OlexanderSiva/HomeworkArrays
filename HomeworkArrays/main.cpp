#include<iostream>
using namespace std;
#define tab "\t"
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
#define TASK_5
void main()
{
	setlocale(0, "");
#ifdef TASK_1
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int buffer = 0;
			if (arr[i] < arr[j]) {
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif //TASK_1 Сортировка массива по возрастанию
#ifdef TASK_2
 
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 11 + 70;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif //TASK_2 Вывод массива заполненый уникальными числами в диапозоне от 70 до 80
#ifdef TASK_4
	int decimal = 0;
	cout << "Введите десятичное число" << endl; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //Максимально возможная разрядность двоичного числа
	bool bin[MAX_BIN_CAPACITY] = {}; //Массив хранит разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}
	for (i--; i >=0;i--)
	{
		cout << bin[i];
	}
#endif //TASK_4 Перевод числа из десятичной в двоичную систему 
#ifdef TASK_5
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8;
 char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
	}
	for (i--; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		/*
		if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);
		*/
		/*
		switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}
		*/
		//cout << hex[i];
	}
	cout << endl;
#endif //TASK_5 Перевод числа из десятичной в шестнадцатиричную систему
#ifdef TASK_3 
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		// Проверка, встречалось ли раньше
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		// Поиск повторений
		int count = 0;
		for (int j = 1 + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)cout << "Значение " << arr[i] << " повторяется " << count << " раз " << endl;
		if (count)printf("Значение %d встречается %d раз\n", arr[i], count);
	}
	cout << endl;

#endif //TASK_3 Сортировка
}