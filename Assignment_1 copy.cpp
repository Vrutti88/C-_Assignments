// Q1) CREATE A PROGRAM FOR MATRIX OPERATIONS(ADDITION)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows,cols;
//     cout<<"Enter number of rows: ";
//     cin>>rows;
//     cout<<"Enter number of cols: ";
//     cin>>cols;
//     int matrix1[10][10],matrix2[10][10],result[10][10];
//     cout<<"Enter elements of first matrix: "<<endl;
//     for(int i=0;i<rows;i++)
//     {
//         for (int j=0;j<cols;j++)
//         {
//             cin>>matrix1[i][j];
//         }
//     }
//     cout<<"Enter elements of second matrix: "<<endl;
//     for(int i=0;i<rows;i++)
//     {
//         for (int j=0;j<cols;j++)
//         {
//             cin>>matrix2[i][j];
//         }
//     }
//     for (int i=0;i<rows;i++)
//     {
//         for (int j=0;j<cols;j++)
//         {
//             result[i][j]=matrix1[i][j]+matrix2[i][j];
//         }
//     }
//     cout<<"Result of matrix is: "<<endl;
//     for (int i=0;i<rows;i++)
//     {
//         for (int j=0;j<cols;j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Q2)IMPLEMENT A PROGRAM FOR STRING MANIPULATION(REVERSE,PALINDROME)
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string str,rev;
//     cout<<"Enter a string: ";
//     getline(cin,str);
//     rev=string(str.rbegin(), str.rend());
    
//     if (str==rev)
//     {
//         cout<<"The string is palindrome!";
//     }
//     else
//     {
//         cout<<"Reversed string is: "<<rev<<endl;
//     }
//     return 0;
// }


// Q3) DEVELOP A PROGRAM TO SWAP TWO SWAP TWO NUMBERS USING POINTERS
// #include <iostream>
// using namespace std;
// void swap(int* x,int* y)
// {
//     int t=*x;
//     *x=*y;
//     *y=t;
//     cout<<"After swapping in function x: "<<*x<<", y: "<<*y<<endl;
// }
// int main()
// {
//     int x;
//     cout<<"Enter first element to swap: x = ";
//     cin>>x;
//     int y;
//     cout<<"Enter second element to swap: y = ";
//     cin>>y;
//     cout<<endl;
//     cout<<"Before Swapping: ";
//     cout<<"x: "<<x<<", y: "<<y<<endl;
//     swap(&x,&y);
//     cout << "After swapping in main: x = " << x << ", y = " << y << endl;
//     return 0;
// }


// Q4) SWAP NUMBER USING REFERENCE VARIABLES
// #include <iostream>
// using namespace std;
// void swap(int x,int y)
// {
//     int t=x;
//     x=y;
//     y=t;
//     cout<<"After swapping in function x: "<<x<<", y: "<<y<<endl;
// }
// int main()
// {
//     int x;
//     cout<<"Enter first element to swap: x = ";
//     cin>>x;
//     int y;
//     cout<<"Enter second element to swap: y = ";
//     cin>>y;
//     cout<<endl;
//     cout<<"Before Swapping: ";
//     cout<<"x: "<<x<<", y: "<<y<<endl;
//     swap(x,y);
//     return 0;
// }


// Q5) CREATE A DYNAMIC ARRAY FOR STORING NAME OF STUDENT
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numStud;
    cout << "Enter the number of students: ";
    cin >> numStud;
    string* studentNames = new string[numStud];
    cout << "Enter the names of the students:" << endl;
    cin.ignore();
    for (int i = 0; i < numStud; ++i) {
        cout << i + 1 << ": ";
        getline(cin, studentNames[i]);
    }
    cout << "\nThe names of the students are:" << endl;
    for (int i = 0; i < numStud; ++i) {
        cout << "Student " << i + 1 << ": " << studentNames[i] << endl;
    }
    delete[] studentNames;
    return 0;
}