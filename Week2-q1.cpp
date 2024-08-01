#include<iostream>

using namespace std;

int main(){
    int r, c;
    cout << "Enter rows and columns" << endl;
    cin >> r >> c;
       int **arr = new int*[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }

    // Input the original matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Allocate memory for the transposed matrix
    int **arr2 = new int*[c];
    for (int i = 0; i < c; i++) {
        arr2[i] = new int[r];
    }

    // Transpose the matrix
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            arr2[i][j] = arr[j][i];
        }
    }

    // Display the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}