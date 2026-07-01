// #include <iostream>
// using namespace std;

// Function to print elements in even columns
// Function to print the whole array
// void aaa(int arr[][4], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//craete a method that will print the sum of each row
// void sumFn(int arr[][3], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         int sum = 0;
//         for(int j=0;j<col;j++){
//             sum+=arr[i][j];
//         }
//     }
// }
// int main() {
//     int arr[3][3];

//     cout << "Enter a 3x3 matrix:\n";

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     sumFn(arr, 3, 3);

//     return 0;
// }

// int main() {
//     int arr[3][4];
//     // Input
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     sumFn(arr, 3, 4);
//     //aaa(arr, 3, 4);

//     //printEvenColumn(arr, 3, 4);

//     //printOddRow(arr, 3, 4);

//     return 0;
// }


#include <iostream>
using namespace std;
//q1 for a given 2D array, create a method that will print calculate and print the sum of each row
/*void RowSum(int arr[][3], int row, int col) {
    for (int i=0;i<row;i++) {
        int sum=0;
        for (int j=0;j<col;j++) {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}*/
//print the value of max sum & its row index- max sum nikalo,jiska sum max h uska i return krdo bs
//if multiple rows have max sum,print the index of last row
/*void MaxRowSum(int arr[][3], int row, int col) {
    int maxSum = 0;
    int index = -1;

    for (int i = 0; i < row; i++) {
        int sum = 0;

        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum >= maxSum) {   //q3 >= chooses the last row if sums are equal
            maxSum = sum;
            index = i;
        }
    }

    cout << "Maximum Row Sum = " << maxSum << endl;
    cout << "Row Index = " << index << endl;
}*/

// Spriral Print
void spiralPrint(int arr[][3], int row, int col) {
    int topRow = 0, bottomRow = row - 1;
    int leftcol = 0, rightcol = col - 1;

    while (topRow <= bottomRow && leftcol <= rightcol) {
        // Print top row
        for (int i = leftcol; i <= rightcol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //print right col
        for(int i=topRow;i<=bottomRow;i++){
            cout<<arr[i][rightcol]<<" ";
        }
        rightcol--;

        //print bottom
        for(int i=rightcol;i>=leftcol;i--){
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;

        //print left col
        for(int i=bottomRow;i>=topRow;i--){
            cout<<arr[i][leftcol]<<" ";
        }
        for(int i=topRow;i<=bottomRow;i++){
            cout<<arr[i][leftcol]<<" ";
        }
    } 



        // Print left column if still within bounds
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}
int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    //RowSum(arr, 3, 3);
    MaxRowSum(arr, 3, 3);
    return 0;
}







