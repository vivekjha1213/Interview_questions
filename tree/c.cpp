#include<iostream>
using namespace std;

void generateNewNum(int number,int digit);

int main()
{
	int num=0,new_num=0,dig=0;
	cout<<"Enter number of digits : ";
	cin>>dig;
    cout<<"Enter a number : ";
	cin>>num;
	
    if(num<0)
		cout<<"\nNumber too small";
	else if(num>32767)
		cout<<"\nNumber too large";
	else
    {
		generateNewNum(num,dig);
	}
	return 0;
}

void generateNewNum(int number,int digit)
{
	int rep[6],rem=0,i=0;

    while(number!=0)
    {
		rem=number%10;
		
        if(rem%2==0)
        {
			rep[i]=rem+2;
		}
		else
		{
			rep[i]=rem+2;
		}
		number = number/10;
		i=i+1;
	}
	
	cout<<"\nThe replaced number is : ";
	
	for(i=digit-1;i>=0;i--)
	{
		cout<<rep[i];			
	}
}