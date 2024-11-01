#include "Matrix.h"

int main(){
    Vector<int> arr(5, 0);
    Vector<int> arr2(arr);
    cout << arr << endl << arr2 << endl;
    Vector<int> arr3(move(arr));
    cout << arr3;
    return 0;
}