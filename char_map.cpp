#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
int main(){
    string s;
    cin>>s;

    map<char,int> map1;
    for(int i=0;i<s.size();i++)
    {
        map1[s[i]] += 1;
    }

    for(auto it : map1)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }
     cout<<endl;
}