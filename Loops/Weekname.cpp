//Write a program to print day of week name using switch case
#include<iostream>
using namespace std;
int main()
{
    int Daynumber;
    cout<<"Enter a number"<<endl;
    cin>>Daynumber;
    
    switch (Daynumber)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Not a day in week"<<endl;
        break;
    }
}
