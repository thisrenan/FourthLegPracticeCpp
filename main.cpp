#include <iostream>

using namespace std;

int main()
{
    cout << "# FourthLegPracticeCpp"<<endl<<endl;
    cout << "# Lets practice what we have been studying."<<endl<<endl;

    cout << "1. Develop an algorithm that reads a 5 x 5 matrix, calculates and prints the sum of all its values."<<endl;

    int matrixSizeX = 5, matrixSizeY = 5;
    int matrix1[matrixSizeX][matrixSizeY], sum = 0;
    srand(time(0));

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix1[i][j]=rand()%20;
        }        
    }

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix1[i][j]<<" ";
            sum += matrix1[i][j];
        }    
        cout<<endl;    
    }

    cout<<endl<<"The sum of this matrix is: "<<sum;

    cout<<endl<<endl;

    cout << "2. Write an algorithm that performs the following tasks with 3 x 5 matrices of integers:"<<endl
         << "a. Read a matrix A."<<endl
         << "b. Read a matrix B."<<endl
         << "c. Generate a matrix C with the sum of the elements of matrix A and B."<<endl
         << "d. Show all the elements of row 2 of matrix C."<<endl
         << "e. Show all the elements of column 3 of matrix C."<<endl;

    matrixSizeX = 3;
    matrixSizeY = 5;
    int matrix2A[matrixSizeX][matrixSizeY], matrix2B[matrixSizeX][matrixSizeY], matrix2C[matrixSizeX][matrixSizeY];

    srand(time(0));

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix2A[i][j]=rand()%20;
            matrix2B[i][j]=rand()%20;
        }        
    }

    cout<<endl<<"Matrix A:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix2A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matrix B:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix2B[i][j]<<" ";
        }
        cout<<endl;
    }
        
    for (int i = 0; i < matrixSizeX; i++)
        for (int j = 0; j < matrixSizeY; j++)
            matrix2C[i][j] = matrix2A[i][j] + matrix2B[i][j];

    cout<<endl<<"Matrix C:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix2C[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matrix C row 2:"<<endl;


        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix2C[2][j]<<" ";
        }

    cout<<endl<<endl<<"Matrix C column 3:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {        
        cout<<matrix2C[i][3]<<" ";        
        cout<<endl;
    }

    cout<<endl<<endl;

    cout << "3. Develop a program that fills a 5 x 5 matrix (using random selection) and then identifies the largest element of the matrix. Display the result."<<endl;

    matrixSizeX = 5;
    matrixSizeY = 5;
    int matrix3[matrixSizeX][matrixSizeY], largerst = 0;

    srand(time(0));

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix3[i][j]=rand()%20;
            if (matrix3[i][j] > largerst)
                largerst = matrix3[i][j];
        }        
    }

    cout<<endl<<"Matrix:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Matrix largest element is: "<<largerst<<endl;

    cout<<endl<<"Write a program that reads a 4 x 4 matrix and then adds up all the elements contained in the main diagonal. Display the result."<<endl;

    matrixSizeX = 4;
    matrixSizeY = 4;
    int matrix4[matrixSizeX][matrixSizeY];
    sum = 0;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix4[i][j]=rand()%20;
            if (i == j)
                sum += matrix4[i][j];
        }        
    }    

    cout<<endl<<"Matrix:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix4[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"The sum of the value of the elements in the main diagonal is: "<<sum<<"."<<endl;

    return 0;
}