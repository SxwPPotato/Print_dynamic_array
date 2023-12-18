#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
	std::cout << "Динамический массив: ";
	for (int i = 0; i < actual_size; ++i) {
		if (i >= logical_size) {
			std::cout << " _ ";
		}
		else
		std::cout << arr[i] << " ";
		
	}




}

int main()
{
	setlocale(LC_ALL, "russian");
	int logical_size;
	int actual_size;
	std::cout << "Введите фактичеcкий размер массива: ";
	std::cin >> actual_size;
	std::cout << "Введите логический размер массива: ";
	std::cin >> logical_size;
	if (logical_size > actual_size) {
		std::cout << "Ошибка! Логический размер массива не может превышать фактический!\n";
		return 0;
	}
	int* mass = new int[actual_size];
	for (int i = 0; i < logical_size; ++i) {
		std::cout << "Введите arr["<< i <<"]: ";
		std::cin >> mass[i];
	}
	print_dynamic_array(mass, logical_size, actual_size);
	std::cout << "\n";
	return 0;
}
