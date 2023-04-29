#include<iostream>
#define INT_MAX +2147483647;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int min = INT_MAX;
    int m;
    bool hmm = false;
    int steps=0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < min){
            min = a[i];
        }
    }
    m=min;
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    while(true)
    {

        for(int i = 0; i < n; i++)
        {
            while(a[i] > min)
            {
                a[i] -= b[i];

                steps++;

                if(a[i] < 0)
                {
                    hmm = true;

                    break;

                }
            }

            if(hmm)

                break;

            if(a[i] < min)
            {
                min = a[i];
            }
        }

        if(m==min)

            break;

        else

            m=min;

    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i-1])

            hmm = true;
    }

    if(hmm)
        cout << "-1";

    else
        cout << steps;
}
