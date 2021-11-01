#include <iostream>
#include <iomanip>
using namespace std;

void InArr(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
		arr[i] = -5 + rand() % 18;
}

void PrArr(int arr[], const int size)
{
	cout << "{";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
	}
	cout << "}" << endl;
}

int SuArr(const int* const arr, const int size)
{
	int S = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > 0 || arr[i] % 2 == 0)
			S += arr[i];
	return S;
}

int CEArr(const int* const arr, const int size)
{
	int C = 0;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > 0 || arr[i] % 2 == 0)
			C++;
	return C;
}

void REArr(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0 || arr[i] % 2 == 0)
			arr[i] = 0;
	}
}

int main()
{
	srand(time(0));

	const int size = 24;
	int Arr[size];

	InArr(Arr, size);
	PrArr(Arr, size);
	cout << "Array sum by condition = " << SuArr(Arr, size) << endl;
	cout << "Count element by condition = " << CEArr(Arr, size) << endl;
	REArr(Arr, size);
	PrArr(Arr, size);

	return 0;
}