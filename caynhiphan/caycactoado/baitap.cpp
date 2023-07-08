#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;

    Point(int x, int y) : x(x), y(y) {}
};

struct Node {
    Point point;
    Node* left;
    Node* right;

    Node(Point point) : point(point), left(nullptr), right(nullptr) {}
};

bool isPointEqual(const Point& p1, const Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

bool isPointInFirstQuadrant(const Point& point) {
    return point.x >= 0 && point.y >= 0;
}

bool isPointInSecondQuadrant(const Point& point) {
    return point.x < 0 && point.y >= 0;
}

bool isPointInThirdQuadrant(const Point& point) {
    return point.x < 0 && point.y < 0;
}

bool isPointInFourthQuadrant(const Point& point) {
    return point.x >= 0 && point.y < 0;
}

bool isPointInBorderOfQuadrants(const Point& point) {
    return (point.x == 0 && point.y > 0) || (point.x > 0 && point.y == 0);
}

bool comparePoints(const Point& p1, const Point& p2) {
    if (isPointInFirstQuadrant(p1) && isPointInFirstQuadrant(p2)) {
        if (p1.x == p2.x) {
            return p1.y < p2.y;
        } else {
            return p1.x < p2.x;
        }
    } else if (isPointInFirstQuadrant(p1) && isPointInSecondQuadrant(p2)) {
        return true;
    } else if (isPointInSecondQuadrant(p1) && isPointInSecondQuadrant(p2)) {
        if (p1.y == p2.y) {
            return p1.x > p2.x;
        } else {
            return p1.y < p2.y;
        }
    } else if (isPointInSecondQuadrant(p1) && isPointInThirdQuadrant(p2)) {
        return true;
    } else if (isPointInThirdQuadrant(p1) && isPointInThirdQuadrant(p2)) {
        if (p1.x == p2.x) {
            return p1.y > p2.y;
        } else {
            return p1.x > p2.x;
        }
    } else if (isPointInThirdQuadrant(p1) && isPointInFourthQuadrant(p2)) {
        return true;
    } else if (isPointInFourthQuadrant(p1) && isPointInFourthQuadrant(p2)) {
        if (p1.y == p2.y) {
            return p1.x < p2.x;
        } else {
            return p1.y > p2.y;
        }
    } else if (isPointInFourthQuadrant(p1) && isPointInFirstQuadrant(p2)) {
        return true;
    } else if (isPointInBorderOfQuadrants(p1) && isPointInFirstQuadrant(p2)) {
        return true;
    } else {
        return false;
    }
}

Node* insert(Node* root, Point point) {
    if (root == nullptr) {
        return new Node(point);
    }

    if (isPointEqual(root->point, point)) {
        return root;
    }

    if (isPointInFirstQuadrant(point)) {
        if (isPointInFirstQuadrant(root->point) || isPointInBorderOfQuadrants(root->point)) {
            root->left = insert(root->left, point);
        } else {
            root->right = insert(root->right, point);
        }
    } else if (isPointInSecondQuadrant(point)) {
        if (isPointInSecondQuadrant(root->point)) {
            root->right = insert(root->right, point);
        } else {
            root->left = insert(root->left, point);
        }
    } else if (isPointInThirdQuadrant(point) || isPointInFourthQuadrant(point)) {
        root->left = insert(root->left, point);
    }

    return root;
}

int getHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << "(" << root->point.x << ", " << root->point.y << ") ";

    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    vector<Point> points;

    while (true) {
        int x, y;
        cin >> x >> y;

        if (x == 0|| y == 0) {
            break;
        }

        Point point(x, y);
        points.push_back(point);
    }

    sort(points.begin(), points.end(), comparePoints);

    Node* root = nullptr;

    for (const auto& point : points) {
        root = insert(root, point);
    }

    int height = getHeight(root);

    cout << height << endl;
    preorderTraversal(root);
    cout << endl;

    return 0;
}
