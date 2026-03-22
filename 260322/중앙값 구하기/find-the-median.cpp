#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // A>B>C  A>C>B  B>A>C  B>C>A  C>B>A  C>A>B

    // A
    if ((B>A && A>C) || (C>A && A>B)) {
        cout << A;
    }
    // B
    else if ((A>B && B>C) || (C>B && B>A)) {
        cout << B;
    }
    // C
    else {
        cout << C;
    }
}
