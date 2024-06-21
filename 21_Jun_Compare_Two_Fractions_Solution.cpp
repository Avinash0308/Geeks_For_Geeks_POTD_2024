#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        // Convert the input numbers from strings to vectors of integers
        vector<int> vec1(num1.size());
        for (int i = 0; i < num1.size(); i++)
        {
            vec1[i] = num1[num1.size() - i - 1] - '0';
        }
        vector<int> vec2(num2.size());
        for (int i = 0; i < num2.size(); i++)
        {
            vec2[i] = num2[num2.size() - i - 1] - '0';
        }

        // Initialize the result vector with zeros
        vector<int> result(vec1.size() + vec2.size());

        // Multiply each digit in vec2 with vec1 and add the result to the appropriate position in the result vector
        for (int i = 0; i < vec2.size(); i++)
        {
            int carry = 0;
            for (int j = 0; j < vec1.size(); j++)
            {
                int product = vec1[j] * vec2[i] + carry + result[i + j];
                carry = product / 10;
                result[i + j] = product % 10;
            }
            result[i + vec1.size()] = carry;
        }

        // Remove leading zeros from the result vector and convert it back to a string
        while (result.size() > 1 && result.back() == 0)
        {
            result.pop_back();
        }
        string str(result.size(), '0');
        for (int i = 0; i < result.size(); i++)
        {
            str[result.size() - i - 1] = result[i] + '0';
        }
        return str;
    }
    string compareFrac(string str)
    {

        // Code here
        string a, b, c, d;
        int n = str.size(), i = 0;
        while (str[i] != '/')
        {
            a.push_back(str[i]);
            i++;
        }
        i++;
        while (str[i] != ',')
        {
            b.push_back(str[i]);
            i++;
        }
        i += 2;
        while (str[i] != '/')
        {
            c.push_back(str[i]);
            i++;
        }
        i++;
        while (i < n)
        {
            d.push_back(str[i]);
            i++;
        }
        string x = multiply(a, d);
        string y = multiply(b, c);
        if (x == y)
            return "equal";
        if (x.size() == y.size())
        {
            if (x > y)
                return a + "/" + b;
            else
                return c + "/" + d;
        }
        else if (x.size() > y.size())
            return a + "/" + b;
        else
            return c + "/" + d;
    }
};

int main()
{
    return 0;
}