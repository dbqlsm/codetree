#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    cin >> A >> B;

    int i;
    for(i=B; i>A-1; i-=1){
        cout << i << " ";
    }
}