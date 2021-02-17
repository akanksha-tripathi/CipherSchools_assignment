/*
algo...
Input the digit sequence.
Initialize store = 0.
If the last digit is non-zero, recur remaining (n-1) digits and then add the result
If the smaller than 27 ,recur for the remaining (n-2) digits and add the result
*/
#include<iostream>
#include<cstring>
using namespace std;
int decoding(char *ch,int n){
	int store[n+1];//to store result of nsubproblems
	store[0]=1;
	store[1]=1;
	for(int i=2;i<=n;i++){
		store[i]=0;
		if(ch[i-1]>'0'){
			store[i]=store[i-1];
	    }
		if(ch[i-2]=='1'||(ch[i-2]=='2'&&ch[i-1]<'7')){
			store[i]=store[i]+store[i-2];
		}

	}
	return store[n];
}
int main(){
	char ch[10];
	cin>>ch;
	int n=strlen(ch);
	cout<<decoding(ch,n)<<endl;
	return 0;
}
