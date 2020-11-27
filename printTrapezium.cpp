#include <iostream>

using namespace std;

void printTrap(int n)
{
    int count=1;
    int right=n*n+1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
            cout<<count++<<"*";
        for(int j=0;j<n-i;j++)
        {
            cout<<right++;
            if(j<n-i-1)
                cout<<"*";
        }
        cout<<endl;
        for(int j=0;j<=i;j++)
            cout<<"  ";
        right=right-(n-i-1)*2-1;
    }
    
}

int main()
{
   cout << "Hello World" << endl; 
   
   int n;
   cin>>n;
   printTrap(n);
   return 0;
}
