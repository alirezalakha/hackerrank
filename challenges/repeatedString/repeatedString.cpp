#include <iostream>

using namespace std;


// The repeatedString function below, is based on a math calculation
long repeatedString(string s, long n)
{
    
}



// The repeatedString function below, did not performed really good. O(n) notation ~really poor

long repeatedStringDelayed(string s, long n) 
{
    long counter=0;
    long i=0;

    if (s.size() == 1)
    {
        if (s[0] != 97)
        {
            return 0;
        }

        else
        {
            return n;
        }
    }

    if (s.find('a') != std::string::npos)
    {
        while (i<n)
        {
            for (auto ch: s)
            {
                if (i == n)
                {
                    break;
                }

                if (ch == 97)
                    counter++;
                i++;
            }
        }
        return counter;
    } else 
    {
        return 0;
    }

}

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}