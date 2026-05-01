#include <bits/stdc++.h>
using namespace std;

// Function to calculate redundant bits
int calculateRedundantBits(int m)
{
    int r = 0;
    while (pow(2, r) < (m + r + 1))
    {
        r++;
    }
    return r;
}
// Function to generate Hamming Code
void generateHammingCode(int data[], int m)
{
    int r = calculateRedundantBits(m);
    int totalBits = m + r;
    int hamming[totalBits + 1];
    int j = 0;
    for (int i = 1; i <= totalBits; i++)
    {
        if ((i & (i - 1)) == 0)
        {
            hamming[i] = 0;
        }
        else
        {
            hamming[i] = data[j++];
        }
    }
    // Calculate parity bits
    for (int i = 0; i < r; i++)
    {
        int pos = pow(2, i);
        int parity = 0;

        for (int j = 1; j <= totalBits; j++)
        {
            if (j & pos)
            {
                parity ^= hamming[j];
            }
        }
        hamming[pos] = parity;
    }
    cout << "\nGenerated Hamming Code: ";
    for (int i = totalBits; i >= 1; i--)
    {
        cout << hamming[i] << " ";
    }
    cout << endl;
}
// Function to detect and correct error
void detectError(int received[], int n)
{
    int r = 0;
    while (pow(2, r) < n)
    {
        r++;
    }
    int errorPos = 0;
    for (int i = 0; i < r; i++)
    {
        int pos = pow(2, i);
        int parity = 0;

        for (int j = 1; j <= n; j++)
        {
            if (j & pos)
            {
                parity ^= received[j];
            }
        }
        if (parity != 0)
        {
            errorPos += pos;
        }
    }
    if (errorPos == 0)
    {
        cout << "\nNo error detected.\n";
    }
    else
    {
        cout << "\nError detected at position: " << errorPos << endl;
        // Correct the error
        received[errorPos] ^= 1;
        cout << "Corrected Code: ";
        for (int i = n; i >= 1; i--)
        {
            cout << received[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m;
    cout << "Enter number of data bits: ";
    cin >> m;
    int data[m];
    cout << "Enter data bits (LSB first): ";
    for (int i = 0; i < m; i++)
    {
        cin >> data[i];
    }
    generateHammingCode(data, m);
    int n;
    cout << "\nEnter number of received bits: ";
    cin >> n;
    int received[n + 1];
    cout << "Enter received bits (1-based index): ";
    for (int i = 1; i <= n; i++)
    {
        cin >> received[i];
    }
    detectError(received, n);
    return 0;
}