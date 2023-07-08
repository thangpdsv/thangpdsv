#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Hàm tạo một nút mới trong cây
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        // cout << "Khong du bo nho.";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Hàm thêm một số vào cây
Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    return root;
}

// Hàm tính chiều cao của cây
int getHeight(Node* root) {
    if (root == NULL)
        return -1;
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
      std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
    Node* root = NULL;
    int num;
    // Đọc dãy số từ người dùng
    while (true) {
        cin >> num;
        // cout << num << " ";
        if (num == 0)
            break;
        root = insertNode(root, num);
    }
    
    int height = getHeight(root);
    cout << height+1<<endl;
    // printTree(root);
    return 0;
}