#include <iostream>
using namespace std;

int main() {
int a,r=0;
cout << "Enter number : ";
cin >> a;
while(a!=0)
{
     r = (r*10) + (a%10);
     a /= 10;
}
cout << "Reverse = " << r;
return 0;
}
