#include "nn.h"
#include <Eigen/Dense>
#include <iostream>
#include <vector>

using namespace std;
using namespace Eigen;

int main() {
    const int input_size = 5;
    const int output_size = 4;


    // construct a vector containing the size of each layer
    static const int arr[] = {input_size, 3, 10, 5, output_size};
    // turn arr into a vector
    vector<int> nnsize (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    nn n(nnsize);
    MatrixXd vec = MatrixXd::Random(input_size, 1);
    n.print();

    cout << "v = " << endl;
    cout << vec << endl << endl;
    cout << "Nv = " << endl;
    vec = n.apply(vec);
    cout << vec << endl;
}
