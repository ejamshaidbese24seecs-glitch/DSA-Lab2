#include <iostream>
#include <cstring>  // for strlen

using namespace std;

int main() {
	int size;

	cout << "Enter the maximum length of the string: ";
	cin >> size;
	cin.ignore();  // To consume the newline after size input

	// Allocate memory for string (+1 for null terminator)
	char* str = new char[size + 1];

	cout << "Enter the string: ";
	cin.getline(str, size + 1);

	// Find length of the string
	int len = strlen(str);

	// Reverse the string in place
	for (int i = 0; i < len / 2; ++i) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	cout << "Reversed string: " << str << endl;
	system("pause");
	// Free allocated memory
	delete[] str;

	return 0;
}
