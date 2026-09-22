#include <iostream>
using namespace std;
class Node{
    int data;
    int *next;
};
int main(){
    Node *n1;
    cout << "Size of Node: " << sizeof(n1) << endl;
    return 0;
}
