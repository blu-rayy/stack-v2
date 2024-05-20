#include <iostream>
#include <string>
#include "data.h"
using namespace std;

template <typename T>
Stack<T>::Stack(int size) {
    n = size;
    a = new T[n];
    top = -1;
}

template <typename T>
Stack<T>::~Stack() {
    delete[] a;
}


template <typename T>
T Stack<T>::pop() {
    if (top == -1) {
        cout << "\x1b[31m\nStack is empty! No elements to pop! \x1b[0m\n";
        return -1;
    }
    else {
        return a[top--];
    }
}

template <typename T>
void Stack<T>::push(T element) {
    if (top == n - 1) {
        cout << "\x1b[31m\nStack is full!\x1b[0m\n";
    }
    else {
        ++top;
        a[top] = element;
        cout << "\x1b[32m \nElement added! \x1b[0m" << endl;
    }
}

template <typename T>
void Stack<T>::display() {
    if (top == -1){
        	cout << "\x1b[31m\nStack is Empty! No elements to display. \x1b[0m\n";
		} else{
        cout << "Elements in stack: ";
			for (int i = top; i >= 0; i--){
				cout << a[i] << ", ";
			}
		}
}

template <typename T>
void Stack<T>::operations() {
    system("PAUSE");
    system("CLS");
    cout << "== STACK INVENTORY ==" << endl << endl;
        int ch;
        string input;
        while(true) {
        cout << "\nStack Operations Menu\n1- Push an element\n2- Pop\n3- Display the elements\n4- Exit\nSelect an operation: ";
        cin >> ch;
            
            switch(ch) {
                case 1: {
                    T element;
                    cout << "Enter the element to push: ";
                    cin >> element;
                    while (true) {
                       
                        if (cin.fail()) {
                            cout << "\x1b[31m\nPlease enter an integer input only. \x1b[0m\n";
                            cin.clear();
                            cin.ignore();
                            cout << "Enter the element to push: ";
                        }
                        else break;
                    }

                    push(element);
                    break;
                }

                case 2: {
                    T val = pop();
                    if(val != -1) {
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
                    cout << "\x1b[31m\nInvalid choice.\x1b[0m\n";
                    cin.clear();
                    cin.ignore();
                    system("PAUSE");
                    system("CLS");
                }
            }
        }
    }

template class Stack<int>;
