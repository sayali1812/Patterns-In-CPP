#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"\n Enter value of n";
cin>>n;

for(int i=1; i<=n; i++)
{
	for(int j=1; j<=i; j++)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;
/*
1
22
333
4444
55555
 */
cout<<"_______________________________________________________\n";
cout<<endl;


for(int i=1, k=0; i<=n; i++,k=0)
{
	for(int j=1; j<=(n-i); j++)
	{
		cout<<"\t";		
	}
	while(k!= (2*i)-1)
	{
		cout<<"*"<<"\t";
		k++;
	}
	cout<<endl;
}


cout<<endl;
cout<<endl;
/*
    *
   ***
  *****
 *******
********* 
*/
cout<<"_______________________________________________________\n";
cout<<endl;

int k=1;
for(int i=1; i<=n; i++)
{
	for(int j=1; j<=i; j++)
	{
		cout<<k<<"\t";
		k++;
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */
cout<<"_______________________________________________________\n";
cout<<endl;

for(int i=n, k=0; i>=1; i--, k=0)
{
	for(int j=1; j<=n-i; j++)
	{
		cout<<" ";
	}
	
	while(k<=i-1)
	{
		cout<<"*";
		k++;
	}
		cout<<endl;
}

cout<<endl;
cout<<endl;
/*
*****
 ****
  ***
   **
    * */
cout<<"_______________________________________________________\n";
cout<<endl;




for(int i=n, k=0; i>=1; i--, k=0)
{
	for(int j=1; j<=2*(n-i); j++)
	{
		cout<<" ";
	}
	
	while(k<=i-1)
	{
		cout<<"*";
		k++;
	}
		cout<<endl;
}

cout<<endl;
cout<<endl;
/*
*****
  ****
    ***
      **
        * */
cout<<"_______________________________________________________\n";
cout<<endl;


for(int i=1, k=0; i<=n; i++,k=0)
{
	for(int j=1; j<=(n-i); j++)
	{
		cout<<" ";		
	}
	while(k!= (2*i)-1)
	{
		if(i%2==0 && k%2==0)
		{
		cout<<"*";
		}

		if(i%2==0 && k%2!=0)
		{
		cout<<" ";
		}

		if(i%2==1 && k%2==0)
		{
		cout<<"*";
		}

		if(i%2==1 && k%2==1)
		{
			cout<<" ";
		}
			
	k++;	
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;
 /*
    *
   * *
  * * *
 * * * *
* * * * *
*/
cout<<"_______________________________________________________\n";
cout<<endl;



for(int i=1, k=0; i<=n; i++, k=0)
{
	for(int j=n-i; j>=1; j--)
	{
		cout<<" ";
	}
	while(k<=i-1)
	{
		cout<<"*";
		k++;
	}

	cout<<endl;
}
for(int i=n, k=0; i>=1; i--, k=0)
{
	for(int j=n-i; j>=1; j--)
	{
		cout<<" ";
	}
	while(k<=i-1)
	{
		cout<<"*";
		k++;
	}

	cout<<endl;
}

cout<<endl;
cout<<endl;
/*
    *
   **
  ***
 ****
*****
*****
 ****
  ***
   **
    *
*/
cout<<"_______________________________________________________\n";
cout<<endl;


for(int i=1, k=0; i<=n; i++, k=0)
{
	for(int j=1; j<=(n-i); j++)
	{
		cout<<"*";
	}
	while(k!= (2*i)-1)
	{
		cout<<" ";
		k++;
	}
	for(int j=1; j<=(n-i); j++)
	{
		cout<<"*";
	}

	cout<<endl;
}
for(int i=n-1, k=0; i>=1; i--, k=0)
{
	for(int j=1; j<=(n-i); j++)
	{
		cout<<"*";
	}
	while(k!= (2*i)-1)
	{
		cout<<" ";
		k++;
	}
	for(int j=1; j<=(n-i); j++)
	{
		cout<<"*";
	}
	cout<<endl;
}

cout<<endl;
cout<<endl;
/*
**** ****
***   ***
**     **
*       *

*       *
**     **
***   ***
**** ****
*/
cout<<"_______________________________________________________\n";
cout<<endl;


return 0;
}

