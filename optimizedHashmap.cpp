#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    int hash[max + 1] = {0}; // Adjust size of hash array based on max

    for(int i = 0; i < n; i++) 
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;

    while(q--) 
    {
        int number;
        cin >> number;
        
        if(number <= max) {
            cout << number << " occurs " << hash[number] << " times." << endl;
        } else {
            cout << number << " occurs 0 times." << endl;
        }
    }

    return 0;
}
