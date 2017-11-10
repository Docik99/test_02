#include <iostream>
#include <sstream>

using namespace std;

bool rn(int & n, int * array)
{
    string string;
    getline(cin, string);
    istringstream stream(string);
    bool such = true;
    for (int i = 0; i < n; ++i)
    {
        if (!(stream >> array[i]))
        {
            such = false;
            break;
        }
    }
    return such;
}

int main()
{
    int n , c = 0;
    int * array = new int [n];
    string str;
    getline(cin, str);
    istringstream stream(str);

    if (stream >> n)
    {
        if (rn(n, array))
        {
            for (int i = 0; i < n/2; i++)
            {
                swap (array[i] , array[n - 1 - i]);

            }

            for (int i = 0; i < n; i++)
            {
                cout << array[i] << " ";
            }
        }
        else
        {
            c = 1;
            cout << "An error has occured while reading input data.";
        }
    }
    if ((c != 1) && (n < 0)) cout << "An error has occured while reading input data.";

    delete []array;
    return 0;
}