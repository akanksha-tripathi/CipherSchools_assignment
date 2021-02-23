#include<iostream>
#include<string>
using namespace std;
int minEditDistanceBrute(string src, string dest, int len1, int len2)
{
    if(len2==0)
    {
        return len1;
    }
    if(len1==0)
    {
        return len2;
    }
    if(src[len1-1]==dest[len2-1])
    {
        return minEditDistanceBrute(src, dest, len1-1, len2-1);
    }
    else
    {
        int x=1+minEditDistanceBrute(src,dest,len1,len2-1);
        int y=1+minEditDistanceBrute(src,dest,len1-1,len2);
        int z=1+minEditDistanceBrute(src,dest,len1-1,len2-1);
        return min(x,min(y,z));
 
    }
}
 
 
int main()
{
    string src,dest;
 
    cout<<"Enter source string   ";
    getline(cin, src);
 
    cout<<"Enter destination string   ";
    getline(cin, dest);
 
    int len1=src.length();  //length of src string
    int len2=dest.length(); //length of dest string
 
    cout<<"Minimum number of edit operations required for transforming \nsource string to destination string is "<<minEditDistanceBrute(src,dest,len1,len2);
 
    cout<<endl;
    return 0;
}
