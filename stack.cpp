#include<iostream.h>
#include<conio.h>

int pop(int[],int&);
int push(int[],int&,int);
void display(int[],int);

const int size=50;

void main()
{	
        label:
	clrscr();
	cout<<"Enter your choice:\n\n";
	cout<<"POP[1] :";
	cout<<"PUSH[2] :";
	cin>>ans;

	int stack[size],item,top=-1,res;
	char ans,choice;

	if(ans==1):
	{
		choice='y';
	 	while((choice=='y')||(choice=='Y'))
		{
			cout<<"Enter the item for insertion: ";
			cin>>item;
			res=push(stack,top,item);
			if (res==-1)
			{
				cout<<"Overflow!! TO MANY ELEMENTS";
				exit(0);
			}

			cout<<"The stack now is:\n ";
			display(stack,top);

			cout<<"Do you want to enter more elements(y/n): ";
			cin>>choice;

	}	}		

	else if(ans==2)
	{	
		cout<<"Beginig deletion from stack\n";
		choice='y';
		while((choice=='y')||(choice=='Y'))
		{
			res=pop(stack,top);
			
			if (res==-1)
			{
				cout<<"Underflow!! STACK IS EMPTY!!";
				exit(0);
			}
			
			else
			{
				cout<<"Element deleted from stack is: ";
				cout<<res<<endl;
				cout<<"The stack now is:\n";
				display(stack,top);
			}

			cout<<"Do you want to pop more elements: ";
			cin>>choice;
	}	}

	getch();

}	
	
int push(int stack[],int &top, int ele)
{
	if(top==size-1)
	{
		return -1;
	}

	else
	{
		top++
		stack[top]=ele;
	}


	return 0;

}

int pop(int stack[],int &top)
{
	int ret;
	if(top==-1)
	{
		return -1
	}
	else
	{
		ret=stack[top];
		top--
	}
	return ret
}

void display(int stack[],int top)
{
	if(top==-1)
	{
		return
	}
	for(int i=top;i>=0;i++)
	{
		cout<<"  "<<stack[i]<<endl;
	}

}


