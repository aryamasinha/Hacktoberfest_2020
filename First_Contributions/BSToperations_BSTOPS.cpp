#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
struct Node
{
    int data;
    int pos;
    Node *left;
    Node *right;
};
struct Node *newNode(int val, int position)
{
    Node *temp = new Node;
    temp->data = val;
    temp->pos = position;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct Node *insert(Node *root, int key, int position)
{
    if (root == NULL)
    {
        Node *temp = newNode(key, position);
        cout << temp->pos << "\n";
        return temp;
    }
    else if (root->data < key)
    {
        root->right = insert(root->right, key, 2 * position + 1);
    }
    else
    {
        root->left = insert(root->left, key, 2 * position);
    }
    return root;
}
struct Node *deleteNode(Node *root, int key)
{
    static int flag;
    if (root)
    {
        if (root->data > key)
            root->left = deleteNode(root->left, key);
        else if (root->data < key)
            root->right = deleteNode(root->right, key);
        else
        {
            Node *temp;
            if (root->left && root->right)
            {
                cout << root->pos << "\n";
                flag = 5;
                temp = root->right;
                while (temp->left)
                    temp = temp->left;
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
            else
            {
                if (flag != 5)
                    cout << root->pos << "\n";
                else
                    flag = 3;
                if (root->left)
                    temp = root->left;
                else
                    temp = root->right;
                free(root);
                return temp;
            }
        }
    }
    return root;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = NULL;
    ll t;
    cin >> t;
    while (t--)
    {
        char c;
        int key;
        cin >> c >> key;
        if (c == 'i')
            root = insert(root, key, 1);
        else
            root = deleteNode(root, key);
    }
    return 0;
}