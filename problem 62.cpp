#include<iostream>
using namespace std;
 
/*PROGRAM TO CONVERT BINARY TO HEXADECIMAL NUMBER SYSTEM*/
int main()
{
    long bin, dec = 0, rem, num, base = 1;
    cout<<"PROGRAM TO CONVERT BINARY TO HEXADECIMAL NUMBER SYSTEM";
    cout << "\n \nEnter the binary number(1s and 0s) : ";
    cin >> num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    //CONVERTING DECIMAL TO HEXADECIMAL
    long int quo;
    int i=1,j,temp;
    char hexa[100];
    quo = dec;
    while(quo!=0)
    {
      temp = quo % 16;
      /*To convert integer into character*/
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;
 
      hexa[i++]= temp;
      quo = quo / 16;
    }
    cout<<"\nEquivalent hexadecimal number of "<<bin<<" is : ";
    for(j = i -1 ;j> 0;j--)
    cout<<hexa[j];
    cout<<endl;
    return 0;
}
