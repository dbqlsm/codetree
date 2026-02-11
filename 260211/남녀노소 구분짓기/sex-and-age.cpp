#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    cin >> n >> a;
    
    if(n==0){
        if(a>=19){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    else{
        if(a>=19){
            cout << "WoMAN";
        }
        else{
            cout << "GIRL";
        }
    }
}