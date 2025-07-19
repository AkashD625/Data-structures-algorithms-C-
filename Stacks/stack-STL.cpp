// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;
int main()
{

      // creating the stack using stl
      stack<int> s;
      s.push(1);
      s.push(2);
      s.push(3);
      s.push(4);
      s.pop();
      cout << "Hello" << endl;

      if (s.empty())
      {
            cout << "Empty" << endl;
      }

      cout << s.top() << endl;

      return 0;
}