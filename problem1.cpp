// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int value;
   cout<<"Enter the amount"<<endl;
   cin>>value;
   int dom;
   cout<<"Enter the dinomination you want"<<endl;
   cin>>dom;
   switch(dom){
       case 10:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
        case 20:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
        case 50:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
        case 100:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
        case 200:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
        case 500:cout<<"Dinomination is :"<<value/dom<<endl;
       break;
       default : cout<<"Enter the valid dinomination"<<endl;
   }
}