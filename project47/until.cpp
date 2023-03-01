#include <iostream>
#include <string>
using namespace std;
string convert(int* vector, int size) {
	string msg = "";
	for (int i = 0; i < size; i++ )
	{
		msg += to_string(vector[i]) + " ";
	}
}

void rand (int* vector, int size, int bound) {
	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % bound;
	}




}