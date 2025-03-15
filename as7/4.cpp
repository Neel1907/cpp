#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;

public:
	
    Matrix(int r, int c) : rows(r), cols(c) {
    	
        data = new int*[rows];
        for(int i = 0;  i<rows;  i++) {
        	data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    
    int* operator[](int index) {
        if (index>=0 && index<rows) {
            return data[index]; 
        } else 
		{
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
    }

    
    void inputMatrix() {
        cout << "Enter elements of the matrix: " << rows << "x" << cols << "\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    
    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows = 3, cols = 3;
    Matrix mat(rows, cols);

    mat.inputMatrix();
    
    cout << "Matrix is:\n";
    mat.displayMatrix();

    
    cout << "Element at (1,2): " << mat[1][2] << endl; 

    return 0;
}
