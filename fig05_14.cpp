#include <iostream>

using namespace std;

int main()
{
    for ( unsigned int cuenta = 1; cuenta <= 10; cuenta++)
    {
        if ( cuenta == 6 )
            continue;
        
        cout << cuenta << " ";
        
    }
}