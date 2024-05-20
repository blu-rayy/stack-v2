#include <iostream>
#include "data.h"
using namespace std;

int main() {
    int size;
    cout << "== STACK INVENTORY ==" << endl << endl;

    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack<int> s(size);
    s.operations();
    return 0;
}
