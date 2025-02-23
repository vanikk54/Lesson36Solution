#include "util.h"
#include "algorithm.h"
#define SIZE 10

int main() {
	int array[SIZE]{};

	cout << "Before array " << convert(array, SIZE) << endl;
	init(array, SIZE, -10, 10);
	cout << "After array " << convert(array, SIZE) << endl;
	int max = get_max(array, SIZE);
	cout << "Max value of array " << max << "./n";

	int min = get_min(array, SIZE);
	cout << "Min value of array " << min << "./n";

	double arithmetical_avg = calculate_arithmetical_avg(array, SIZE);
	cout << "Arithmetical average " << arithmetical_avg << "./n";

	double geometrical_avg = calculate_geometrical_avg(array, SIZE);
	cout << "Geometrical average " << geometrical_avg << "./n";

	return 0;
}