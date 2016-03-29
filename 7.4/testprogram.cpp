#include <iostream>
#include "Person.h"

using namespace std;

template <typename T>
bool isEqualTo(const T &first, const T &second)
{
	return(first == second);
}

template <typename Y>
void print(const Y &first, const Y &second)
{
	cout << first << " og " << second << (isEqualTo(first, second) ? " er ens" : " er ikke ens") << endl;
}

int main()
{
	Person Bo("Bo", 28);
	Person Tove("Tove", 28);

	print(Bo, Tove);

	Person Bo2("Bo", 28);

	print(Bo, Bo2);

}