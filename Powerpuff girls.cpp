using namespace std;
#include<iostream>

void test(int n)
{
	int a[n],b[n],i,min;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	min = b[0]/a[0];
	for(i=1;i<n;i++)
		if(b[i]/a[i] < min)
			min = b[i]/a[i];
	cout<<min;
}

int main()
{
	int n;
	cin>>n;
	test(n);
return 0;
}
