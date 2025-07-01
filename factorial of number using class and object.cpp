//factorial of number using class and object
#include <iostream>
using namespace std;

class Fact {
public:
    int fact(int n) {
        if (n <= 1)
            return 1;
        else
            return n * fact(n - 1); 
    }
};

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial cant find for negative nums." << endl;
    } else {
        Fact f; 
        int result = f.fact(num); 
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}
