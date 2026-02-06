#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int re = 0, cnt = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'O')
                cnt++;
            else
                cnt = 0;
            re += cnt;
        }
        cout << re << "\n";
    }

    return 0;
}