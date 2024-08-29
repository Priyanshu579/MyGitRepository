#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// If we want to open or closing a file so that time we'll be use fstream header file
int main()
{
    /*
    // Opening files using constructor & writing it.
    string st = "Kritika ji is very innocent.";
    ofstream hout("sample.txt"); // write Operation
    hout << st;
    hout.close();  // closing a file
    // Opening files using constructor & reading it.
    string st2;
    ifstream hin("sample.txt");  // reading Operation
    // in>>st2; // This will print only one word.
    getline(hin,st2); // This is a function & it will print a complete line. & it's coming from string header file.
    cout<<st2;
    hin.close();
    */

   /*
   // Opening files using member functions.
//    string s = "This is Priyanshu";
//    ofstream out;
//    out.open("sample.txt");
//    out<<s;
//    out.close();
   ifstream in;
   in.open("sample.txt");
   string s2;
   while(in.eof()==0){
    getline(in,s2);
    cout<<s2<<endl;
   }
   in.close();
   */
   
    return 0;
}

//  Writing operation in the file
// string st = "This is priyanshu";
// ofstream out("Sample.txt");
// out<<st;

// Reading operation from the file
// string st;
// ifstream in("Sample.txt");
// while(in.eof()==0){
//     getline(in,st);
//     cout<<st;
// }

// Different method to open or closing the file.

// string love, st = "is my childhood love.";
// ofstream my;
// my.open("Sample.txt");
// cout<<"Enter your childhood love's name : ";
// cin>>love;
// my<<love<<" "<<st;
// my.close();

// string st;
// ifstream my;
// my.open("Sample.txt");
// getline(my,st);
// cout<<st;
// my.close();
