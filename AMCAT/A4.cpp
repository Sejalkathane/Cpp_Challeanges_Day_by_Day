#include<bits/stdc++.h>
using namespace std;

// print the trapezium pattern.
// for example , we have num=4
// the output should be like
// 1*2*3*4*17*18*19*20
// - -5*6*7*14*15*16
// - - - -8*9*12*13
// - - - - - -10*11


int main()
{
    // int n=5;
    // for(int i=1;i<n;i++)
    // {
    //     for(int j=1;j<n;j++)
    //     {
            
    //         cout<<j<<"*";
            
    //     }
    //     cout<<endl;
    // }
    
    vector<char>p={'S','d','h','a','j','m','e','k'};

    int count = 0;


    string v = "aeiouAEIOU"; // Vowel characters

    for (char ch : p) {
        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if the character is not a vowel
            if (v.find(ch) == string::npos) {
                count++;
            }
        }
    }

    cout<< count;
}


