#include<stdio.h>
using namespacestd;
int main(){

   
      int arr[5] = {2,5,6,8,4};
      int arr2[5] = {3,6,5,2,1};

      check(arr , arr2);
      for(auto i : result){
            cout << i << " ";
      }

      void check(int &arr[] , int &arr2[]){
            vector<int> re;
            sort(arr.begin() , arr.end());
            sort(arr2.begin() , arr2.end());
            int m = arr.size();
            int n = arr2.sise();

            int l , k = 0;
            while(l<m){
                  if(arr2[k] >= arr[l]){
                        re.push_back(arr[l]);
                        
                  }
            }
      }
}