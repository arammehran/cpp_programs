#include<iostream>
using namespace std;


// print pyramid rotated 180 degrees
int main()
{
int n;
cin>>n;
for(int i=n;i>=1;i--)
	{
	for(int j=i;j>=1;j--)
		{
		cout<<"*";
		}
	cout<<endl;
	}
return 0;
}
