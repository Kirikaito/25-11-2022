#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x_f, y_f, min_max = 1000, max_min = -1000, min = 1000, max = -1000;
    cin >> x_f >> y_f;
    int field[x_f][y_f];
    for (int x = 0; x < x_f; x++) {
        for (int y = 0; y < y_f; y++) {
            cin >> field[x][y];
        }
    }

    for (int x = 0; x < x_f; x++) {
        for (int y = 0; y < y_f; y++) {
            if (field[x][y] < min) {
                min = field[x][y];
            }
        }
        if (min > max) {
            max = min;
        }
        min = 1000;
    }
    cout << max << ' ';

    for (int x = 0; x < x_f; x++) {
        max = -1000;
        for (int y = 0; y < y_f; y++) {
            if (field[x][y] > max) {
                max = field[x][y];
            }
        }
        if (min > max) {
            min = max;
        }
    }
    cout << min;
}
