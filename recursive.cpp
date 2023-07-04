#include <iostream>

using namespace std;

void printSpaces(int n) {
    if (n > 0) {
        cout << ' ';
        printSpaces(n - 1);
    }
}

void printPattern3(int s, int n) {
    if (s < n) {
        int left = min(s, n - s - 1);
        int middle = n - 2 * left - 2;
        printSpaces(left);
        cout << '*';
        if (middle >= 0) {
            printSpaces(middle);
            cout << '*';
        }
        cout << endl;
        // print stars of the remaining rows recursively
        printPattern3(s + 1, n);
    }
}



int main() {
    int n = 3;
    cout << "Enter the number of lines: ";
    cin >> n;
    cout<<endl<<endl;
    printPattern3(0, n);
    return 0;
} 

