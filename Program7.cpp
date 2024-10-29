// CS 2130 Comp. Struct.
// Program 7
// Matthew Feil
#include <iostream>
using namespace std;

int permWithRepeats(int n, int r) {
    int result = n;
    for (int i = 1; i < r; i++) {
        result = result * n;
    }
    return result;
}

int factorial(int num) {
    int result = num;
    int fact = num - 1;
    for (int i = 0; i < num - 2; i++) {
        result = result * fact;
        fact = fact - 1;
    }
    return result;
}

int main() {

    int n, r;
    cout << "Please Enter Value for n: ";
    cin >> n;
    cout << endl;
    cout << "Please Enter Value for r: ";
    cin >> r;
    int enMinusAr = n - r;

    int permWithRep = permWithRepeats(n, r);
    cout << endl << "P(n,r) with repeats: " << permWithRep << endl;

    int permWithoutRep = factorial(n) / factorial(enMinusAr);
    cout << "P(n,r) without repeats: " << permWithoutRep << endl;


    return 0;
}

