// Q1) WAP IN C++ USING CLASS AND OBJECT TO CALCULATE THE AREA AND VOLUME OF THE ROOM.
// #include <iostream>
// using namespace std;
// class cal
// {
//     public:
//     double len,bred,hei;
//     void read()
//     {
//         cout<<"Enter the length: ";
//         cin>>len;
//         cout<<"Enter the breadth: ";
//         cin>>bred;
//         cout<<"Enter the height: ";
//         cin>>hei;
//     }
//     void area()
//     {
//         int a;
//         a=len*bred;
//         cout<<"Area is: "<<a<<endl;
//         int v;
//         v=len*bred*hei;
//         cout<<"Volume is: "<<v<<endl;
//     }
// };
// int main()
// {
//     cal obj1;
//     obj1.read();
//     obj1.area();
// }


// Q2) CREATE A RECTANGLE CLASS WITH ATRIBUTES FOR LENGTH AND WIDTH. INCLUDE METHODS TO SET DIMENSIONS, CALCULATE AREA AND DISPLAY THE DIMENSIONS.
// #include <iostream>
// using namespace std;
// class rectangle
// {
//     double length,width,result;
//     public:
//     void area()
//     {
//         result=length*width;
//         cout<<"Area is: "<<result;
//     }
//     void read()
//     {
//         cout<<"Enter the length: ";
//         cin>>length;
//         cout<<"Enter the width: ";
//         cin>>width;
//     }
//     void display()
//     {
//         cout<<"The length is: "<<length<<endl;
//         cout<<"The width is: "<<width<<endl;
//     }
// };
// int main()
// {
//     rectangle obj;
//     obj.read();
//     obj.display();
//     obj.area();
//     return 0;
// }


// Q3) CREATE A CLASS CALLED STUDENT AND CREATE 2 MEMBER FUNCTIONS setDATA and printData TAKE 3 DATA MEMBERS NAME , ROLL_NO AND MARKS.
// #include <iostream>
// using namespace std;
// class student
// {
//     string name;
//     int roll_no;
//     double marks;
//     public:
//     void setData(const string &studentName, int rollNumber, double studentMarks) {
//         name = studentName;
//         roll_no = rollNumber;
//         marks = studentMarks;
//     }
//     void printData() const {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };
// int main() {
//     student stud;
//     stud.setData("John Doe", 101, 89.5);
//     stud.printData();
//     return 0;
// }


// Q4) CREATE A CLASS CALLED AdditionClass, DEFINE DATA MEMBERS NUM1, NUM2 AND RESULT, DEFINE MEMBER FUNCTIONS VOID READ(), VOID SUM(), VOID PRINT() RESPECTIVELY. CREATE OBJECT OBJ1 AND OBJ2 IN MAIN METHOD AND SHOW THE EXECUTION.
// #include<iostream>
// using namespace std;
// class AdditionClass
// {
//     public:
//     int num1,num2,result;
//     void read()
//     {
//     cout<<"Enter first number: ";
//     cin>>num1;
//     cout<<"Enter second number: ";
//     cin>>num2;
//     }
//     void sum()
//     {
//     result=num1+num2;
//     }
//     void print()
//     {
//     cout<<"Sum is: "<<result<<endl;
//     }
// };
// int main()
// {
//     AdditionClass obj1,obj2;
//     cout<<"For first number:"<<endl;
//     obj1.read();
//     obj1.sum();
//     obj1.print();
//     cout<<"For second number:"<<endl;
//     obj2.read();
//     obj2.sum();
//     obj2.print();
// }