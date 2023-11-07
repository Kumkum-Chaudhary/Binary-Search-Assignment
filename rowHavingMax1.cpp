// 3 -> row having maximum 1's
#include <iostream>
#include <vector>
using namespace std;
int findMaxOnesRow(const vector<vector<int>>& matrix) {
    int maxOnesCount = 0;
    int maxOnesRow = -1;
    for (int i = 0; i < matrix.size(); ++i) {
        int onesCount = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}
int main() {
    int a;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> a;
    cout << "Enter elements of the matrix (0s and 1s):" << endl;
    vector<vector<int>> matrix(a, vector<int>(a));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] != 0 && matrix[i][j] != 1) {
                cout << "Invalid input. Matrix elements must be 0 or 1." << endl;
                return 1; // Exit with an error code
            }
        }
    }
    int result = findMaxOnesRow(matrix);
    cout << "Output: " << result << endl; // 0-based row index
    return 0;
}