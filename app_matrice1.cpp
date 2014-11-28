/** Sa se afiseze elementele dintr-o matrice n * n care au proprietatea ca
sunt egale cu produsul celorlalte elemente de pe aceeasi coloana **/

#include <iostream>
#define dmax 10
using namespace std;

void citireMatrice(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];
}

void afisareMatrice(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int produsColoana(int a[][dmax], int n, int c)
{
    int i, p = 1;
    for(i = 0; i < n; i++)
        p *= a[i][c];
    return p;
}

void afisareElemente(int a[][dmax], int n)
{
    int i, j, p;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            p = produsColoana(a, n, j) / a[i][j];
            if(a[i][j] == p)
                cout << a[i][j] << "  ";
        }

}

int main()
{
    int a[dmax][dmax], n;
    cout << "n = "; cin >> n;
    citireMatrice(a, n);
    cout << endl;
    afisareMatrice(a, n);
    cout << endl;
    afisareElemente(a, n);
    return 0;
}
