#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0,a,b,flag;
    cin >> a >> b;
    for(int f = 1; a + f < 1000000000;f++){
        if(a > 0){
            f = 0-f;
        }
        for(int k = 0; k < abs(f) + 1;k++){
            if(f < 0){
                k = 0 - k;
            }
            for(int g = 1; b + g < 1000000000;f++){
                if(b > 0){
                    g = 0-g;
                }
                for(int j = 0; j < abs(g) + 1;j++){
                    if(g < 0){
                        j = 0 - j;
                    }
                    for(int m = 0; m < 3;m++){
                        for(int n = 0; n < 3;n++){
                            if(m == 0){
                                x1 = a + f;
                            }else{
                                x1 = a - (f-k);
                            }
                            if(m == 1){
                                x2 = a + f;
                                flag = 1;
                            }else{
                                x2 = a - k;
                                flag = 0;
                            }
                            if(m == 2){
                                x3 = a + f;
                            }else{
                                x3 = a - (f-k);
                                if(flag = 1){
                                    x1 = a - k;  
                                }
                            }
                            if(n == 0){
                                y1 = b + g;
                            }else{
                                y1 = b - (g-j);
                            }
                            if(n == 1){
                                y2 = b + g;
                                flag = 1;
                            }else{
                                y2 = b - j;
                                flag = 0;
                            }
                            if(n == 2){
                                y3 = b + g;
                            }else{
                                y3 = b - (g-j);
                                if(flag = 1){
                                    y1 = b - j;
                                }
                            }
                            if(((x3 - x1) * (y2 - y1) == (y3 - y1) * (x2 - x1))&&((x1 + x2 + x3 == a*3)&&(y1 + y2 + y3 == b*3))){
                                cout << "YES\n"<< x1 <<" "<< y1 <<"\n"<< x2 <<" "<< y2 <<"\n"<< x3 <<" "<< y3;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "NO";
}
