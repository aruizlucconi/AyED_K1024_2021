#include <iostream>

using namespace std;

int main()
{
    float m1,m2,b1,b2,x,y;
    cout << "Ingrese pendiente y ordenada al origen de la primer recta" << endl;
    cout << "m1:" ;
    cin >> m1;
    cout << "b1:" ;
    cin >> b1;

    cout << "Ingrese pendiente y ordenada al origen de la segunda recta" << endl;
    cout << "m2:" ;
    cin >> m2;
    cout << "b2:" ;
    cin >> b2;

    if (m1==m2)
        {
            cout << "Las rectas no se intersectan, son paralelas" << endl;
        }
    else
    {
        x= (b2-b1)/(m1-m2);
        y= m1*x+b1;
        cout<< "Las rectas intersectan en el punto (" << x <<" ; " << y <<")"<< endl;
    }


    return 0;
}
