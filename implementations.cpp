#include <iostream>
#include "data.h"
using namespace std;

template <typename T>
Stack<T>::Stack(int size) {
    n = size;
    a = new T[n];
    top = -1;
}

template <typename T>
void Stack<T>::push(T element) {
    if (top == n - 1) {
        cout << "Stack is full\n";
    }
    else {
        ++top;
        a[top] = element;
    }
}

template <typename T>
T Stack<T>::pop() {
    if (top == -1){
			cout << "Stack is empty. . No elements to pop.";
			return -1;
		} else {
			return a[top--];
		}
}

template <typename T>
void Stack<T>::display() {
    if (top == -1){
        	cout << "Stack is empty. No e\lement to display.";
		} else{
			for (int i = top; i >= 0; i--){
				cout << "Elements in stack: " << a[i] << " ";
			}
		}
}

template <typename T>
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
