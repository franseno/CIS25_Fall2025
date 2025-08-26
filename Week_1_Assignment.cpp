#include <iostream>
using namespace std;

int main() {
    //Print "Hello Inventory System"
    cout << "Hello Inventory System!\n";

    //Showcase use of escape characters
    cout << "Line 1\n";
    cout << "Line 2\t<- this is indented with a tab\n";
    cout << "This is a backlash \\\n";
    cout << "\"Double Quote\" and \'Single Quote\'\n";

    //Outputs sizes of data types 
    cout << "Data type sizes:\n";
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " <<sizeof(float) << " bytes\n";

    return 0;
}