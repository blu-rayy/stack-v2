#pragma once
using namespace std;

template <typename T>
class Stack {
    private:
        T* a;
        int n;
        int top;

    public:
        Stack(int size);
        ~Stack();
        T pop();
        void push(T element);
        void display();
        void operations();
};

    
