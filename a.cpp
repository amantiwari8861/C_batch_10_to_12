#include<iostream>
using namespace std;
int main()
{
int N=6;
if(N>=3)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            
            if(j<N && j<1)
            {
                cout<<"*";
            }
            else
            cout<<"^";
        }
        cout<<"\n";
    }
}
    return 0;
}

