#include<iostream>
using namespace std;
int main()
{
    long int x; 
    cin>>x;

    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
        {
            cout<<"NO";
            return 0;
        }

        cout<<"YES";
        return 0;
    }
return 0;
}