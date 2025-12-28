
#include <iostream>
#include <vector>
using namespace std;


bool isValid(string s) {
   int sqbr = 0 ;
   int robr = 0 ;
   int cubr = 0 ;
    for (int i = 0; i <( s.length())/2; i++)
    {
        if (s[i] == '[')
        {
           sqbr ++ ; 
        }
        if (s[i] == '{')
        {
           cubr ++ ; 
        }if (s[i] == '(')
        {
           robr ++ ; 
        }
        
    }
    for (int i = ( s.length())/2; i < s.length(); i++)
{
        if (s[i] == ']')
        {
           sqbr -- ; 
        }
        if (s[i] == '{')
        {
           cubr ++ ; 
        }if (s[i] == '(')
        {
           robr ++ ; 
        }
        
    }
    if (cubr != 0 || robr != 0  || sqbr != 0 ) return false ;
    else return true;
    
    
    
}


int main (){

    isValid("[()]");
   return 0; 

}
