#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x_f,y_f,m,x,y,c = 0;
    cin >> x_f >> y_f >> m;
    char field[x_f][y_f],list[9] = "12345678";
    for(int i = 0; i < x_f; i++){
        for(int e = 0; e < y_f; e++){
            field[i][e] != '.';
        }
    }
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        field[x - 1][y - 1] = '*';
    }
    for(int i = 0; i < x_f; i++){
        for(int e = 0; e < y_f; e++){
            if(field[i][e] != '*'){
                for(int a = i - 1; a < i + 2; a++){
                    for(int b = e - 1; b < e + 2; b++){
                        if(a >= 0 and b >= 0){
                            if(field[a][b] == '*'){
                                c += 1;
                            }
                        }
                    }
                }
                if(c == 0){
                    field[i][e] = '.';
                }else{
                    field[i][e] = list[c - 1];
                }
                c = 0;
            }
        }
    }
    for (int i = 0; i < x_f; i++) {
		for (int e = 0; e < y_f; e++) {
			cout << field[i][e];
		}
		cout << endl;
    }
}
