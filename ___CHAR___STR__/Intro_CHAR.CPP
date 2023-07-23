#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s="Sejal";
    // string s = "xyz";

    // // move char one step ahead

    // // code xyz move k=4 bcd
    // int k = 5;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     s[i] = 'a' + (s[i] - 'a' + k) % 26; // imp
    // }
    // // s[i]-'a' will give usvalue between 0 to 25 ten add k
    // //  % will help us to give value between 0 25 then add in a to get small alphabet value
    // cout << s;
    // return 0;

    string s="EeOe";
    sort(s.begin(),s.end());
    cout<<s;
}

// Certainly! Let's break down the line `c = 'a' + (c - 'a' + shift) % 26;` step by step:

// 1. `(c - 'a' + shift)`: This expression calculates the relative position of the character `c` within the range 'a' to 'z' (0 to 25). Here's what each component does:

//    - `c - 'a'`: It subtracts the ASCII value of 'a' from the ASCII value of `c`. This operation maps the characters 'a' to 'z' to the range 0 to 25.

//    - `+ shift`: It adds the desired shift value. In this case, it's 1, which means we want to shift the characters by one position.

//    - The result of `(c - 'a' + shift)` gives us a new relative position of the character `c` after applying the shift.

// 2. `(c - 'a' + shift) % 26`: This expression takes the calculated relative position from step 1 and performs modulo 26 operation. The modulo operator `%` ensures that the result remains within the range 0 to 25. This is important because it allows the shift to wrap around if it exceeds the range.

// 3. `'a' + (c - 'a' + shift) % 26`: Finally, we add the result of the modulo operation from step 2 to the ASCII value of 'a'. This effectively converts the relative position back to the corresponding ASCII value within the range 'a' to 'z'.

// 4. `c = 'a' + (c - 'a' + shift) % 26;`: This assigns the new shifted character value back to `c`. The original value of `c` is replaced with the shifted character value.

// Overall, the line `c = 'a' + (c - 'a' + shift) % 26;` is responsible for shifting a character `c` by the specified amount (`shift`) within the range 'a' to 'z'.

// ..............
// Dry run ::

// ASCII:
//  'x': 120
//  'y': 121
//  'z': 122

// Apologies for the previous confusion. Let's correct the explanation for shifting the characters 'x', 'y', and 'z' by a shift value of 3.

// Input: "xyz"
// Shift: 3

// Shifting each character by 3 positions in the range 'a' to 'z' would result in the following:

// 1. Character: 'x'
//    - 'x' - 'a' + 3 = 23 - 0 + 3 = 26 % 26 = 0
//    - Converted to ASCII: 'a' + 0 = 'a'

// 2. Character: 'y'
//    - 'y' - 'a' + 3 = 24 - 0 + 3 = 27 % 26 = 1
//    - Converted to ASCII: 'a' + 1 = 'b'

// 3. Character: 'z'
//    - 'z' - 'a' + 3 = 25 - 0 + 3 = 28 % 26 = 2
//    - Converted to ASCII: 'a' + 2 = 'c'

// After applying the shift, the resulting string would be "abc". Therefore, when the input is "xyz" and the shift value is 3, the output would be "abc".