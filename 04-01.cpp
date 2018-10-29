#include <iostream>
using namespace std;
int main()
{
   double r;
   cin >> r;
   double pi = 3.1415692;
   double volume = 4 * pi * r * r;
   double area = 4/3 * pi * r * r * r;
   
   
   if (area == volume){
     cout << "Volume is larger" << endl;
     }
     
   else if (area > volume){
     cout << "Area is larger" << endl;
     }
     
   else {
     cout << "Equal!" << endl;
     }
     
}
