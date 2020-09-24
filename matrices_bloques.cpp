#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;
double t0, t1;
int main()
{
	int MAX =500;
    double M[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX];
    for (int i= 0; i<MAX; i++)
    {
        for (int j=0 ; j< MAX; j++)
            {
                 M[i][j]=rand()%1000+1;
                 M2[i][j]=rand()%1000+1;
                 M3[i][j]=0;
            }
    }
    int paso = MAX / 10;
		t0 = clock();
		for(int i_0=0; i0<MAX; i_0=i_0+paso)
		{
	        for(int j_0=0; j0<MAX; j_0=j_0+paso)
	        {
	            for(int z_0=0; z0<MAX; z_0=z_0+paso)
	            {
	            	for (int i = i0; i < min(i_0 + paso, MAX); ++i)
	            	{
	            		for (int j = j0; j < min(j_0 + paso, MAX); ++j)
	            		{
	            			for (int k = z0; k < min(z_0 + paso, MAX); ++k)
	            			{
	            				M3[i][j] += M[i][k] * M2[k][j];
	            			}
	            		}
	            	}
	            }
	        }
		}
		t1 = clock();
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
        cout << "Execution Time: " << time << endl;

}
