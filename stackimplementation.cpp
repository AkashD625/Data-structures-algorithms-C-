// Online C++ compiler to run C++ program online
#include<stdio.h>
using namespace std;
// stack implementation
class stack
{
      int *arr;
      int top;
      int size;

      stack(int size)
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
            int d;
            if (top == -1)
            {
                  cout << "Underflow" << endl;
            }
            else
            {

                  d = top;
                  top = top - 1;
            }

            return d;
      }

      int peek()
      {
            return top;
      }

      int isempty()
      {
            if (top == -1)
            {
                  return true;
            }
            else
            {
                  return false;
            }
      }
} int main()
{
      stack s;
      s.push(5);
      s.push(8);
      s.push(7);
      s.push(6);
      s.push(1);

      int val = s.pop();
      cout << val << "poped" << endl;

      int pe = s.peek();
      cout << pe << "peek" << endl;

      int em = s.isempty();
      cout << em << "EMpty status" << endl;
      return 0;
}