template <typename T>

T pop() {
    //TODO
}

void Stack<T>::display() {
    //TODO
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