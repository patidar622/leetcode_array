#include<bits/stdc++.h>
using namespace std;
#define size 100
int a[size];
int top=-1;
void push(int n)
{
	if(top==size-1)
{	cout<<"stack is full\n";
	return;
}
a[++top]=n;
}
void pop()
{
	if(top==-1)
{   cout<<"stack is empty\n";
	return;
}
	top--;
}
void top_element()
{
	if(top==-1)
	{
		cout<<"stack is empty\n";
		return;
	}
	cout<<"top element is "<<a[top]<<endl;
}
void display()
{
	for(int i=0;i<=top;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1 for push\n2 for pop\n 3 for top element\n 4 for stack elements\n5 for exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1 :
				{
					int n;
					cout<<"enter an no\n";
					cin>>n;
					push(n);
				}
				break;
			case 2 :
			pop();
			break;
			case 3 :
			top_element();
			break;
			case 4 :
			display();
			break;
			case 5 :
			exit(0);
			break;
			default :
	            cout<<"Enter the correct choice\n";
				break;	
		}
	}
	return 0;
	
}
