#include <iostream>
using namespace std;

// Äá»nh nghÄ©a má»t nÃºt trong cÃ¢y nhá» phÃ¢n
struct Node {
    int data;
    Node* left;
    Node* right;
};

// HÃ m táº¡o má»t nÃºt má»i vá»i giÃ¡ trá» x
Node* createNode(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// HÃ m chÃ¨n má»t giÃ¡ trá» vÃ o cÃ¢y nhá» phÃ¢n
Node* insertNode(Node* root, int x) {
    if (root == NULL) {
        return createNode(x);
    } else if (x < root->data) {
        root->left = insertNode(root->left, x);
    } else if (x > root->data) {
        root->right = insertNode(root->right, x);
    }
    return root;
}

// HÃ m kiá»m tra xem má»t giÃ¡ trá» cÃ³ tá»n táº¡i trong cÃ¢y nhá» phÃ¢n hay khÃ´ng
bool searchNode(Node* root, int x) {
    if (root == NULL) {
        return false;
    } else if (x == root->data) {
        return true;
    } else if (x < root->data) {
        return searchNode(root->left, x);
    } else if (x > root->data) {
        return searchNode(root->right, x);
    }
    return false;
}

int main() {
    Node* root = NULL;

    int a, b;
    cin >> a >> b;

    while (a != 0) {
        if (a == 1) {
            // Game thá»§ ÄÄng nháº­p vÃ o há» thá»ng
            root = insertNode(root, b);
        } else if (a == 2) {
            // Kiá»m tra game thá»§ online
            if (searchNode(root, b)) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
        cin >> a >> b;
    }

    return 0;
}