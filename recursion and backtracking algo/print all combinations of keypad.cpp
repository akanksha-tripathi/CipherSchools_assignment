#include<iostream>
#include<string>
#include<vector>
using namespace std;
//using vector<string> mainly for push back func
vector<string> Combinations(string num){
	vector<string> reslt;
	string combos[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	reslt.push_back("");
	for(int i=0;i<num.size();i++){
		vector<string> temp;
		string s=combos[num[i]-'0'];
		cout<<num[i]<<endl;
		
		for(int j=0;j<s.size();j++){
			for(int k=0;k<reslt.size();k++){
				cout<<reslt[k]+s[j]<<endl;
				temp.push_back(reslt[k]+s[j]);
			}
		}
		reslt=temp;
	}
	return reslt;
}
int main(){
	string num="45";
	vector<string> res=Combinations(num);
	
}
