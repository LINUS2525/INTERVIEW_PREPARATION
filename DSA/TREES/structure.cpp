#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node (int k) {
        key=k;
        left=NULL;
        right=NULL;
    }
};

int main() {
    Node *root=new Node(3);
    cout<<(root->key)<<endl;
    return 0;
}