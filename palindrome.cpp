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
        if (x < 0 || (x % 10 == 0) && x != 0)
        {
            cout << "Please check the entered number" << endl;
            return false;
        }

        while (x > 0)
        {
            num = num * 10 + (x % 10);
            x = x / 10;
        }

        return y == num || y == num / 10;
    }
};

int main()
{

    int x = 564;
    Solution s;
    bool c = s.isPalindrome(x);
    cout << c;
}