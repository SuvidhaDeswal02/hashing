#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int hash[5]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a') hash[0]++;
        else if(s[i]=='e') hash[1]++;
        else if(s[i]=='i') hash[2]++;
        else if(s[i]=='o') hash[3]++;
        else if(s[i]=='u') hash[4]++;
    }

    int q;
    cin>>q;

    while(q--)
    {
        char c;
        cin>>c;
        if(c=='a') cout<<hash[0]<<endl;
        else if(c=='e') cout<<hash[1]<<endl;
        else if(c=='i') cout<<hash[2]<<endl;
        else if(c=='o') cout<<hash[3]<<endl;
        else if(c=='u') cout<<hash[4]<<endl;
    }
    int sum = hash[0]+hash[1]+hash[2]+hash[3]+hash[4];
    cout<<"Total number of vowels: "<<sum;
}