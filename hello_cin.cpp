/// @file <hello cin.cpp>
/// @brief <Allows the user to type a single word output message>
/// @author <Marisol Delbrey>

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string strMessage;
    cout << "Please type a single word message" << endl;
    cin >> strMessage;
    cout << "Message: " << strMessage << endl;
    return 0;
}