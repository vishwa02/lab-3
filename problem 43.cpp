#include <iostream>
using namespace std;

int main() {
int a,i;
cout << "Enter number : ";
cin >> a;
for( i=1 ; i<=a ; i++ )
{
   if(a%i==0)
     cout << i << "\n";
}
return 0;
}
