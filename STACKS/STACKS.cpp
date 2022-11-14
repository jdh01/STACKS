#include <iostream>

#define MAX_SIZE 101

class Stack {
private:
    int top = -1;
    int A[MAX_SIZE];
public:
    int Push(int x);
    void Pop();
    int Top();
    void IsEmpty();
    void IsFull();
    void Print();
};

int Stack::Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        std::cout << "[ERROR] Stack overflow.";
        return 0;
    }
    top++;
    //std::cout << top << std::endl;
    A[top] = x;
    //std::cout << A[top] << std::endl;
    return A[top];
}

void Stack::Pop()
{
    if (top == -1)
    {
        std::cout << "[ERROR] No element to pop.";
        return;
    }
    top--;
}

int Stack::Top()
{
    return A[top];
}

void Stack::Print()
{
    for (int i = 0; i <= top; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    Stack stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Print();
    stack.Top();
    stack.Pop();
    stack.Print();
    std::cin.get();
}