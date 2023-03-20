#include <iostream>
using namespace std;
int main ()
{
int x,n,p=24;
cout<<"Nhap hai so x,n ";
cin>>x>>n;
for (int i=1;i<=n;i++)
{
p=p*x;
}
cout<<"Ket qua la "<<p;
return 0;
}
