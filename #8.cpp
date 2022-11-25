#include <bits/stdc++.h>
using namespace std;

int main()
{
    double f, b, summ = 0, p;
    cin >> f >> b;
    for (int x = 0; x < (b / f); x++) {
        for (int y = 0; y < f; y++) {
            cin >> p;
            summ += (x + 1) * p;
        }
    }
    cout << summ;
}
