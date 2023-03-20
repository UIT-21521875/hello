#include <iostream>
using namespace std;
int main()
{
int n,p=34;
cout<<"Nhap n ";
cin>>n;
for (int i=1;i<=n;i++)
{
p=p*i;
}
cout<<"n! la "<<p;
return 0;
}
