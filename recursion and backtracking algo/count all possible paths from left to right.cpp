#include <iostream>
using namespace std;
//using recursion
int possiblePaths(int m, int n)
{
	//if only one column or row is present
	if(m==1||n==1){
		return 1;
	}
	return possiblePaths(m-1,n)+possiblePaths(m,n-1);

}
 
int main()
{
	cout<<possiblePaths(2,2);
	return 0;
   }
