#include <iostream>
using namespace std;
char* weird_string() {
	char a[] = "123456";
	return a;
}
int main()
{
	char* a = new char[10];
	a = weird_string();
	cout << a;
	return 0;
}
