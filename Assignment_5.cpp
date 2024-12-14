// Q1) CREATE A TEXT FILE.
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream my_file("1.txt");
//     my_file.close();
//     return 0;
// }


// Q2) NAMING
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main() {
//     string fileName;
//     cout << "Enter the name of the text file (without extension): ";
//     cin >> fileName;
//     fileName += ".txt";
//     ofstream file(fileName);

//     if (!file) {
//         cerr << "Error creating file!" << endl;
//         return 1;
//     }
//     file << "This is an example of writing to a text file." << endl;
//     file.close();

//     cout << "File \"" << fileName << "\" created successfully!" << endl;
//     return 0;
// }


// Q3) ERROR CHECKING
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream my_file("1.txt");
//     if (!my_file)
//     {
//         cout<<"Error opening the file."<<endl;
//         return 1;
//     }
//     my_file.close();
//     return 0;
// }


// Q4) WRITING TO A FILE
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream my_file("1.txt");
//     if (!my_file)
//     {
//         cout<<"Error opening the file."<<endl;
//         return 1;
//     }
//     my_file<<"Hi Btech Students"<<endl;
//     my_file<<"This is C++ Session"<<endl;
//     my_file<<"ALL THE BEST"<<endl;
//     my_file.close();
//     return 0;
// }


// Q5) READ FROM A FILE
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream my_file("1.txt");
//     if (!my_file)
//     {
//         cout<<"Error opening the file."<<endl;
//         return 1;
//     }
//     string line;
//     while (!my_file.eof())
//     {
//         getline(my_file,line);
//         cout<<line<<endl;
//     }
//     my_file.close();
//     return 0;
// }


// Q6) APPEND TO A FILE
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream my_file("1.txt",ios::app);
//     if (!my_file)
//     {
//         cout<<"Error opening the file."<<endl;
//         return 1;
//     }
//     my_file<<"Line 4"<<endl;
//     my_file<<"Line 5"<<endl;
//     my_file<<"Line 6"<<endl;
//     my_file.close();
//     return 0;
// }