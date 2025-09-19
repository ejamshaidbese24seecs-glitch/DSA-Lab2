#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
	cout << "Memory address: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
}
int main(){
	int a = 5;
	cout << "Display stack variable:"<<endl;
	analyze_pointer(&a);
	int *b = new int(6);
	cout << "Display heap variable" << endl;

	analyze_pointer(b);
	system("pause");
	delete b;

}