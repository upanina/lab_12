#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include <iostream>
#include <ctime>
  
using namespace std;
 
void print(int n,int a[])
{
    for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
    cout<<endl;
}
void init(int n,int a[])
{
    for(int i=0;i<n;++i)
        a[i]=rand() % 100;
}
void sum(int n,int a[],int b[],int c[])
{
    for (int i=0;i<n;i++)
           c[i]= a[i]+b[i];
}
 
int main()
{
    srand(time(NULL));
    const int n=7;
    int A[n];
    int B[n];
    int C[n];
    init(n,A);     
    cout<<"A"<<endl;
    print(n,A);
    init(n,B);     
    cout<<"B"<<endl;
    print(n,B);
    sum(n,A,B,C);
    cout<<"Sum"<<endl;
    print(n,C);
    system("pause");
    return 0;
}