#pragma once
template <typename T>


class Stack {
private:
    T* a;
    int n;
    int top;

public:
    T pop();
    Stack(int size);
    void push(T element);
    void display();
    void operations();


};
