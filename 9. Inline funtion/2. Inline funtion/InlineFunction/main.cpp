#include <iostream>
using namespace std;


inline void Display(int a)
{
    cout <<a<<endl;

}


int main()
{

    Display(10);

    return 0;
}


//inline is used for reducing your compilation time

//if a funtion is inline, the compiler places a copy of the specified fucntions coed at each point where the function
//is called at compile time

//To reduce the overhead of control transfer, we tend to use inlinje fucntions. Without inline functions the
//compiler will have to move back and fourth, thus creating control transfer.


//So it just makes it faster for compilation but does the normal thing like the normal compilation. You wont see the
//difference but in the background, its faster.
