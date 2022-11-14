#include <iostream>

#define MAX_SIZE 101
int top = -1;
int A[MAX_SIZE];

void Push(int x)
{

    if (top == MAX_SIZE - 1)
    {
        std::cout << "[ERROR] Stack overflow.";
        return;
    }
    top++;
    //std::cout << top << std::endl;
    A[top] = x;
    //std::cout << A[top] << std::endl;
}

void Pop()
{
    if (top == -1)
    {
        std::cout << "[ERROR] No element to pop.";
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print()
{
    for (int i = 0; i <= top; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Print();
    Top();
    Pop();
    Print();
    std::cin.get();
}