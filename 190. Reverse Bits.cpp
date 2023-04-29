#include <bits/stdc++.h>

using namespace std;

// function to reverse bits of a number
unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
  for(int i=0;i<32;i++)
    {
        rev <<= 1;
        if (n & 1){
          rev++;}
        n >>= 1;

    }
    return rev;
}

// Driver program to test above
int main()
{
    unsigned int n = 11;
    cout << reverseBits(n);
    return 0;
}
