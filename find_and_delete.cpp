#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, string> myMap;
    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    // Find the element with key 2
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
        // Erase the element
        myMap.erase(it);
        cout << "Element erased." << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    // Verify the element has been erased
    if (myMap.find(2) == myMap.end()) 
    {
        cout << "Key 2 is no longer in the map." << endl;
    }

    return 0;
}

