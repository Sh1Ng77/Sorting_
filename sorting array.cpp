#include<iostream>
#include<stdlib.h>
using namespace std;

template<class t>
class sort
{
public:
	t a[20] ,temp;
	int n,i,j,k;
	void getdata()

	{
		
		
		cout<<"Enter the number of element : "<<endl;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"Enter your "<<i+1<<" element : ";
			cin>>a[i];
		}
		cout<<"\nYour original arry is : ";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
		
	void process()
	{	
		for(i=0;i<n-1;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					
				}
			}
			cout<<"\nPass "<<i+1<<" : ";
			for (k=0;k<n;k++)
			{
				
				cout<<a[k]<<" ";
			}
		}
	}
		
	void print()
	{	
		cout<<"\n\nYour sorted array is : ";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";	
	}
};
int main()
{
	int ch;
	do
	{
		cout<<"1.sorting for int\n";
		cout<<"2.sorting for float\n";
		cout<<"3.Exit\n";
		cout<<"Enter the choice : ";
		
		cin>>ch;
	
		switch(ch)
		{
			case 1 :
				sort<int>obj1;
				obj1.getdata();
				obj1.process();
				obj1.print();
				break;
		
			
			case 2 :
				sort<float>obj2;
				obj2.getdata();
				obj2.process();
				obj2.print();
				break;
			
			case 3 :
			
				exit(0);
			
			default:
				cout<<"Invalid choice";
			
		}
	}
	while(ch!=3);
	
	
	return 0;

}



