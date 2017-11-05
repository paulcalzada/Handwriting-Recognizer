#include <Eigen/Dense>
#include <vector>

using namespace Eigen;
using namespace std;

/*
 * Stores an image and its value for the nn class
 */
struct nnimage {

  int value;
  MatrixXd data;
  
  nnimage(MatrixXd& data) : data(data) {}
  nnimage(MatrixXd& data,  int value) : data(data), value(value) {}
};
