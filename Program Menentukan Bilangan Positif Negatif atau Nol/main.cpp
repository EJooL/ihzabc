#include <iostream>
#include <limits>  // For numeric_limits
using namespace std;

int main() {
    // Variable to store user input
    float num;

    // Ask the user to input a number
    cout << "Masukkan sebuah angka: ";
    cin >> num;

    // Check if input failed (i.e., if a non-number was entered)
    if (cin.fail()) {
        // Clear the error flag on cin so we can use it again
        cin.clear();
        // Ignore the rest of the input (discard invalid input)
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Inform the user about invalid input
        cout << "Input tidak valid, silahkan masukkan angka!" << endl;
    }
    else {
        // Check if the number is positive, negative, or zero
        if (num > 0) {
            cout << "Angka tersebut positif." << endl;
        }
        else if (num < 0) {
            cout << "Angka tersebut negatif." << endl;
        }
        else {
            cout << "Angka tersebut nol." << endl;
        }
    }

    // Wait for the user to press Enter before closing
    cout << "Tekan Enter untuk keluar..." << endl;
    cin.ignore();  // Ignores any leftover input
    cin.get();     // Waits for the user to press Enter

    return 0;
}
