#include <iostream>
using namespace std;

// Function to print even numbers
void printEvenNumbers(int N)
{

	cout << "Even: ";
	for (int i = 1; i <= 2 * N; i++) {

		// Numbers that are divisible by 2
		if (i % 2 == 0)
			cout << i << " ";
	}
}

// Function to print odd numbers
void printOddNumbers(int N)
{

	cout << "\nOdd: ";
	for (int i = 1; i <= 2 * N; i++) {

		// Numbers that are not divisible by 2
		if (i % 2 != 0)
			cout << i << " ";
	}
}

// Driver code
int main()
{

	int N = 5;

	printEvenNumbers(N);
	printOddNumbers(N);

	return 0;
}

