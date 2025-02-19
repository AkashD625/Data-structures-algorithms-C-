// MAX HEAP
//  This is a max heap implementation - parent node is greater then the child node .

#include <iostream>
using namespace std;

class heap
{
public:
      int arr[100];
      int size;

      heap()
      {
            arr[0] = -1;
            size = 0;
      }

      void insert(int val)
      {
            size = size + 1;
            int index = size;
            arr[index] = val;

            while (index > 1)
            {
                  int parent = index / 2;
                  if (arr[parent] < arr[index])
                  {
                        swap(arr[parent], arr[index]);
                        index = parent;
                  }
                  else
                  {
                        return;
                  }
            }
      }

      // printing function
      void print()
      {
            for (int i = 1; i <= size; i++)
            {
                  cout << arr[i] << " ";
            }
            cout << endl;
      }

      void deletefromheap()
      {

            if (size == 0)
            {
                  cout << "Nothing to delete" << endl;
                  return;
            }
            else
            {

                  swap(arr[1], arr[size]); // or arr[1] = arr[size];
                  size--;

                  // taking the node to its correct position .
                  int i = 1;
                  while (i < size)
                  {
                        int leftindex = 2 * i;
                        int rightindex = 2 * i + 1;

                        if (leftindex < size && arr[leftindex] > arr[i])
                        {
                              swap(arr[leftindex], arr[i]);
                              i = leftindex;
                        }
                        else if (rightindex < size && arr[rightindex] > arr[i])
                        {
                              swap(arr[rightindex], arr[i]);
                              i = rightindex;
                        }

                        else
                        {
                              return;
                        }
                  }
            }
      }
};

int main()
{
      heap h;
      h.insert(2);
      h.insert(5);
      h.insert(8);
      h.insert(40);
      h.insert(20);
      h.insert(55);
      h.print();
      h.deletefromheap();
      h.print();
      return 0;
}