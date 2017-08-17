#include<bits/stdc++.h>
using namespace std;
int count(int *a,int start,int mid,int end)
{
	int ls=start;
	int rs=mid+1;
	int b[end-start+1];
	int sum=0;
	int countt=0;
	int i=0;
	while((ls<mid+1)&&(rs<end+1))
	{
		if(a[ls]>a[rs])
		{
			b[i]=a[ls];
			++ls;++i;
			++countt;
		}
		else
		{
			b[i]=a[rs];
			++rs;++i;
			sum=sum+countt;
		}
	}
	if(ls==mid+1)
	{
		while(rs<end+1)
		{
		b[i]=a[rs];
			++rs;++i;
			sum=sum+countt;	
		}
	}
	else
	{
while(rs<end+1)
{
				b[i]=a[ls];
			++ls;++i;
			++countt;
}
	}
	i=0;
	ls=start;
	while(i<end-start+1)
	{
		a[ls]=b[i];
		++ls;
		++i;
	}
	return sum;
}
int inver(int *a,int start,int end)
{
	if(start==end)
	{
		return 0;
	}
	int mid=(start+end)/2;
	int i=inver(a,start,mid);
	int j=inver(a,mid+1,end);
	int k=count(a,start,mid,end);
	return (i+j+k);
}
int main()
{
	int size;
	cin>>size;
	int a[size];
	int i=0;
	while(i<size)
	{
		cin>>a[i];
		++i;
	}
	int f=inver(a,0,size);
	cout<<f<<endl;
	return 0;
}
