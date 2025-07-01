multiplication table generic input for n number of table
#include <iostream>
using namespace std;

class Table {
public:
    void printTable(int n) {
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }
};

int main() {
    int count;
    cout << "how many table ? ";
    cin >> count;

    int numbers[count];

    for (int i = 0; i < count; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    Table t; 

    for (int i = 0; i < count; i++) {
        cout << "\nTable of " << numbers[i] << ":\n";
        t.printTable(numbers[i]);
    }

    return 0;
}
