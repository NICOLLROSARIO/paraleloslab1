 t0=clock();
    int MAX =500;
    double A[MAX][MAX], X[MAX], Y[MAX];
    for (int i= 0; i<MAX; i++)
    {
        for (int j=0 ; j< MAX; j++)
            {
                 A[i][j]=rand() % 10000 + 1;
                 X[j]=rand()%10000 + 1;
                 Y[i]=0;
            }
    }
    for (int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            Y[i]+=A[i][j]*X[j];
        }
    }
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
