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