#include <iostream>
using namespace std;

int main()
{
	int n, x, v;
	cin >> n;
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> v;
		if (v < x)
		{
			cout << v << " ";
		}
	}


	return 0;
}