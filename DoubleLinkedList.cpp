#include <iostream>
using namespace std;

// membuat struktur utuk object double linkedlist
struct Node
{
    //deklarasi noMhs dan nama untuk menampung data
    int noMhs;
    string name;

    //deklarasi pointer next da pref untuk penunjukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};

//deklarasi pointer START dan pemberian nilai
Node *START = NULL;

//deklarasi prosedur addNode
void addNode()
{

    //pembuatan node dan pemberian value untuk data noMhs dan nama
    Node *newNode = new Node(); //step 1 buat node baru
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; //assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name; //assign value the data field of th
}