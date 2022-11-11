#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> r = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int len = s.size();
        int target = r[s.back()];

        for (int i = len - 2; i >= 0; i--)
        {
            if (r[s[i]] < r[s[i + 1]])
            {
                target -= r[s[i]];
            }
            else
            {
                target += r[s[i]];
            }
        }
        return target;
    }
};

int main()
{

    Solution s1;
    cout << s1.romanToInt("LVIIII");
}