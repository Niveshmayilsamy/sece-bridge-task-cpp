// find the greatest and least among three num
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int greatest;
    if (a >= b && a >= c) {
        greatest = a;
    } else if (b >= a && b >= c) {
        greatest = b;
    } else {
        greatest = c;
    }

    int least;
    if (a <= b && a <= c) {
        least = a;
    } else if (b <= a && b <= c) {
        least = b;
    } else {
        least = c;
    }

    cout << "Greatest: " << greatest << endl;
    cout << "Least: " << least << endl;

    return 0;
}
