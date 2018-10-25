#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <fstream>
#include "BigIntegerLibrary.hh"

using namespace std;

int isPrime(long long x) {
	if (x == 2) return 1;
	for (unsigned int i = 2; i < sqrt(x); i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

void prime_divisors(long long numb) {
	long long divisor = 2;
	while (divisor*divisor <= numb)
	{
		if (numb%divisor == 0)
		{
			cout << divisor;
			numb = numb / divisor;
			cout << " ";
		}
		else if (divisor == 2) divisor = 3;
		else divisor = divisor + 2;
	}
	cout << numb;
}

int main() {
	long long x;

	std::string s("3141592653589793238462643383279");
	BigInteger f = stringToBigInteger(s);

	cout << f << endl;

	/*ifstream fin("in_primeFactors\\random15_in.txt");
	ofstream fout("out_primeFactors\\random15_out.txt");
	
	cin >> x;
		cout << x << " " << isPrime(x) << endl;
	
	int start = clock();
	prime_divisors(x);	
	int end = clock();
	cout << endl;
	
	int time = (end - start);
	cout << time << endl;*/
	system("pause");
}