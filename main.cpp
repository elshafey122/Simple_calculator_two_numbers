#include <iostream>
using namespace std;

void add(int a,int b)
{
    cout<<a<<"+"<<b<<"= "<<a+b<<endl;
}

void subtract(int a,int b)
{
    cout<<a<<"-"<<b<<"= "<<a-b<<endl;
}

void multiply(int a,int b)
{
    cout<<a<<"*"<<b<<"= "<<a*b<<endl;
}

void divide(int a,int b)
{
    if(b==0)
    {
        cout<<"error"<<endl;
    }
    else
    {
        cout<<a<<"/"<<b<<"= "<<a/b<<endl;
    }
}

void input(int &a,int &b)
{
    cout<<"enter two numbers:";
    cin>>a>>b;
}

void menu()
{
    int rep=0;
    int choice=-1;
    while(choice=-1)
    {
        cout<<"1)add two numbers"<<endl;
        cout<<"2)subtract two numbers"<<endl;
        cout<<"3)multiply two numbers"<<endl;
        cout<<"4)divide two numbers"<<endl;
        cout<<"5)exit\n\n";
        cout<<"enter number operation:";
        cin>>choice;
        if(choice==5)
        {
            cout<<"thanks"<<endl;
            cout<<"number of operations is: "<<rep<<endl;
            break;
        }
        if(choice>=1&&choice<5)
        {
        int a,b;
        input(a,b);
        if(choice==1)
        {
            add(a,b);
        }
        else if(choice==2)
        {
            subtract(a,b);
        }
        else if(choice==3)
        {
            multiply(a,b);
        }
        else if(choice==4)
        {
            divide(a,b);
        }
        rep++;
      }
    else
    {
        cout<<"invalid input enter correct choice :"<<endl;
        choice=-1;
    }
  }
}

int main()
{
   menu();
}

