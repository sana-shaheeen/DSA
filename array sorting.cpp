#include <iostream>
using namespace std;

int main() {
    bool check= false;
    int array[7] = {7,3,4,2,6,5,1};

    cout<< "Before Sorting:\n";
    for (int i : array) {
        cout<<i<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 7; ++i) {
        for (int j = 1; j < 7-i ; ++j) {
            if (array[j] < array[j-1] ){
                int temp = array[j];
                array[j]= array[j-1];
                array[j-1] = temp;
                check = true;
            }
        }
        if (!check){
            break;
        }
    }

    cout<<"\nAfter Sorting.\n";
    for (int i : array) {
        cout<<i<<" ";
    }

    return 0;
}
