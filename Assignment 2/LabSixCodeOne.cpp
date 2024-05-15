
#include <iostream>
#include <string>

using namespace std;

// Function to dynamically allocate an integer and a string
void allocateIntAndString(int* &num, string* &str) {
    num = new int; // Dynamically allocate an integer
    str = new string; // Dynamically allocate a string
}

// Function to assign values to the dynamically allocated integer and string
void assignValues(int* num, string* str) {
    cout << "Enter an integer value: ";
    cin >> *num; // Assign value to the dynamically allocated integer

    cout << "Enter a string value: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, *str); // Assign value to the dynamically allocated string
}

// Function to output the values of the dynamically allocated integer and string
void outputValues(int* num, string* str) {
    cout << "Dynamically allocated integer value: " << *num << endl;
    cout << "Dynamically allocated string value: " << *str << endl;
}

int main() {
    // Dynamically allocate an integer and a string
    int* num;
    string* str;
    allocateIntAndString(num, str);

    // Assign values to the dynamically allocated integer and string
    assignValues(num, str);

    // Output the values of the dynamically allocated integer and string
    outputValues(num, str);

    // Deallocate memory
    delete num;
    delete str;

    return 0;
}



