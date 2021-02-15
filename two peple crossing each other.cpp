#include <iostream> 
using namespace std; 
  
bool everMeet(int d1, int d2, int v1, int v2) 
{ 
    
    if (d1 < d2 && v1 <= v2) 
       return false; 
    if (d1 > d2 && v1 >=v2) 
       return false;   
    
   //make sure 1st distance is greater,if its not swap it with 2nd distance 
    if (d1 < d2)  
    {  
        swap(d1, d2);  
        swap(v1, v2);  
    }      
    
    // to also check for the time both will cross each other
     while (d1 >= d2) {  
        if (d1 == d2)  
            return true; 
          
        //checking increment in distance after each step
        d1 = d1 + v1;   
        d2 = d2 + v2;  
    } 
  
    return false;    
} 
  
int main() 
{ 
    int d1,d2,v1,v2;
	cin>>d1>>v1>>d2>>v2; 
    if (everMeet(d1, d2, v1, v2)) 
        printf("they will meet each other");     
    else 
        printf("they will not meet each other"); 
    return 0; 
} 
