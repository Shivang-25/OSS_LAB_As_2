#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter order of Matrix : " << endl;
    cin >> n;
    int arr[n][n];
    cout << "Enter in Matrix : " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }

    int A[n][n];

    //transpose
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            A[i][j] = arr[j][i];
        }
    }

    //display
    cout << "Original Matrix" << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Transpose Matrix" << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
