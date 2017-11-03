#include <Eigen/Dense>
#include <string>
#include <iostream>
#include <vector>

using namespace Eigen;
using namespace std;

class nn {
    // stores the layers of the network as Eigen matrices
    vector<MatrixXd> net;
    vector<int> size;

public:
    /* 
     * Construct a new Neural Network
     * @arg size: a vector containing the number of neurons in each layer
     */
    nn(vector<int> size) {
        this->size = size;
        vector<int>::iterator it = size.begin();

        int last = *it;
        ++it;
        for (; it != size.end(); ++it) {
            MatrixXd m = MatrixXd::Random(*it, last);
            net.push_back(m);
            last = *it;
        }
    }

    /*
     * Runs a Eigen vector through the network
     */
    MatrixXd& apply(MatrixXd& vec) {
        // check for size error
        if ( vec.size() != size.at(0) )
            throw "Incorrect size of input vector, cannot be multiplied";
        vector<MatrixXd>::iterator it = net.begin();
        for (; it != net.end(); ++it) {
            vec = *it * vec;
        }
        return vec;
    }

    void print() {
        cout << "Network: " << endl;
        for (vector<MatrixXd>::iterator it = net.begin(); it != net.end(); ++it) {
            cout << *it << endl << endl;
        }
        cout << endl;
    }

    vector<int> get_size() {
        vector<int> size_copy = size; // = is overloaded by vector class
        return size_copy;
    }

};
