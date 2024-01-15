#include <iostream>
#include <string>

int main()
{
    // Step 1: Define Authenticator code constants
    const char k_cAuthenticatorCodeCharacter1 = 'E';
    const char k_cAuthenticatorCodeCharacter2 = 'C';
    const char k_cAuthenticatorCodeCharacter3 = 'A';

    // Step 2: Prompt the user to enter the message code characters
    char userCodeChar1, userCodeChar2, userCodeChar3;

    std::cout << "Enter the first character of the message code: ";
    std::cin >> userCodeChar1;

    std::cout << "Enter the second character of the message code: ";
    std::cin >> userCodeChar2;

    std::cout << "Enter the third character of the message code: ";
    std::cin >> userCodeChar3;

    // Step 3: Concatenate characters and display
    std::string userMessageCode;
    userMessageCode += userCodeChar1;
    userMessageCode += userCodeChar2;
    userMessageCode += userCodeChar3;

    std::string authenticatorCode;
    authenticatorCode += k_cAuthenticatorCodeCharacter1;
    authenticatorCode += k_cAuthenticatorCodeCharacter2;
    authenticatorCode += k_cAuthenticatorCodeCharacter3;

    // Display the entered message code and Authenticator code
    std::cout << "\nAuthenticator Code: " << authenticatorCode << "  Message Code: " << userMessageCode << std::endl;

    // Authenticity check
    if (userCodeChar1 == k_cAuthenticatorCodeCharacter1 && userCodeChar2 == k_cAuthenticatorCodeCharacter2 && userCodeChar3 == k_cAuthenticatorCodeCharacter3)
    {
        std::cout << "Message is authentic." << std::endl;
    }
    else
    {
        std::cout << "Message is invalid." << std::endl;
    }

    // Concurrence check
    if (userMessageCode == authenticatorCode)
    {
        std::cout << "Concurrence: message is authentic." << std::endl;
    }
    else
    {
        std::cout << "Concurrence: message is invalid." << std::endl;
    }

    // Checksum
    int checksum = (int(userCodeChar1) + int(userCodeChar2) + int(userCodeChar3)) % 7;
    const int k_iValidCodeChecksum = 5;

    // Compare the checksum and display message
    std::cout << "\nCharacterization of Message Code" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "ASCII values of Message Code Characters: " << int(userCodeChar1) << ", " << int(userCodeChar2) << ", " << int(userCodeChar3) << std::endl;
    std::cout << "Sum of ASCII values for Message Code Characters: " << int(userCodeChar1) + int(userCodeChar2) + int(userCodeChar3) << std::endl;

    if (checksum == k_iValidCodeChecksum)
    {
        std::cout << "Message Code Checksum is valid: 5" << std::endl;
    }
    else
    {
        std::cout << "Message Code Checksum is invalid: " << checksum << "; expected: 5" << std::endl;
    }

    // Remaining code for non-matching pairs and lexicographical relationship
    std::cout << "\nNon-matching pairs:" << std::endl;
    if (userCodeChar1 != k_cAuthenticatorCodeCharacter1)
        std::cout << "Character 1: Message Code (" << userCodeChar1 << ") != Authenticator Code (" << k_cAuthenticatorCodeCharacter1 << ")" << std::endl;
    if (userCodeChar2 != k_cAuthenticatorCodeCharacter2)
        std::cout << "Character 2: Message Code (" << userCodeChar2 << ") != Authenticator Code (" << k_cAuthenticatorCodeCharacter2 << ")" << std::endl;
    if (userCodeChar3 != k_cAuthenticatorCodeCharacter3)
        std::cout << "Character 3: Message Code (" << userCodeChar3 << ") != Authenticator Code (" << k_cAuthenticatorCodeCharacter3 << ")" << std::endl;

    std::cout << "\nLexicographical relationship:" << std::endl;
    if (userMessageCode < authenticatorCode)
        std::cout << "Message Code is lexicographically less than Authenticator Code" << std::endl;
    else if (userMessageCode > authenticatorCode)
        std::cout << "Message Code is lexicographically greater than Authenticator Code" << std::endl;

    return 0;
}
