//******PALINDROME*******//
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {

        // Basic idea is to store the modulus to new int and check the reversal
        // example 212
        int num = 0;
        int y = x; //(storing the actual number to dummy varaible)
        while (x > 0)
        {
            num *= 10;       // multiplying with 10 (0)
            num += (x % 10); // 0 + (212%10) = 12
            x /= 10;         // 212/10 = 2
        }

        if (num == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    int x = 222;
    Solution s;
    bool c = s.isPalindrome(x);
    cout << c;
}