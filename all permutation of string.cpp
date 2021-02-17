#include<iostream>
using namespace std;
void all_permutation(string str,int beg,int end ){
	if(beg==end){
		cout<<str<<endl;
	}
	else{
		for(int i=beg;i<=end;i++){
			swap(str[beg],str[i]);//perfrom swapping
			all_permutation(str,beg+1,end);//recursion
			swap(str[beg],str[i]);///bracktracking
		}
	}
}
int main(){
	string str="ABC";
	all_permutation(str,0,str.length()-1);
}
