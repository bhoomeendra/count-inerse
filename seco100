#include<bits/stdc++.h>
#define div 1000000007
using namespace std;
int calculate(int q[][3],int i,int n)
{
	int l=q[i][1]-1;
	int r=q[i][2];
	while(l<r)
	{
		int j=0;
		while(j<n)
		{
			incr[i][j]=incr[i][j]+incr[l][j];
			incr[i][j]=incr[i][j]%div;
			++j;
		}
		++l;
	}
	
}
int work(int *a,int q[][3],int i,int m,bool *inch,int n)
{
	while(i<m)
	{
		
		if(q[i][0]==1)
		{
			
			int l=q[i][1]-1;
			int r=q[i][2];
			while(l<r)
			{
				a[l]=(++a[l])%div;
				if(inch[i]==0)
				{	incr[i][l]=(++incr[i][l])%div;	}
				++l;
			}
			inch[i]=1;
		}
		else if(inch[i]==0)
		{
			inch[i]=1;
			calculate(q,i,n);	
			continue;
		}
		else if(inch[i]==1)
		{
			int l=q[i][1]-1;
			int r=q[i][2];
			while(l<r)
			{	int p=0;
				while(p<n)
				{
					a[p]=(a[p]+incr[l][p])%div;
					++p;
				}
				++l;
			}
		
		}
		/*int f=0;
		while(f<n)
		{
			cout<<a[f]<<" ";
		++f;
		}
		cout<<endl;*/
		++i;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n]={0};
		int q[m][3];
		int i=0;
		int count=2;
		while(i<m)
		{
			cin>>q[i][0]>>q[i][1]>>q[i][2];
			if(q[i][0]==2)
			{
				q[i][0]=count;
				++count;
			}
			++i;
		}
		bool inch[m]={0};//increment check
		int incr[cout-1][n]={0};
		work(a,q,0,m,inch,n);
		i=0;
		while(i<n)
		{
			cout<<a[i]%div<<endl;
			++i;
		}
		i=0;
		while(i<1003)
		{
			int h=0;
			while(h<1003)
			{
				incr[i][h]=0;
				++h;
			}
				++i;
		}		
		
	}
	
return 0;
}
