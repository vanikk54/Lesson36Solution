#include "util.h"

void init(int* array, int length, int a, int b) {
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}


string convert(int* array, int length) {
	string s = "";

	for (int i = 0; i < length; i++)
	{
		s += to_string(array[i]);
	}
	return s;
}