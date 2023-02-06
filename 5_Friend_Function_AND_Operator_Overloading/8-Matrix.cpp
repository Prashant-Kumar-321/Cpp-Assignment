#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Matrix
{
  int mat[3][3] = {{1, 4, -2},
                   {9, 0, 19},
                   {-2, 8, 10}};
  static int count;

public:
  Matrix() {}
  Matrix(int (*a)[3])
  {
    int i, j;
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        mat[i][j] = a[i][j]; // *(*(a+i)+j);
    }
  }

  // Taking input in object of Matrix;
  friend istream &operator>>(istream &in, Matrix &M)
  {
    int i, j;
    cout << "Enter Elements of matrix (3X3): \n";

    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        cin >> M.mat[i][j];
    }

    return in;
  }

  friend ostream &operator<<(ostream &out, const Matrix &M)
  {
    int i, j;
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
        cout << setw(3) << M.mat[i][j] << "   ";
      }

      cout << endl;
    }

    return out;
  }

  // Member function for negating the element of of Matrix object
  Matrix operator-()
  {
    int i, j;
    // negating all the elements of matrix of object
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
        mat[i][j] *= -1;

    return *this;
  }
};

int Matrix::count = 0; // v.v imp // shared memory among objects of Matrix class

// Driver function
int main(void)
{
  Matrix m1;
  cout << "Matrix : " << endl;
  cout << m1 << endl;

  cin >> m1; // input taking in m1 object

  system("cls");
  cout << "Matrix M : " << endl;
  cout << m1 << endl;

  -m1;
  cout << "Matrix -M : " << endl;
  cout << m1 << endl;

  getch();
  return 0;
}
