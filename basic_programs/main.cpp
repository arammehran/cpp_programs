#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int number = (rand() % (6 - 1 + 1)) + 1;
	int number1 = (rand() % (6 - 1 + 1)) + 1;

	
	cout << number << " "<< number1;	

	return 0;
} 


