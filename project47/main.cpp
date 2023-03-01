#include <iostream>

using namespace std;
string convert(int* vector, int size);
void rand(int* vector, int size, int bound);
int min(int* vector, int size);
int max(int* vector, int size);

int main() {

	int size;
	cout << "input size";
	cin >> size;
 int* vector = new int[size];
 rand();


 delete[] vector;

	return 0;
}