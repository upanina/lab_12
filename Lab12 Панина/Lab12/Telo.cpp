#include <iostream>
#include <math.h>
#include "function.h"

using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");
	int a;
	int b;
	int sum;
	cout<<"¬ведите два целых двузначных числа"<<endl;
	cin>>a>>b;
	sum=Func(a)+Func(b);
	cout<<sum;
	system ("pause");
}

