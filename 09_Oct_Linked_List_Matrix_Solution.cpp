#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right, *down;

    Node(int x)
    {
        data = x;
        right = NULL;
        down = NULL;
    }
};

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution
{
public:
    Node *constructLinkedMatrix(vector<vector<int>> &mat)
    {
        // code Here
        Node *row = NULL, *head = new Node(0);
        Node *col = head;
        for (int i = 0; i < mat.size(); i++)
        {
            Node *start;
            for (int j = 0; j < mat.size(); j++)
            {
                Node *cur = new Node(mat[i][j]);
                if (j == 0)
                    start = cur;
                if (row)
                {
                    row->down = cur;
                    row = row->right;
                }
                if (col)
                {
                    col->right = cur;
                }
                col = cur;
            }
            row = start;
            col = NULL;
        }
        return head->right;
    }
};

int main()
{
    return 0;
}