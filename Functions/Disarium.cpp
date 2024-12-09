//Write a program to check whether a number is disarium or not.
// A number is said to be disarium number if it is equal to the sum of the digits raised to the power of respective position. example:- 135  1^1+3^2+5^3=135

#include<iostream>
#include<cmath>
using namespace std;

bool Disarium(int n)
{
    int count=0;
    int sum=0;
    int originaln = n;
    int temp=n;
    while (temp!=0)
    {
        count++;
        temp/=10;
    }
    while (originaln!=0)
    {
        int d=originaln%10;
        sum=sum+round(pow(d,count));
        originaln=originaln/10;
        count--;
    }
    
    if(sum==n)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<Disarium(num)<<endl;
}