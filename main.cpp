#include "tree.h"

using namespace std;

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int temp[9];
    int newroot;
    adrNode root = NULL;
    cout<<"======================================================"<<endl;
    for(int i = 0; i<9; i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    int n = sizeof(x) / sizeof(x[0]);
    copy(x, x+n, temp);
    sort(temp, temp + n);

    newroot = temp[(n/2)-1];

    inserNode_1301213048(root, newNode_1301213048(newroot));
    for(int i = 1;i<n;i++){
        inserNode_1301213048(root, newNode_1301213048(x[i]));
    }
    cout<<"Pre order\t: ";
    printPreOrder_1301213048(root);
    cout<<"\nSum of BTS info\t : "<<sumNode_1301213048(root)<<endl;
    cout<<"Number of Leaves\t : "<<countLeaves_1301213048(root)<<endl;
    cout<<"Height of Tree\t : "<<heightTree_1301213048(root);
    cout<<"\n======================================================"<<endl;

    return 0;

}
