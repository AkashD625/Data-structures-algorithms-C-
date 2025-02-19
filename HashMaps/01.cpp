#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
      unordered_map<string, int> m;
      // creationn if not there else insertion .
      pair<string, int> p = make_pair("Akash", 87);
      m.insert(p);

      // methode 2
      pair<string, int> pair2("Dhanush", 3);
      m.insert(pair2);

      m["Akash"] = 32;
      cout << "Executed successfull" << endl;

      // Size of map
      cout << m.size() << endl;
      // chech the presence of key and value for the mahesh
      cout << m.count("Mahesh") << endl;
      // Remove the key value from the map
      m.erase("Akash");
      cout << m.size() << endl;
}