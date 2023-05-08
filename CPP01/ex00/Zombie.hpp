#include <iostream>
using std::string;
using std::cout;

class Zombie
{
    private:
        string name;
    void announce(void)
    {
        cout << name;
        cout << ": BraiiiiiiinnnzzzZ. . ."
    }
}