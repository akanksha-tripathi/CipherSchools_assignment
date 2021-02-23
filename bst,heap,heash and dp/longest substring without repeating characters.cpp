#include<iostream>
#include<string>
#include<utility>
#include<vector>
 
using namespace std;
 
int longestWithoutRepeating(string str)
{
    vector<int> processed(256,-1);
    int current=0;
    int longest=0;
 
    for(int i=0;i<str.length();i++)
    {
        if(processed[str[i]]==-1 || processed[str[i]]<(i-current) )
        {
            current++;
            processed[str[i]]=i;
 
            if(current>longest)
                longest=current;
        }
 
        else
        {
            current=i-processed[str[i]];
            processed[str[i]]=i;
        }
 
    }
 
    return longest;
}
 
int main()
{
    string str;
 
    cout<<"Enter the string"<<endl;
    getline(cin, str);
 
    cout<<"Longest substring without repeating characters is "<<endl;
    cout<<longestWithoutRepeating(str);
 
    cout<<endl;
    return 0;
}
