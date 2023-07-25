#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double Discriminant(double,double,double);

    double a,b,c,D,R1,R2,R;

    cout<<"ENTER THE COEFFICIENT OF X^2 \n";
    cin>>a;

    cout<<"ENTER THE COEFFICIENT OF X \n";
    cin>>b;

    cout<<"ENTER THE CONSTANT TERM \n";
    cin>>c;

    D=Discriminant(a,b,c);

    if(D>=0)
    {
        R1=(-b+pow(D,0.5))/(2*a);
        R2=(-b-pow(D,0.5))/(2*a);

        cout<<"ROOTS ARE REAL \n";
        cout<<"ROOTS ARE: \n";
        cout<<"VALUE OF FIRST ROOT="<<R1<<endl;
        cout<<"VALUE OF SECOND ROOT="<<R2<<endl;
    }

    if(D<0)
    {
        R1=(-b)/(2*a);
        R2=(-b)/(2*a);
        R=pow(-D,0.5)/(2*a);

        cout<<"ROOTS ARE IMAGINARY \n";
        cout<<"ROOTS ARE: \n";
        cout<<"VALUE OF FIRST ROOT="<<R1<<"+i"<<R<<endl;
        cout<<"VALUE OF SECOND ROOT="<<R2<<"-i"<<R<<endl;
    }
}


double Discriminant(double a,double b,double c)
{
    double D;

    D=b*b-4*a*c;

    return D;
}