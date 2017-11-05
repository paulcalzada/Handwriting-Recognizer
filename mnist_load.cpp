#include "mnist_load.h"
#include <iostream>
#include <vector>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main() {
    vector<nnimage> imgs = mnist_loader::load("Data/t10k-images-idx3-ubyte", 5);
    for (vector<nnimage>::iterator it = imgs.begin(); it != imgs.end(); ++it) {
        cout << (*it).data.transpose() << endl << endl;
    }
}
