#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isPossible(vector<vector<int>> paths)
    {
        // Code here
        for (auto row : paths)
        {
            int count = 0;
            for (auto cell : row)
            {
                if (cell)
                    count++;
            }
            if (count % 2)
                return 0;
        }
        return 1;
    }
};