#include <iostream>

using namespace std;

// Function to dynamically allocate a 2D array of doubles
double** allocateArray(int rows, int cols) {
    double** arr = new double*[rows]; // Dynamically allocate array of pointers

    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols]; // Dynamically allocate memory for each row
    }

    return arr;
}

// Function to assign values to each element of the 2D array
void assignValues(double** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j]; // Assign value to each element
        }
    }
}

// Function to output the values of each element of the 2D array
void outputValues(double** arr, int rows, int cols) {
    cout << "Values of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    // Prompt user to enter dimensions of the array
    cout << "Enter the number of rows (not exceeding 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Number of rows exceeds 3. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of columns (not exceeding 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Number of columns exceeds 3. Exiting program." << endl;
        return 1;
    }

    // Dynamically allocate a 2D array of doubles
    double** arr = allocateArray(rows, cols);

    // Assign values to each element of the array
    assignValues(arr, rows, cols);

    // Output the values of each element of the array
    outputValues(arr, rows, cols);

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i]; // Deallocate memory for each row
    }
    delete[] arr; // Deallocate array of pointers

    return 0;
}
