#include <iostream>

using namespace std;

int main()
{
int x = 21;
bool m = true;


while (x > 0){
    int y;
    cout << "player1: " << endl;
    cin >> y ;

    while(y > 3){
        cout << "INVALID NUMBER , TRY ANOTHER ONE " << endl;
        cout << "player 1: " << endl;
        cin >> y;
    }
    m = true;
    x = x - y;
    cout << x << endl;
    if ( x <= 0 )
            break;
    int z;
    cout << "player 2: " << endl;
    cin >> z ;
    while (z > 3){
            cout << "INVALID NUMBER , TRY ANOTHER ONE " << endl;
            cout << "player 2 :" << endl;
            cin >> z;
    }
    m = false;
    x = x-z;
    cout << x << endl;
}
if ( m == true)
    cout << "player 2 win" << endl;

else
    cout << "player 1 wins" << endl;



}
