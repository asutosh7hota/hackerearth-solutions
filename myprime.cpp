//MY PRIME

#include <iostream>
using namespace std;

int main()
{	
	int a[100],n,i,j,count=0;
	cin>>n;
	
		for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
          count = 0;
		for(j=1;j<=n;j++)
		{if(a[i]%a[j]==0)
			 {
			count++;
			}	
			
		}
			if(count==1){
				cout<<a[i]<<" ";
				
			}
	}




