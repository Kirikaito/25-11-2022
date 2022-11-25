#include <iostream>
using namespace std;

int main()
{
	string alf = "abcdefghijklmnopqrstuvwxyz ";
    string code = "0123456789ABCDEFGHIJKLMNOPQ";
    string a;
    cin >> a;

    for(int i = 0; a.length() > i; i++) {
    cout << alf[((code.find(a[i])+25-i)%27)];
    }
}.
