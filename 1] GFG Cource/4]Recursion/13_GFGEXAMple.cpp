
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(string &s, int start,int end)
    {

        if (start >= end)
        {

            return 1;
        }

        if (s[start] != s[end])
        {

            return 0;
        }

        return  helper(s,start+1,end-1);
    }

    int isPalindrome(string &S)
    {
        // Your code goes here

        int start = 0;

        int end = S.length() - 1;

        return helper(S, start, end);
    }
};
int main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    // int length=s.length();
    // // cout<<length<<endl;
    //  int start=0;
    //  int end=length-1;

    // int fun=ispalindrome(s,start,end);
    // cout<<fun<<endl;
    Solution ob;

    cout << ob.isPalindrome(s) << endl;

    return 0;
}
