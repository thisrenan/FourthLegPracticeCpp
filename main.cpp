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

    cout<<endl<<"4. Write a program that reads a 4 x 4 matrix and then adds up all the elements contained in the main diagonal. Display the result."<<endl;

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

    cout<<endl<<"The sum of the value of the elements in the main diagonal is: "<<sum<<".";

    cout<<endl<<endl;

    cout<<"5. Write a program that reads a 4 x 4 matrix and then adds all the elements contained in the secondary diagonal. Display the result."<<endl;

    matrixSizeX = 4;
    matrixSizeY = 4;
    int matrix5[matrixSizeX][matrixSizeY];
    sum = 0;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix5[i][j]=rand()%20;
            if (i + j == 3)
                sum += matrix5[i][j];
        }        
    }  

    cout<<endl<<"Matrix:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix5[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"The sum of the value of the elements in the main diagonal is: "<<sum<<"."<<endl;

    cout<<endl<<endl;

    cout<<"6. Write a program that fills a 5x5 matrix using random numbers. Then create two vectors and place, in one, the sum of the matrix rows, and in the other the sum of the matrix columns. Display the result."<<endl;

    matrixSizeX = 5;
    matrixSizeY = 5;
    int matrix6[matrixSizeX][matrixSizeY];
    int vector6rows[matrixSizeY], vector6column[matrixSizeX];

    for (int i = 0; i < matrixSizeX; i++)
    {
        vector6rows[i] = 0;
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix6[i][j]=rand()%20;
            vector6rows[i] += matrix6[i][j];
        }        
    }  

    for (int i = 0; i < matrixSizeX; i++)
    {
        vector6column[i] = 0;
        for (int j = 0; j < matrixSizeY; j++)
        {
            vector6column[i] += matrix6[j][i];
        }        
    }      

    cout<<endl<<"Matrix:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix6[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"VectorRows: "<<endl;
    for (int i = 0; i < matrixSizeY; i++)
    {
        cout<<vector6rows[i]<<" ";
    }

    cout<<endl<<"VectorColumns: "<<endl;
    for (int i = 0; i < matrixSizeY; i++)
    {
        cout<<vector6column[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"7. Develop an algorithm that reads a set of integers that will be stored in a matrix A with dimensions 10x10. From matrix A, the program must generate a vector with the largest elements of each row and another vector with the smallest elements of each column."<<endl;

    matrixSizeX = 10;
    matrixSizeY = 10;
    int matrix7[matrixSizeX][matrixSizeY];
    int vector7rows[matrixSizeY], vector7column[matrixSizeX];
    
    for (int i = 0; i < matrixSizeX; i++)
    {
        vector7rows[i] = 0;
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix7[i][j]=rand()%20;
            if (matrix7[i][j] > vector7rows[i])
                vector7rows[i] = matrix7[i][j];
        }        
    }  

    for (int i = 0; i < matrixSizeX; i++)
    {
        vector7column[i] = 0;
        for (int j = 0; j < matrixSizeY; j++)
        {
            if (matrix7[j][i] > vector7column[i])
                vector7column[i] = matrix7[j][i];
        }        
    }      

    cout<<endl<<"Matrix:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix7[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"VectorRows: "<<endl;
    for (int i = 0; i < matrixSizeY; i++)
    {
        cout<<vector7rows[i]<<" ";
    }

    cout<<endl<<"VectorColumns: "<<endl;
    for (int i = 0; i < matrixSizeY; i++)
    {
        cout<<vector7column[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"8. Create an algorithm that fills a 20 x 20 matrix of real numbers and adds each of the rows, storing the result of the sum in a vector. Then, multiply each element of the matrix by the sum of its row, and place it in a second matrix of the same size. Show the resulting matrix."<<endl;

    matrixSizeX = 20;
    matrixSizeY = 20;
    int matrix8A[matrixSizeX][matrixSizeY], matrix8B[matrixSizeX][matrixSizeY];
    int vector8rows[matrixSizeY];
    
    for (int i = 0; i < matrixSizeX; i++)
    {
        vector8rows[i] = 0;
        for (int j = 0; j < matrixSizeY; j++)
        {
            matrix8A[i][j]=rand()%20;
            vector8rows[i] += matrix8A[i][j];
        }        
    }  

    for (int i = 0; i < matrixSizeX; i++)    
        for (int j = 0; j < matrixSizeY; j++)        
            matrix8B[i][j]=matrix8A[i][j]*vector8rows[i];

    cout<<endl<<"MatrixA:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix8A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"VectorRows: "<<endl;
    for (int i = 0; i < matrixSizeY; i++)
    {
        cout<<vector8rows[i]<<" ";
    }

    cout<<endl<<"MatrixB:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix8B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;

    cout << "9. Create an algorithm that reads two square matrices X and Y, with order 5, and performs the following manipulations:"<<endl
         << "a. Generate a matrix W with the smallest elements between matrices X and Y, that is, an element Wij has the smallest value between elements Xij and Yij. If the elements are equal, both are the smallest value."<<endl
         << "b. Generate a vector with the elements of the main diagonal of matrix X."<<endl
         << "c. Find the column of matrix Y that has the smallest sum of the values of its elements among all the columns of the matrix, and show the position of this column. If there are equal column sums, consider the first column with the occurrence of the value."<<endl;

    matrixSizeX = 5;
    matrixSizeY = 5;
    int matrix9X[matrixSizeX][matrixSizeY], matrix9Y[matrixSizeX][matrixSizeY], matrix9W[matrixSizeX][matrixSizeY];

    for (int i = 0; i < matrixSizeX; i++)
        for (int j = 0; j < matrixSizeY; j++)
            matrix9X[i][j]=rand()%20;

    for (int i = 0; i < matrixSizeX; i++)
        for (int j = 0; j < matrixSizeY; j++)
            matrix9Y[i][j]=rand()%20;    

    for (int i = 0; i < matrixSizeX; i++)
        for (int j = 0; j < matrixSizeY; j++)
            if (matrix9X[i][j] <= matrix9Y[i][j])
                matrix9W[i][j] = matrix9X[i][j];
            else
                matrix9W[i][j] = matrix9Y[i][j];

    
    cout<<endl<<"MatrixX:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix9X[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"MatrixY:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix9Y[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"MatrixW:"<<endl;

    for (int i = 0; i < matrixSizeX; i++)
    {
        for (int j = 0; j < matrixSizeY; j++)
        {
            cout<<matrix9W[i][j]<<" ";
        }
        cout<<endl;
    }    
    

    return 0;
}