#include <iostream>
#include "useful_array.h"
using namespace std;
void reverse(int x[],int length)
{
    int i,j=length-1,t;
    for(i=0;i<(length/2);i++)
    {
        t=x[i];
        x[i]=x[j];
        x[j]=t;
        j--;
    }
}
void rotate(int x[],int length,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        t=x[0];
        for(j=0;j<length-1;j++)
        {
            x[j]=x[j+1];

        }
        x[j]=t;
    }
}
int search(int x[],int length,int item)
{
    int i,j=0;
    for(i=0;i<length;i++)
    {
        if(x[i]==item)
        {
            j=2;
            return i;

        }
    }
    if(j==0)
    {
        return -1;
    }
}
void sort(int x[],int length)
{
    int i,j,t;
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(x[i]>=x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}
int sortsearch(int x[],int length,int item)
{
    int i,j=0;
    for(i=0;i<length;i++)
    {
        if(x[i]==item)
        {
            j++;
            return i;

        }
    }
    if(j==0)
    {
        return -1;
    }
}
int binarysearch(int x[],int first,int last,int item)
{
    int mid=(first+last)/2;
    if(x[mid]==item)
    {
        return mid;
    }
    else if(item<x[mid] and item>=x[first])
    {
        last=mid-1;
        return (binarysearch(x,first,last,item));
    }
    else if(item>x[mid] and item<=x[last])
    {
        first=mid+1;
        return (binarysearch(x,first,last,item));
    }
    else
        return -1;
}

