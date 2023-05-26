#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
    }
}

//another approach
void printLevelOrder2(Node *root)
{
    // Base Case
    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);
    int level = 0;

    while (q.empty() == false)
    {
        int size = q.size();
        cout << "Level:" << level << "->";
        while (size-- > 0)
        {
            Node *node = q.front();
            cout << node->data << " ";
            q.pop();

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        }
        cout << endl;
        level++;
    }
}

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}
