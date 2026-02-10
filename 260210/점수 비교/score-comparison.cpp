#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    int D;
    cin >> A >> B;
    cin >> C >> D;
    
    if(A>B){
        cout << (C>D);
    }
    else{
        cout << 0;
    }
}