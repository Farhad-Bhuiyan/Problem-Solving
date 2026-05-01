#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert 8-bit binary string to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (int i = 0; i < 8; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, 7 - i);
        }
    }
    return decimal;
}

int main() {
    string binaryIP;
    //cout << "Enter IPv4 in binary (e.g., 11000000.10101000.00000001.00000001): ";
    cin >> binaryIP;

    string octet = "";
    int count = 0;

    cout << "Decimal IP: ";

    for (int i = 0; i <= binaryIP.length(); i++) {
        if (i == binaryIP.length() || binaryIP[i] == '.') {
            int decimal = binaryToDecimal(octet);
            cout << decimal;
            if (count < 3) cout << ".";
            count++;
            octet = "";
        } else {
            octet += binaryIP[i];
        }
    }

    cout << endl;
    return 0;
}