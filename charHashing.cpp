#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a'] += 1; //storing
    }

    int q;
    cin>>q;

    while(q--)
    {
        char c;
        cin>>c;
        cout<<c<<" coming this much times: "<<hash[c-'a']<<endl; //fetch
    }

}