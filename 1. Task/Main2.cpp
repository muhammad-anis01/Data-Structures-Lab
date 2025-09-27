#include <iostream>
using namespace std;

//Task 2

int generateCode(int n) {
    if (n == 0) return 1;

    int result = 1;
    for (int i = n; i >= 1; i--) {
        result *= i; 
	}
    return result;
}

int main() {
    int (*codePtr)(int);

    codePtr = generateCode;

    int num;
    cout << "Agent, enter a number to generate your secret code: ";
    cin >> num;

    int secretCode = codePtr(num);

    cout << "Your secret code is: " << secretCode << endl;

    return 0;
}
