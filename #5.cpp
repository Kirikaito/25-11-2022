#include <bits/stdc++.h>

using namespace std;

int main()
{
    int answ,n,test = 0;
    cin >> n;
    answ = n;
    double deg[n],half[n],x,y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        deg[i] = x/y;
        if (y < 0){
            half[i] = -1;
        }else{
            half[i] = 1;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int e = 0; e < i; e++){
            if((deg[i] == deg[e]) && (half[i] == half[e])){
                test = 1;
            }
        }
        if(test == 1){
            answ -= 1;
            test = 0;
        }
    }
    cout << answ;
}
