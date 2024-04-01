#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	//Задание 1
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	cout << "Задание 1" << endl;
	const int SIZE = 10;
	int arr[SIZE];
	int min=1000, max=0;


	for (int i = 0; i < SIZE; i++)//заполняем массив
	{
		arr[i] = rand() % 50 + 1;
		cout << arr[i] << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}

		else if (arr[i] < min) {
			min = arr[i];



		}
	}
	cout << "Мин: " << min<<endl;
	cout << "Макс: " << max << endl;


	//задание 2
	cout << "Задание 2"<<endl;
	const int SIZE_2 = 10;
	int arr_2[SIZE_2];
	int start, end, number, sum = 0;
	cout << "Введите начало диапозона [0;9]: ";
	cin >> start;
	cout << "Введите конец диапозона: ";
	cin >> end;
	cout << "Введите число: ";
	cin >> number;

	for (int i = 0; i < SIZE_2; i++)//заполняем массив
	{
		arr_2[i] = rand() % 50 + 1;
		cout << arr_2[i] << endl;
	}

	for (int i = start; i <= end; i++)
	{
		if (arr_2[i] < number) {
			sum += arr_2[i];


		}


	}
	cout << "Сумма равна " << sum<<endl;

	cout << "Задание 3" << endl;
	//задание 3
	const int SIZE_3 = 13;
	int year[SIZE_3];
	int start_3, end_3, max_3=0,min_3;
	year[0] = 0;//чтобы месяца начинались с 1 


	cout << "Вводите прибыль за год по месяцам, начиная с января"<<endl;
	for (int i = 1; i < SIZE_3; i++)
	{
		cin >> year[i];
		


	}

	cout << "Введите диапазон месяцев (от и до включительно): ";
	cin >> start_3;
	cin >> end_3;

	min_3 = year[end_3];
	for (int i = start_3; i <= end_3; i++)
	{
		if (max_3 < year[i]) {
			max_3 = year[i];


		}
		if (min_3 > year[i]) {
			min_3 = year[i];


		}




	}

	cout << "Мин: " << min_3;
	cout << "Макс: " << max_3;



	return 0;
}