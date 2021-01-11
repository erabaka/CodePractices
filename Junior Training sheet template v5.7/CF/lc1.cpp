#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* r;
struct Node* l;
};
struct Node* nn(int data)
{
    Node* n = new Node;
    n->data = data;
    n->l =NULL;
    n->r=NULL;

    return(n);
}
void mirror(struct Node* n)
{
    if(n==NULL)
    {
        return;
    }
    else
    {
        struct Node* temp;

        mirror(n->l);
        mirror(n->r);

        temp=n->l;
        n->l=n->r;
        n->r=temp;
    }
}
void printing(struct Node* n)
{
    if(n==NULL)
    {
        return;
    }
    printing(n->l);
    cout<<n->data<<" ";
    printing(n->r);
}

int main()
{
    struct Node* root= nn(1);
    root->l=nn(2);
    root->r=nn(6);
    root->l->l=nn(4);
    root->l->r=nn(7);
    root->r->l=nn(3);
    root->r->r=nn(9);
    printing(root);
    mirror(root);
    cout<<endl;
    printing(root);
    return 0;
}
