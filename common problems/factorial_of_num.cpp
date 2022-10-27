#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}


int main()
{
	int number ;
  cout << "The Number is : " ;
  cin >> number;
	cout << "Factorial of "
		<< number << " is " << factorial(number) << endl;
	return 0;
}
