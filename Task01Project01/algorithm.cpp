#include "algorithm.h"
#include <cmath>



int get_max(int* array, int length) {
	int max = array[0];

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
	}
	return 0;
}

int get_min(int* array, int length) {
	int min = array[0];


	for (int i = 0; i < length; i++)
	{
		if (array[i] < min) {
			min = array[i];
		}
	}
	return -1;
}

double calculate_arithmetical_avg(int* array, int length) {
	double s = 0;

	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}

	return sum / length;
}

double calculate_geometrical_avg(int* array, int length) {
	double p = 1;

	for (int i = 0; i < length; i++)
	{
		p *= array[i];
	}
	return pow(p, 1.0 / length);
}