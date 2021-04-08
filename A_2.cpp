#include <iostream>
using namespace std;
void printAddressOfArray(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Dia chi cua cua phan tu thu " << i+1 << " sau khi truyen vao mang la " << &arr[i] << endl;
	}
}
int main()
{
	int arr[5];
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		cout << "Dia chi cua cua phan tu thu " << i+1 << " trong ham main la " << &arr[i] << endl;
	}
	cout << "_____________________________________________" << endl;
	printAddressOfArray(arr, n);
	system("pause");
	return 0;
}
