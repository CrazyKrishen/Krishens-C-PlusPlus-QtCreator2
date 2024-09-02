#include <cstdarg>
#include <iostream>
using namespace std;

double mean(int n, ...)  //note the elipses ... means you can add as many values you want
{
    va_list ap;  //A variable, usually named ap (argument pointer), of type va_list , is used to traverse the list of unnamed arguments.
    double sum(0);
    int count =0;

    va_start(ap, n);  //Here, where n is the last-named parameter in the list, initializes ap so that it points to the first of the unnamed arguments


    for (int i = 0; i < count; ++i)
    {
    sum += va_arg(ap, double);
    }
    va_end(ap);  // The macro must be called after all the unnamed arguments have been processed. It cleans up
    //the stack of unnamed arguments and ensures that the program will behave properly after the function has terminated.

 return sum / count;

}




int main()
{
 cout << mean(4, 11.3, 22.5, 33.7, 44.9) << endl;
 cout << mean (5, 13.4, 22.5, 123.45, 421.33, 2525.353) << endl;

 return 0;
}


