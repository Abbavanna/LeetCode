#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> target_indices;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums.at(i) + nums.at(j) == target)
                {
                    target_indices.push_back(i);
                    target_indices.push_back(j);
                    break;
                }
            }
        }

        return target_indices;
    }
};
void print(vector<int> const &a)
{
    std::cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

int main()
{
    vector<int> a{1, 2, 3, 4, 5};

    Solution s;
    print(s.twoSum(a, 8));

    cout << "DONE" << endl;
}