#include<bits/stdc++.h>
using namespace std;

struct matrix
{
	int row,col,val;
};
int comp(const void *a,const void *b)
{
	matrix *af=(matrix *)a;
	matrix *bf=(matrix *)b;
		if(af->row!=bf->row)
		{
			return(af->row>bf->row);
		}
		
			return(af->col>bf->col);
}
int main()
{
	int t;
	//cout<<1<<endl;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int i=0;
		int b[n][n];
		i=0;
		while(i<n)
		{
			int j=0;
			while(j<n)
			{
				b[i][j]=-1;
				++j;
			}
		++i;
		}
		matrix ar[q];
		int row,col,val;
		bool found=false;
		i=0;
		int j=0;
		while(i<q)
		{
			//cout<<2<<endl;
			cin>>row>>col>>val;
			if(row<col)
			{
			b[row-1][col-1]=val;
			ar[j].row=row;
			ar[j].col=col;
			ar[j].val=val;
			++j;
			}
			else if(row==col)
			{
				if(val!=0)
				{found=true;break;}
			b[row-1][col-1]=val;
			ar[j].row=row;
			ar[j].col=col;
			ar[j].val=val;	
			++j;
			}
			else if(row>col)
			{
				if(b[col-1][row-1]==-1)
				{b[col-1][row-1]=val;
					ar[j].row=col;
					ar[j].col=row;
					ar[j].val=val;
					++j;
				}
				else if(b[col-1][row-1]!=val)
				{found=true;}
			}
			++i;
		}
		if(found)
		{
			cout<<"no"<<endl;
			continue;
		}
		int size_ar=j;
		qsort(ar,size_ar,sizeof(matrix),comp);
		i=0;
		/*while(i<size_ar)
		{
			cout<<ar[i].row<<","<<ar[i].col<<endl;
			++i;
		}*/
		i=0;
		while(i<size_ar)
		{
			int j=i+1;
			while(j<size_ar)
			{
				if(ar[i].row==ar[j].row)
				{
					if(b[ar[i].col-1][ar[j].col-1]!=-1)
					{
						int check=ar[i].val+ar[j].val+b[ar[i].col-1][ar[j].col-1];
						if(check==3||check==1)
						{
							found=true;
							break;
						}
						
					}		
				}
				else
				{break;}
				++j;		
			}
		++i;
		if(found)
		{
			break;
				}		
		}
		if(found)
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
				}		
	}
	
	return 0;
}
