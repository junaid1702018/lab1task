#include <iostream>
#include "useful_array.h"
using namespace std;
int main()
{
    int i,length,n;

    cout << "array size=";
    cin>>length;
    int x[length];
    cout << "array "<<endl;
    for(i=0;i<length;i++)
    {
        cin>>x[i];
    }

    reverse(x,length);
    cout<<"reverse array"<<endl;
    for(i=0;i<length;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<"rotate element=";
    cin>>n;
    rotate(x,length,n);
    cout<<"rotate array"<<endl;
    for(i=0;i<length;i++)
    {
        cout<<x[i]<<endl;
    }
    int item,index;
    cout<<"search atom"<<endl;
    cin>>item;
    index=search(x,length,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {


    cout<<"item at index="<<index<<endl;
    }
    sort(x,length);
    cout<<"sorted array"<<endl;
    for(i=0;i<length;i++)
    {
        cout<<x[i]<<endl;
    }
    index=sortsearch(x,length,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {
        cout<<"item at index="<<index<<endl;
    }
    int first=0,last=length-1;
    cout<<"binary search"<<endl;
    index=binarysearch(x,first,last,item);
    if(index==-1)
    {
     cout<<"not found"<<endl;
    }
    else
    {
        cout<<"item at index="<<index<<endl;
    }
    return 0;
}

