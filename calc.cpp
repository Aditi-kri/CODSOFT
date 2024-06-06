#include <iostream>
using namespace std ;
int main()
{  int m,n,j;
cout << "This is a simple calculator. Here you can input two numbers to perform basic arithmetical operations on them.\n " ;
 cout << " Enter the first number.\n";
  cin >> m ;
 cout << "Enter the second number.\n";
 cin >> n;
   cout << "Choose the arithmetic operation you want to perform : \n type 1 to choose addition, \n type 2 to choose subtraction, \n type 3 to choose multiplication, \n type 4 to choose division\n "; 
 cin >> j;
 if(j==1) {
 cout << "\n The answer is "<< m+n << endl ;
 }
 else if(j==2){
    cout << "\n The answer is "<< m-n  << endl ;
 }  
else if (j==3){
    cout <<"\n The answer is "<< m*n << endl;
}

else {
    cout <<"\n The answer is "<< m/n << endl ;
}

return 0;
}