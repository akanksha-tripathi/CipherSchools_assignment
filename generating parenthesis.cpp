#include<iostream>
using namespace std;
void genParenthesis(int start,int end,string s,int len);
void countParenthesis(int n){
	cout<<n;
	genParenthesis(0,0,"",n);
}
void genParenthesis(int start,int end,string s,int len){
	if(s.length()==len*2){
		cout<<s<<endl;
	}
	if(start<len){
		genParenthesis(start+1,end,s+"(",len);
	}
	if(end<start){
		genParenthesis(start,end+1,s+")",len);
	}
}

int main()
{
	countParenthesis(2);
	return 0;
}
