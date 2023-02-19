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

	// ����� 1.
	
	std::cout << "������ 1\n������� ��� ����� ->";
	std::cin >> n >> m;
	std::cout << "������� �������������� ���� ����� = " << mean(n, m) << "\n\n";
	
	
	// ������ 2.
	
	std::cout << "������ 2.\n������:\n";
	srand(time(NULL));
	const int size{ 10 };
	int arr1[size];

	std::cout << "[";
	for (int i{}; i < size; i++){
		arr1[i] = rand() % 20 - 5;
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b]\n";
	std::cout << "������� �������������� ������� = " << mean_arr(arr1, size) << "\n\n";
	

	// ������ 3.

	int N, M;
	std::cout << "������ 3.\n������� ��������� � ������� -> ";
	std::cin >> N >>  M;

	powers(N, M);

	// ������ 4.

	std::cout << "\n\n������ 4.\n����������� ������:\n";
	print_arr(arr1, size);

	std::cout << "\n���������� ������:\n";
	positive_arr(arr1, size);
	print_arr(arr1, size);


	return 0;
}