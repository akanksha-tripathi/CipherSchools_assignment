#include <iostream>
using namespace std;
void spiralPrint(int end_index_row, int end_index_col, int arr[R][C])
{
	int start_index_row=0;int i=0,start_index_col=0;
    while (start_index_row < end_index_row && start_index_col < end_index_col) {
        for ( i = start_index_col; i < end_index_col; ++i) {
            cout << arr[start_index_row][i] << " ";
        }
        start_index_row++;
        for (i = start_index_row; i < end_index_row; ++i) {
            cout << arr[i][end_index_col - 1] << " ";
        }
        end_index_col--;
        if (start_index_row < end_index_row) {
            for (i = end_index_col - 1; i >= start_index_col; --i) {
                cout << arr[end_index_row - 1][i] << " ";
            }
            end_index_row--;
        }

        if (start_index_col < end_index_col) {
            for (i = end_index_row - 1; i >= start_index_row; --i) {
                cout << arr[i][start_index_col] << " ";
            }
            start_index_col++;
        }
    }
}

int end_index_rowain()
{
    int arr[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
    spiralPrint(R, C, arr);
    return 0;
}
 
