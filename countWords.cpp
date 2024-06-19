#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    bool inWord = false;

    string S;
    getline(cin,S);

    for(char c: S)
    {
        if(isalpha(c))
        {
            if(!inWord)
            {
                inWord = true;
                count ++;
            }else{
                inWord = false;
            }
        }

        // if(S[i] == ' ' || S[i] == '?' || S[i] == '!' || S[i] == '.')
        // {
        //     cout << endl;
        // }else{
        //     cout << S[i];
        // }
    }
    cout << count;
    return 0;
}