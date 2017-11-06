#include "matrix_io.h"
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main() {
    MatrixXd m = MatrixXd::Random(30, 30);
    matrix_io::save(m, "test.csv");

    cout << matrix_io::load("test.csv");
}
