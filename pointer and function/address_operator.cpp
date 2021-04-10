#include<iostream>
using namespace std;

int main ()
{
    int x =10;
    int y1 = 5;
    cout<< &x <<endl;

    float y = 3.5;
    cout<< &y <<endl;

    // pointer does not work for character
    char c = 'a';
    cout<< &c<<endl; // it does not work
    // but
    // Explicit Typecasting to void* will work fine.
    cout<< (void *) &c <<endl; // it will work

    int *xptr;
    // store the address of a variable
    xptr = &x;
    xptr = &y1;
    cout<<&y1<<endl;
    cout<<xptr<<endl;

    cout<< &x <<endl;
    cout<< xptr<<endl;

    return 0;
}
