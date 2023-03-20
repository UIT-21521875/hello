#include <iostream>
using namespace std;
int main()
{
int n,p=1;
cout<<"Nhap n ";
cin>>n;
if (n%2==0)
{
for (int i=1;i<=n;i++)
{
if (i%2==0)
{
p=p*i;
}
}
cout<<"ket qua la "<<p;
}
if (n%2!=0)
{
for (int i=1;i<=n;i++)
{
if (i%2!=0)
{
p=p*i;
}
}
cout<<"ket qua la "<<p;
}
return 0;
}
