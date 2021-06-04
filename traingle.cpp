#include<iostream>
using namespace std;

int main()
{
    int sidea,sideb,sidec;
    cout<<"input three sides of traingle ";
    cin>>sidea>>sideb>>sidec;


    if (sidea==sideb && sideb==sidec)
    {
        cout <<"this is an equilateral teaingle\n";
    }
    else if (sidea==sideb || sideb==sidec || sidec==sidea)
    { 
        cout<<" this is an isoselace traingle \n";

    }
    else 
    {
        cout<<"this is an scalene  traingle \n";
    }
 return 0;

}