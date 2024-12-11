// Q1) WAP IN C++ TO CALCULATE THE SUM OF N NATURAL NUMBERS USING RECURSION
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + sum(n-1);
//     }
// }
// int main()
// {
//     int n,result;
//     cout<<"Enter a number: ";
//     cin>>n;
//     result=sum(n);
//     cout<<"Sum of first"<<n<<" natural numbers = "<<result<<endl;
//     return 0;
// }


// Q2) WAP IN C++ TO FIND FIBONACCI SERIES USING RECURSION
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n<=0)
//     {
//         return 0;
//     }
//     else if (n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n-1) + fib(n-2);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"fibonacci series of "<<n<<" numbers = "<<endl;
//     for (int i=0;i<n;i++)
//     {
//     cout<<fib(i)<<" ";
//     }
//     return 0;
// }

// Q3) WAP TO DEMONSTRATE DESTRUCTOR IN C++
// #include <iostream>
// using namespace std;
// class employee
// {
//     public:
//     employee()
//     {
//         cout<<"Constructor Invoked"<<endl;
//     }
//     ~employee()
//     {
//         cout<<"Destructor Invoked"<<endl;
//     }
// };
// int main()
// {
//     employee e1;
//     return 0;
// }


// Q4)WAP TO DEMONSTRATE COPY CONSTRUCTOR IN C++
// #include <iostream>
// using namespace std;
// class MyClass 
// {
// public:
//     int *ptr;
//     MyClass(int val) 
//     {
//         ptr = new int;
//         *ptr = val;
//         cout << "Constructor: Value = " << *ptr << endl;
//     }
//     MyClass(const MyClass &obj) 
//     {
//         ptr = new int;
//         *ptr = *(obj.ptr);
//         cout << "Copy Constructor: Value = " << *ptr << endl;
//     }
// };
// int main() 
// {
//     MyClass obj1(100);
//     MyClass obj2 = obj1;
//     return 0;
// }


// Q5)WAP TO DEMONSTRATE VIRTUAL FUNCTION IN C++
#include <iostream>
using namespace std;
class Base 
{
public:
    virtual void display() 
    {
        cout << "Base class display function" << endl;
    }
};
class Derived : public Base 
{
public:
    void display() 
    {
        cout << "Derived class display function" << endl;
    }
};
int main() 
{
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); 
    return 0;
}
