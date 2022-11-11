#include <iostream>  

#include <iomanip>  

#include <time.h>  
using namespace std;

void random(int* mas, const int size, const int min, const int max) {

	for (int i = 0; i < size; i++) {

		mas[i] = min + rand() % (max - min + 1);
	}
}

void wivid(int* mas, const int size) {
	for (int i = 0; i < size; i++)
		cout << mas[i] << setw(4);
	cout << setw(4) << endl;
}

void Inverse(int* mas, const int size)
{
	int tmp;
	for (int i = 0; i < size / 2; i++)
	{
		tmp = mas[i];
		mas[i] = mas[size - 1 - i];
		mas[size - 1 - i] = tmp;
	}
}


int main() {

	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;
	const int n = 25;
	int b[n];
	int breverse[n];

	random(b, n, min, max);//putting random elements into empty array 
	cout << "Massive: " << endl;
	wivid(b, n); //printing filled with elements 
	cout << "Inverse of Massive: " << endl;
	Inverse(b, n);
	wivid(b, n); //printing filled with elements 
	cout << endl;
	return 0;
}
