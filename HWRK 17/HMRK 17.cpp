#include <iostream>
#include <ctime>
#include <cstdlib>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
double mean_arr(int array[], const int length) {
	double sum{};
	for (int i{}; i < length; i++)
		sum += array[i];
	return sum / (double)length;
}
void powers(int num1, int num2) {
	int tmp{1};
	std::cout << num1 << " ^ 0 = 1\n";
	for (int i{1}; i <= num2; i++) {
		tmp *= num1;
		std::cout << num1 << " ^ " << i << " = " << tmp << "\n";
	}

}
void positive_arr(int array[], const int length) {
	for (int i{}; i < length; i++) {
		if (array[i] < 0)
			array[i] *= -1;
	}
}
void print_arr(int array[], const int length) {
	std::cout << '[';
	for (int i{}; i < length; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n\n";
}
int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;

	// Задаа 1.
	
	std::cout << "Задача 1\nВведите два числа ->";
	std::cin >> n >> m;
	std::cout << "Среднее арифметическое этих чисел = " << mean(n, m) << "\n\n";
	
	
	// Задача 2.
	
	std::cout << "Задача 2.\nМассив:\n";
	srand(time(NULL));
	const int size{ 10 };
	int arr1[size];

	std::cout << "[";
	for (int i{}; i < size; i++){
		arr1[i] = rand() % 20 - 5;
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b]\n";
	std::cout << "Среднее арифметическое массива = " << mean_arr(arr1, size) << "\n\n";
	

	// Задача 3.

	int N, M;
	std::cout << "Задача 3.\nВведите основание и степень -> ";
	std::cin >> N >>  M;

	powers(N, M);

	// Задача 4.

	std::cout << "\n\nЗадача 4.\nИзначальный массив:\n";
	print_arr(arr1, size);

	std::cout << "\nИзмененный массив:\n";
	positive_arr(arr1, size);
	print_arr(arr1, size);


	return 0;
}