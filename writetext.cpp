#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
   ofstream output{"abc.txt"};
   
   if (output)
   {
	   output << a;
	   output <<" " << b;
	   output <<" " << c;
	 }  
   
	else
	{
		cout << "Error opening abc.txt";
		
   //cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
}
   cout<<endl<<endl;
 
   return 0;
}
