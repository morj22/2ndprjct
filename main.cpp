#include <iostream>
#include "locale.h"
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

class mtrca
{
private:
    int **a=new int*[2];

public:

    mtrca()
    {
        for(int i=0;i<2;i++)
        {
            a[i]=new int[2];
        }
        a[0][0] = 1;
        a[0][1] = 5;
        a[1][0] = 7;
        a[1][1] = 9;
    }
    mtrca(int b, int c,int d,int e)
    {
        for(int i=0;i<2;i++)
        {
            a[i]=new int[2];
        }
        a[0][0] = b;
        a[0][1] = c;
        a[1][0] = d;
        a[1][1] = e;
    }
    mtrca (mtrca &k)
    {
        for(int i=0;i<2;i++)
        {
            a[i]=new int[2];
        }
        a[0][0] = k.a[0][0];
        a[0][1] = k.a[0][1];
        a[1][0] = k.a[1][0];
        a[1][1] = k.a[1][1];
    }
    int mult_mtrca_4islo(int n)
    {
        int** b=new int*[2];
        for(int i=0;i<2;i++)
        {
            b[i]=new int[2];
        }
        b[0][0]=a[0][0]*n;
        b[0][1]=a[0][1]*n;
        b[1][0]=a[1][0]*n;
        b[1][1]=a[1][1]*n;
       return **b;
    }
    double mult_mtrca_mtrca(int** b)
    {
        int** c=new int*[2];
        for(int i=0;i<2;i++)
        {
            c[i]=new int[2];
        }
        c[0][0]=(a[0][0]*b[0][0]+a[0][0]*b[1][0]);
        c[0][1]=(a[0][0]*b[0][1]+a[0][1]*b[1][1]);
        c[1][0]=(a[1][0]*b[0][0]+a[1][1]*b[1][0]);
        c[1][1]=(a[1][0]*b[0][1]+a[1][1]*b[1][1]);

    }
    double plus_mtrca(int **a, int **b)
    {
        int** c=new int*[2];
        for(int i=0;i<2;i++)
        {
            c[i]=new int[2];
        }
        c[0][0]=a[0][0]+b[0][0];
        c[0][1]=a[0][1]+b[0][1];
        c[1][0]=a[1][0]+b[1][0];
        c[1][1]=a[1][1]+b[1][1];
        return **c;
    }
    double opred(int **a)
    {
        int c=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        return c;
    }
    double transpon(int **a)
    {
        int** b=new int*[2];
        for(int i=0;i<2;i++)
        {
            b[i]=new int[2];
        }
        b[0][0]=a[0][0];
        b[0][1]=a[1][0];
        b[1][0]=a[0][1];
        b[1][1]=a[1][1];
        return **b;
    }

};

int main()
{

    mtrca a,b(2,4,6,8),c(mtrca &b);
    int n;
    cin>>n;
    cout << a.mult_mtrca_4islo(n);
    a.mult_mtrca_mtrca();


    return 0;
}
