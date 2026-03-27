#include <iostream>
using namespace std;

class MyClass
{
public:
    int muNum;
    string myString;
};

class Book
{
public:
    string title;
    string author;
    int year;
};
int main()
{

    Book Matilda;
    Matilda.title = "Matilda";
    Matilda.author = "Roald Dahl";
    Matilda.year = 1988;

    Book Tree;
    Tree.author = "Shel Silverstein";
    Tree.title = "The Giving Tree";
    Tree.year = 1964;

    cout << Matilda.title << ", " << Matilda.author << ", " << Matilda.year << endl;
    cout << Tree.title << ", " << Tree.author << ", " << Tree.year << endl;

    // MyClass myobj;
    // myobj.myString = " My word";
    // myobj.muNum = 10;
    // cout << myobj.muNum << endl;
    // cout << myobj.myString << endl;

    // MyClass myObj2;
    // myObj2.muNum = 12;
    // myObj2.myString = "sdfn";
    // cout << myObj2.myString << endl;
    // cout << myObj2.muNum << endl;
}