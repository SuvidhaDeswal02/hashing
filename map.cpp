#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    unordered_map<int,int> map1;
    for(int i=0;i<n;i++)
    {
        map1[arr[i]] += 1;
    }

    // for(auto it : map1)
    // {
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }
    // cout<<endl;

    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<"The no. of times "<<num<<" is coming: "<<map1[num]<<endl;
    }
}