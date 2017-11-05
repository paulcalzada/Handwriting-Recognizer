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
  vector<int> size;
  
  nnimage(MatrixXd& data, vector<int> size) : data(data), size(size) {}  
  nnimage(MatrixXd& data, vector<int> size, int value) : data(data), size(size), value(value) {}
}
