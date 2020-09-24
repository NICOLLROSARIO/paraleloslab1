#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;
unsigned t0, t1;
int main()
{
    int MAX=100,x1,y1;
    int M[MAX][MAX], M2[MAX][MAX],M3[MAX][MAX];
    cout<<"matriz 1 Numero filas: ";
    cin>> x1;
    cout<< "matriz 1 Numero colum: ";
    cin>> y1;

    for (int i= 0; i< x1; i++)
    {
        for (int j=0 ; j< y1; j++)
            {
                 M[i][j]=rand()%1000+1;
                 M2[i][j]=rand()%1000+1;
                 M3[i][j]=0;
            }

    }

    ////// MULTIPLICACION /////////
    t0=clock();
    for (int i=0;i<x1;i++)
    {
        for(int j=0;j<y1;j++)
        {
            for (int k=0;k<y1;k++ )
            {
                M3[i][j]=M3[i][j]+M[i][k]*M2[k][j];
            }
        }
    }
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;


    return 0;
}