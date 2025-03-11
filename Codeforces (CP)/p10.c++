#include <iostream>
using namespace std;
int main()
{
      int bord[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                          {1,2,2,2,2,2,2,2,2,1},
                          {1,2,3,3,3,3,3,3,2,1},
                          {1,2,3,4,4,4,4,3,2,1},
                          {1,2,3,4,5,5,4,3,2,1},
                          {1,2,3,4,5,5,4,3,2,1},
                          {1,2,3,4,4,4,4,3,2,1},
                          {1,2,3,3,3,3,3,3,2,1},
                          {1,2,2,2,2,2,2,2,2,1},
                          {1,1,1,1,1,1,1,1,1,1} };
      int t;
      cin >> t;
      while (t--)
      {
            int score = 0;
  char matrixs[10][10];
  for(int i = 0;i<10;i++){
      for(int j = 0;j<10;j++){
            cin >> matrixs[i][j];
  if(matrixs[i][j] != '.'){
      score += bord[i][j];
  }

      }
  }
        cout << score << endl; 

      }

}