#include<iostream>
#include <cassert>
#include <math.h>
#include <limits>
using namespace std;

int SolveSquare(double a,double b,double c,double* x1,double* x2)
    {
     assert(isfinite(a));
     assert(isfinite(b));
     assert(isfinite(c));

        if (a==0)
        {
            if (b==0)
            {
                if (c==0)
                    {
                    return 3;
                } else{
                return 0;
                    }
            } else{

            *x1=-c/b;
            return 1;

        }}else{

         double d=b*b-4*a*c;

         if (d==0)
             {
                 *x1=*x2=-b/(2*a);
                 return 1;
             }
         if (d<0)
             {
                 return 0;


             }
         if (d>0)
             {
                 *x1=(-b-sqrt(d))/(2*a);
                 *x2=(-b+sqrt(d))/(2*a);
                 return 2;
            }

        }}




int main(){
cout<<"Square equation solver"<<"\n"<<"Kazakova,2020"<<"\n";

cout<<"enter a,b,c;"<<"\n";

double a=INFINITY;
double b=INFINITY;
double c=INFINITY;

cin>>a>>b>>c;



double x1=0;
double x2=0;

int nRoots=SolveSquare(a,b,c,&x1,&x2);

switch (nRoots)
{
    case 0: cout<<"No roots"<<"\n";
            break;

    case 1: cout<<"x="<<x1<<"\n";
            break;

    case 2: cout<<"x1="<<x1<<",x2="<<x2<<"\n";
            break;

    case 3: cout<<"any number"<<"\n";
            break;

    default:cout<<"Error";
            return 1;
}
}
