#include "mystaticclass.h"

#include <iostream>

using namespace std;

int main()
{
    double myValue, myResult;
    cout << "Anna desimaaliluku" << endl;
    cin>>myValue;
    myResult=MyStaticClass::doubleMe(myValue);

    cout << "Tulos on "<<myResult<<endl;

    return 0;
}
