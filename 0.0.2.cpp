#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    int n, l , k , h;
    string str, o, p;
    getline(cin, o);

    istringstream stream(o);
    if (!(stream >> n))
    {
        cout << "An error has occuried while reading input data.";
        return 0;
    }

    getline(cin, str);
    istringstream stream1(str);

    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {

        if (!(stream1 >> array[i]))
        {

            cout << "An error has occuried while reading input data.";

            return 0;
        }
    }

    getline(cin, p);

    istringstream stream2(p);

    if (!(stream2 >> l))
    {

        cout << "An error has occuried while reading input data.";

        return 0;
    }

    for ( int i = l; i < n / 2 + l - 1; i++)
    {
        swap( array[i], array[n - k - 1]);
        k++;
    }

    for ( int j = 0; j < l / 2 ; j++)
    {
        swap(array[j], array[l - h - 1]);
        h++;
    }

    for ( int y = 0; y < n / 2 ; y++)
    {
        swap(array[y], array[n - y - 1]);
    }



    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }

    return 0;
}