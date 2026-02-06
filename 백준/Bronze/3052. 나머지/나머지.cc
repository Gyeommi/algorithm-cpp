#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, result = 0;
    int va[42] = {};
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        va[n % 42]++;
    }
    for (auto v : va)
    {
        if (v > 0)
            result++;
    }
    cout << result;

    return 0;
}