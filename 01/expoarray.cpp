#include <iostream>
using namespace std;

int main()
{
    int n, m, q, p;
    // Input dimensions for Matrix A (n × m) and Matrix B (m × p)
    cin >> n >> m >> q >> p;

    if (m == q)
    {
        int arr1[n][m], arr2[m][p], result[n][p];

        // Input Matrix A
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr1[i][j];
            }
        }

        // Input Matrix B
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cin >> arr2[i][j];
            }
        }

        // Initialize the result matrix with zeros
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                result[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // Output the result matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
