#include <iostream>
using namespace std;

int main() {
    int N;
    int M;
    cin >> N >> M;

    while(N!=0){
        cout << N << "\n";
        N = N / M;
    }
}