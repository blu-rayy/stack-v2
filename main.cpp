#include <iostream>
#include <string>
#include "data.h"
using namespace std;

int main() {
    string input;
    int size;
    cout << "== STACK INVENTORY ==" << endl << endl;

     while (true) {
        cout << "Enter the size of the stack: ";
    	getline(cin, input);

        bool valid_input = true;
        for (char c : input) {
            if (!isdigit(c)) {
                valid_input = false;
                break;
            }
        }
        if (valid_input) {
            size = stoi(input);
            break;
        }
        else {
            cout << "\x1b[31m\nPlease enter an integer input only.\x1b[0m\n" << endl;
        }
    }

    Stack<int> s(size);
    s.operations();
    return 0;
}
