#include <iostream>
#include <stdio.h> // library for exiting program
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char choice;

int main()
{
    cout<<"This program simulates calculator "<<endl;

    for(;;) // empty loop
    {
    cout<<"Give the first number:"<<endl;
    cin>> x;
    cout<<"Give the second number:"<<endl;
    cin>> y;

    cout<<endl;
    cout<<"Main menu"<<endl;
    cout<<"----------"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Substract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Exit program"<<endl;

    cout<<"Choose an operation: ";
    choice=getch();

    switch(choice)
    {
    case '1':
        cout<<"Sum = "<<x+y;
        break;
    case '2':
        cout<<"Substraction = "<<x-y;
        break;
    case '3':
        cout<<"Product = "<<x*y;
        break;
    case '4':
        if(y==0) cout<<"Do not divide by 0";
        else cout<<"Quotient = "<<x/y;
        break;
    case '5':
        exit(0);
        break;
    default: cout<<"There is no such option";
     }
     getchar();
     getchar();
     system("cls");
    }
    //cout<<"\nPress any key to exit";
    // getchar();
    // getchar();
   return 0;
}
