#include <iostream>
using namespace std;

class MyStack
{
private:
      int *arr;
      int top;
      int size;

public:
      MyStack(int size)
      {
            this->size = size;
            arr = new int[size];
            top = -1;
      }

      void push(int element)
      {
            if (size - top > 1)
            {
                  top++;
                  arr[top] = element;
            }
            else
            {
                  cout << "Overflow" << endl;
            }
      }

      int pop()
      {
            if (top == -1)
            {
                  cout << "Underflow" << endl;
                  return -1;
            }
            else
            {
                  int val = arr[top];
                  top--;
                  return val;
            }
      }

      int peek()
      {
            if (top == -1)
            {
                  cout << "Stack is empty" << endl;
                  return -1;
            }
            return arr[top];
      }

      bool isempty()
      {
            return top == -1;
      }

      ~MyStack()
      {
            delete[] arr;
      }
};

int main()
{
      MyStack s(5);
      s.push(5);
      s.push(8);
      s.push(7);
      s.push(6);
      s.push(1);

      int val = s.pop();
      cout << val << " popped" << endl;

      int pe = s.peek();
      cout << pe << " peek" << endl;

      bool em = s.isempty();
      cout << em << " Empty status" << endl;

      return 0;
}
