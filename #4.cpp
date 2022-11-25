#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x_f,y_f,c = 0,answ = 0;
    cin >> x_f >> y_f;
    int field[x_f][y_f],mark1[x_f][y_f],mark2[x_f][y_f];
    for(int y = 0; y < y_f; y++){
        for(int x = 0; x < x_f; x++){
            cin >> field[x][y];
            mark1[x][y] = 0;
            mark2[x][y] = 0;
        }
    }
    
    for(int x = 0; x < x_f; x++){
        for(int y = 0; y < y_f; y++){
            if(field[x][y] > c){
                c = field[x][y];
            }
        }
        for(int y = 0; y < y_f; y++){
            if(field[x][y] == c){
                mark1[x][y] = 1;
            }
        }
        c = 0;
    }
    
    c = 1000;
    for(int y = 0; y < y_f; y++){
        for(int x = 0; x < x_f; x++){
            if(field[x][y] < c){
                c = field[x][y];
            }
        }
        for(int x = 0; x < x_f; x++){
            if(field[x][y] == c){
                mark2[x][y] = 1;
            }
        }
        c = 1000;
    }
    
    for(int y = 0; y < y_f; y++){
        for(int x = 0; x < x_f; x++){
            if(mark1[x][y] && mark2[x][y]){
                answ ++;
            }
        }
    }
    cout << answ;
}
