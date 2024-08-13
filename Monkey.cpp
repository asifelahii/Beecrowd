
// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     //first input
//         char a[100001];
//         fgets(a, 100001, stdin);

//         char b[100001];
//         fgets(b, 100001, stdin);

//     //Second input
//         int size1 = strlen(a);
//         sort(a, a + size1);

//         int size2 = strlen(b);
//         sort(b, b + size2);


//     for (int i = 0; i < size1; i++) 
//     {
//         if (a[i] != ' ' && a[i] != '\n') 
//         {
//             cout << a[i];
//         }
//     }

//     cout << endl;

//     for (int i = 0; i < size2; i++) 
//     {
//         if (b[i] != ' ' && a[i] != '\n') 
//         {
//             cout << b[i];
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
            if (s[i] != ' ')
                cout << s[i];
        cout << '\n';
    }
    return 0;
}