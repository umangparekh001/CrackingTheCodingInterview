#include<iostream>
#include<vector>
using namespace std;

void nullify_matrix(vector< vector<int> > &matrix, int m, int n) {
    int i = 0, j = 0;
    int final_r = 0, final_c = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << matrix[i][j] << "  ";
            if (matrix[i][j] == 0) {
                final_r = i;
                final_c = j;
                break;
            }
        }
        if (j != n) {
            break;
        }
    }

    cout << endl;
    cout << "zero m-n: " << final_r << "-" << final_c;
    cout << endl;

    for (i = 0; i < m; i++) {
        matrix[i][final_c] = 0;
    }
    for (i = 0; i < n; i++) {
        matrix[final_r][i] = 0;
    }
}

int main (void) {
    int i = 0, j = 0;
    int m = 4, n = 3;
    vector< vector <int> > matrix;

    cout << "Enter " << m << " x " << n << "matrix values :" << endl;
    for (i = 0; i < m; i++) {
        vector<int> row;
        for (j = 0; j < n; j++) {
            int val;
            cin >> val;
            row.push_back(val);
        }
        matrix.push_back(row);
    }
    cout << "Entered matrix values :" << endl;
    for (i = 0; i < matrix.size(); i++) {
        vector<int> row;
        for (j = 0; j < n; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    nullify_matrix(matrix, m, n);
    cout << "Resultant matrix values :" << endl;
    for (i = 0; i < matrix.size(); i++) {
        vector<int> row;
        for (j = 0; j < n; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
