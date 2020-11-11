#include <iostream>

using namespace std;

int main()

{
    int multi;
    int value;
    cout << "Input the value" << endl;
    cin >> value;
    for (multi=0;multi<=5;multi++){

        cout << value << " * " << multi << " = " <<(value*multi) << endl;
    }

    return 0;
}
