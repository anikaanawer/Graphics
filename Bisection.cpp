#include<bits/stdc++.h>
using namespace std;
double root;

//function used is x^3-2x^2+3
//x^3-x-1

double fun(double x)
{
    return x*x*x - x - 1;
}

void bisection(double a,double b, double e)
{
    if(fun(a) * fun(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }

    root=a;

    while (abs(b-a) >=e)
    {
        root = (a+b)/2;

        if (fun(root) == 0.0) break;

        else if (fun(root)*fun(a) < 0) b=root;

        else
            a=root;
    }
}

int main()
{
    double e,a,b;
    cin>>a>>b>>e; //a=1,b=2
    // cin>>e;//0.01
    bisection(a,b,e);
    cout<<"\n";
    cout<<"The value of root is = "<<root<<endl;

    return 0;
}

