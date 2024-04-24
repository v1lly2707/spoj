#include <bits/stdc++.h>

using namespace std;

bool condition1(string login, string password)
{
    if (login.size() >= 3 && login.size() <= 12 && password.size() >= 5 && password.size() <= 15)
        return true;
    else return false;
}

bool condition2(string login)
{
    for (int i = 0; i < login.size(); i++)
    {
        if (!((login[i] >= 48 && login[i] <= 57) || (login[i] >= 65 && login[i] <= 90) || (login[i] >= 97 && login[i] <= 122)))
        {
            return false;
        }
    }
    return true;
}

bool condition3(string password)
{
    bool lowercase = false;
    bool uppercase = false;
    bool digit = false;
    bool spec_char = false;

    for (int i = 0; i < password.size(); i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
            uppercase = true;
        if (password[i] >= 97 && password[i] <= 122)
            lowercase = true;
        if (password[i] >= 48 && password[i] <= 57)
            digit = true;
        if ((password[i] >= 33 && password[i] <= 47) || (password[i] >= 58 && password[i] <= 64) || (password[i] >= 123 && password[i] <= 126))
            spec_char = true;
    }

    return spec_char && digit && uppercase && lowercase;
}

set < string > Login_Database;
set < pair < string, string > > User_Database;
int main()
{
    string command; // register or login
    string login, password;
    int x; // number of actions
    while (cin >> command)
    {
        if (command == "register")
        {
            cin >> x;
            while (x--)
            {
                cin >> login >> password;
                transform(login.begin(), login.end(), login.begin(), ::tolower);

                if (Login_Database.find(login) != Login_Database.end())
                    cout << "Login zajety\n";
                else
                {
                    if (condition1(login, password) == true && condition2(login) == true && condition3(password) == true)
                    {
                        Login_Database.insert(login);
                        User_Database.insert({ login,password });
                        cout << "Zarejestrowano\n";

                    }
                    else
                        cout << "Blad\n";
                }



            }
        }
        else if (command == "login")
        {
            cin >> x;
            while (x--)
            {
                cin >> login >> password;
                transform(login.begin(), login.end(), login.begin(), ::tolower);
                if (Login_Database.find(login) == Login_Database.end())
                    cout << "Konto nie istnieje\n";

                else
                {
                    if (User_Database.find({ login,password }) != User_Database.end())
                        cout << "Zalogowano\n";
                    else cout << "Zle haslo\n";
                }



            }
        }
    }

    return 0;
}
