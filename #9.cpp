#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,test = 0;
    string st;
    set<string>f;
    set<string>mf;
    set<string>afo;
    cin >> n;
    for(int i=0 ;i < n; i++){
        cin >> st;
        f.insert(st);
    }
    cin >> m;
    for(int i=0 ;i < m; i++){
        cin >> st;
        for(auto e : f){
            if(st == e){
                test = 1;
            }
        }
        if(test == 1){
            mf.insert(st);
            test = 0;
        }else{
            afo.insert(st);
        }
    }
    cout <<"Friends: ";
    for(auto i : f){
        cout << i << ", "; 
    }
    cout<<endl;
    
    cout <<"Mutual Friends: ";
    for(auto i : mf){
        cout << i << ", "; 
    }
    cout<<endl;
    
    cout <<"Also Friend of: ";
    for(auto i : afo){
        cout << i << ", "; 
    }
    cout<<endl;
}
