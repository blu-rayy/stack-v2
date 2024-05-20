#include <iostream>
#include "data.h"
template <typename T>
using namespace std;


T pop() {
    if (top == -1){
			cout << "Stack is empty. . No elements to pop.";
			return -1;
		} else {
			return a[top--];
		}
}

void Stack<T>::display() {
    if (top == -1){
        	cout << "Stack is empty. No element to display.";
		} else{
			for (int i = top; i >= 0; i--){
				cout << "Elements in stack: " << a[i] << " ";
			}
		}
}

void Stack<T>::operations() {
    int ch;
    while (true) {
        cout << "\nStack Operations Menu\n1- Push an element\n2- Pop\n3- Display the elements\n4- Exit\nSelect an operation: ";
        cin >> ch;
        switch (ch) {
        case 1: {
            T element;
            cout << "Enter the element to push: ";
            cin >> element;
            push(element);
            break;
        }
        case 2: {
            T val = pop();
            if (val != -1) {
                cout << "Popped element: " << val << endl;
            }
            break;
        }
        case 3: {
            display();
            break;
        }
        case 4: {
            exit(0);
        }
        default: {
            cout << "Invalid choice.\n";
        }
        }
    }
}
};
