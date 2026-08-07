#include <iostream>
#include <string>

void validatePassword(const std::string& password);

int main()
{
    std::string password;
    bool valid = false;

    while (!valid)
    {
        std::cout << "\n\nEnter a new password: ";
        std::cin >> password;

        try
        {
            validatePassword(password);
            valid = true;
        }
        catch (std::string errorMessage)
        {
            std::cout << errorMessage << "Try again." << std::endl << std::endl;
        }
    }
    std::cout << "Password successfully accepted!\n" << std::endl;
    return 0;
}

void validatePassword(const std::string& password)
{
    if (password.length() < 8)
    {
        throw std::string("Error Message: Password must be at least 8 characters. ");
    }

    bool hasDigit = false;
    bool hasUpperC = false;

    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = true;
        }

        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            hasUpperC = true;
        }
    }

    if (!hasDigit)
    {
        throw std::string("Error Message: Password must contain at least one numeric digit.");
    }

    if (!hasUpperC)
    {
        throw std::string("Error Message: Password must contain at least one uppercase letter.");
    }
}