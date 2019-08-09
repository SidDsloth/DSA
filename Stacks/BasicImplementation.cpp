#include<iostream>
using namespace std;
int top=-1,i;
void push(int stack[], int x, int n){
        if (top==n-1){
                cout<< "Stack overflow";
        }
        else {
                top=top+1;
                stack[top]=x;
        }
}
int topElement(int stack[])
{
        return stack[top];
}
int isEmpty()
{
        if(top==-1)
        return 1;
        else return 0;
}
int size()
{
        return (top+1);
}
void pop(int stack[], int n)
{
        if(isEmpty())
        {
                cout<<"Stack is empty";
        }
        else
        {
                top=top-1;
        }
}

int main()
{
        int stack[3];
        push(stack,5,3);
        push(stack,10,3);
        push(stack,24,3);
        push(stack,12,3);
        cout<<"\n"<<"Top " << topElement(stack)<<"\n";
        for(i=0;i<3;i++)
                pop(stack,i);
        cout<<top<<"Size "<<size()<<"\n";
        pop(stack,i);
        return 0;
}
