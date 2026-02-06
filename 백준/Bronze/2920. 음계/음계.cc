#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[8];
    int asc = 0, dsc = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> n[i];

        if (n[i] == i + 1)
            asc += 1;
        else if (n[i] == 8 - i)
            dsc += 1;
    }
    if (asc == 8)
        cout << "ascending";
    else if (dsc == 8)
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}