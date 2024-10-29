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
    if (enMinusAr == 0) {
        enMinusAr = 1;
    }
    int enPlusKminusOne = (n + r) - 1;
    int specialN = enPlusKminusOne - r;
    if (specialN == 0) {
        specialN = 1;
    }

    int permWithRep = permWithRepeats(n, r);
    cout << endl << "P(n,r) with repeats: " << permWithRep << endl;

    int permWithoutRep = factorial(n) / factorial(enMinusAr);
    cout << "P(n,r) without repeats: " << permWithoutRep << endl;

    int combWithRepeats = factorial(n) / (factorial(r) * factorial(enMinusAr));
    cout << "C(n,r) with repeats: " << combWithRepeats << endl;

    int combWithOutRepeats = factorial(enPlusKminusOne) / (factorial(r) * factorial(specialN));
    cout << "C(n,r) with repeats: " << combWithOutRepeats << endl;

    cout << "Thank You!" << endl;

    return 0;
}

