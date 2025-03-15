#include <iostream>
using namespace std;
class Matrix
 {
private:
    int rows, cols;
    int** data;

public:

    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    Matrix(const Matrix& other) {
        rows = other.rows;
        cols = other.cols;

        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    void setValues() {
        cout << "Enter elements for matrix (" << rows << "n" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    Matrix mat1(rows, cols);
    mat1.setValues();

    cout << "Matrix1:\n";
    mat1.display();
    Matrix mat2 = mat1;
    cout << "Matrix2 (copied from Matrix 1):\n";
    mat2.display();

    return 0;
}

