#include <iostream>
using namespace std;
float profit(float ,float );
int main()
{
int years;
float saving=0,interest,rupees;
cout<<"number of years=";
cin>>years;
cout<<"interest=";
cin>>interest;
for(int i=1;i<=years;i++)
{cout<<"deposit money year "<<i<<endl;
cin>>rupees;
saving=saving+profit(interest,rupees);
}
cout<<"saving="<<saving<<endl;
  
}
float profit(float interest,float rupees)
{float saving;

saving=(rupees*interest)/100;


return saving;
}

