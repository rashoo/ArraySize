#include <iostream>
using namespace std;

int main() {

    int values[] = {1, 2, 3, 4};

    cout << "The amount of bytes used: " << sizeof(values) << endl;
    cout << "The number of each element size is: "<< sizeof(int) << endl;
    cout << "The array contains: ";
    /*
     * Total bytes in array / number of elements -> Length of array
     */
    for(int i=0; i<sizeof(values)/sizeof(int); i++){
        cout << values[i] << " ";
    }

    return 0;
}
