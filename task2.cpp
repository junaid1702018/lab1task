#include <iostream>
using namespace std;
int main()
{
int integer,diviser,counter=0;
cout<<"integer=";
cin>>integer;
for(diviser=integer;diviser>=1;diviser--)
{if(integer%diviser==0)
counter++;
}
if(counter==2)
cout<<"prime"<<endl;
else 
cout<<"not prime"<<endl;
}
