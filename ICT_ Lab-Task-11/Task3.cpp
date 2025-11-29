#include <iostream>
using namespace std;

class Printer {
public:
    void print(int x) {
        cout << "Printing int: " << x << endl;
    }

    void print(double y) {
        cout << "Printing double: " << y << endl;
    }
};

int main() {
    cout << "----- Task 3 -----" << endl;
    Printer p;

    p.print(10);   
    p.print(3.14);    

    return 0;
}

