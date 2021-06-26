#include <cmath>
#include <iostream>
using namespace std;

int maximumXOR(int n, int l, int r)
{
	int x = 0;
	for (int i = log2(r); i >= 0; --i)
	{
		if (n & (1 << i)) // Set bit
		{
			if (x + (1 << i) - 1 < l)
				x ^= (1 << i);
		}
		else // Unset bit
		{
			if ((x ^ (1 << i)) <= r)
				x ^= (1 << i);
		}
	}
	return n ^ x;
}

int main()
{
	int n = 7, l = 2, r = 23;
	cout << "The output is " << maximumXOR(n, l, r);
	return 0;
}
