#include <iostream>

#define MAX_SIZE 101

struct Stack
{
    int A[MAX_SIZE];
    int top = -1;
};

Stack* Push(Stack** stack, int x)
{
    Stack* temp = new Stack;
    if (temp->top == MAX_SIZE - 1)
    {
        std::cout << "[ERROR] Stack overflow.";
        return *stack;
    }
    temp->top = temp->top + 1;
    std::cout << temp->top << std::endl;
    temp->A[temp->top] = x;
    std::cout << temp->A[temp->top] << std::endl;
    *stack = temp;
    return *stack;
}

void Pop(Stack** stack)
{
    Stack* temp = *stack;
    if (temp->top == -1)
    {
        std::cout << "[ERROR] No element to pop.";
        return;
    }
    temp->top--;
    *stack = temp;
}

int Top(Stack* stack)
{
    return stack->A[stack->top];
}

void Print(Stack* stack)
{
    Stack* temp = stack;
    for (int i = 0; i <= temp->top; i++)
    {
        std::cout << temp->A[i] << " ";
    }
}

int main()
{
    Stack* stack = NULL;
    Push(&stack, 1);
    Push(&stack, 2);
    Push(&stack, 3);
    Push(&stack, 4);
    Push(&stack, 5);
    Print(stack);
    Top(stack);
    Pop(&stack);
    std::cin.get();
}