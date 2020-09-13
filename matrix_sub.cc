#include "matrix.h"

// to open two data files
void open_files(ifstream& is1, ifstream& is2)
{
    is1.open(FILE1);
    is2.open(FILE2);
    if (is1.fail() || is2.fail())
    {
        cerr << "Error opening file(s)" << endl;
        exit(1);
    }
}

// to read contents of two data files
void read_data(ifstream& is, vector <vector <int> >& m)
{
    int temp = 0;

    for (unsigned int i = 0; i < m.size(); i++)
    {
        for (unsigned int j = 0; j < m[0].size(); j++)
        {
            is >> temp;
            m[i][j] = temp;
        }
    }

}

// to print contents of all matrices
void print_data(const vector <vector<int> >& m)
{
    for (unsigned int i = 0;i< m.size(); i++)
    {
        for (unsigned int j = 0; j < m[0].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void gen_data(const vector <vector<int> >& A, const vector <vector<int> >& B, vector <vector<int> >& C)
{
    for ( int i = 0; i < 5; i++)
    {
        for ( int j = 0; j < 10; j++)
        {
            C[i][j] = 0;
            for ( int k = 0; k < 5; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}