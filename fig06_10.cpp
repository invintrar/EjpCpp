#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time( 0 )));

    for ( unsigned int contador = 1; contador <= 10; ++contador )
    {
        cout << setw ( 10 ) << ( 1 + rand() % 6);

        if ( contador % 5 == 0)
            cout << endl;
    }
}
