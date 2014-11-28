/** Se citește de la tastatură un vector care conține maxim 20 de numere întregi.
Realizați programul C++ care afișează suma elementelor negative din vectorul dat.  **/

#include <iostream>
#define dmax 20
using namespace std;

void citireVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cin >> v[i];
}

int sumaNegative(int v[], int k, int p)
{
    int c1, c2;
    if(k == p)
        if(v[k] < 0)
            return v[k];
        else return 0;
    else
    {
        c1 = sumaNegative(v, k, (k+p)/2);
        c2 = sumaNegative(v, (k+p)/2+1, p);
        return c1+c2;
    }
}

int main()
{
    int v[dmax], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << sumaNegative(v, 0, n-1);
    return 0;
}
