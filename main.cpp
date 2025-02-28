#include <iostream>

using namespace std;

int main()
{
    cout << "# FourthLegPracticeCpp"<<endl<<endl;
    cout << "# Lets practice what we have been studying."<<endl<<endl;

    cout << "1. Develop an algorithm that reads a 5 x 5 matrix, calculates and prints the sum of all its values."<<endl;

    int matrixSizeX = 5, matrixSizeY = 5;
    int matrix1[matrixSizeX][matrixSizeY], sum = 0;
    srand(time(NULL));

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
        

    return 0;
}