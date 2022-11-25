#include <bits/stdc++.h>
using namespace std;

int main() {
    int a3,b3,a10 = 0,b10 = 0,x = 0;
    cin >> a3 >> b3;
    while(a3 > 0){
        a10 = a10 + (a3%10) * pow(3,x);
        a3 = a3/10;
        x++;
    }
    x = 0;
    while(b3 > 0){
        b10 = b10 + (b3%10) * pow(3,x);
        b3 = b3/10;
        x++;
    }
    cout << a10 + b10;
}
