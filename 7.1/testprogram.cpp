#include <iostream>

using namespace std;

template <typename T>
bool isEqualTo(const T &first, const T &second)
{
	return(first == second);
}

template <typename T>
void print(const T &first, const T &second)
{
	cout << first << " og " << second << (isEqualTo(first, second) ? " er ens" : " er ikke ens") << endl;
}

int main()
{
	int A, B;

	cout << "Tester funktioner isEqualTo() & print() med integers!" << endl << endl;

	A = 7;
	B = 9;

	print(A, B);
	A = B;
	print(A, B);

	cout << endl << endl << "Tester funktioner isEqualTo() & print() med chars!" << endl << endl;

	char C, D;

	C = 'A';
	D = 'B';

	print(C, D);
	C = D;
	print(C, D);

	cout << endl << endl << "Tester funktioner isEqualTo() & print() med doubles!" << endl << endl;

	double E, F;

	E = 1.1;
	F = 2.2;

	print(E, F);
	E = F;
	print(E, F);
	
}