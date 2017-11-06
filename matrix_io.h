#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

/*
 * Library that that converts between Eigen matrices and csv files.
 */
class matrix_io {
public:
    /*
     * Saves a matrix in a csv file.
     * Line 1: number of rows
     * Line 2: number of columns
     * Line 3: The matrix entries, separated by commas
     */
    static void save(MatrixXd m, string fname) {
        ofstream out;
        out.open(fname);
        int rows = m.rows();
        int cols = m.cols();

        out << rows << endl << cols << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                out << m(i, j) << ',';
            }
        }
    }

    /*
     * Loads a matrix stored in a csv file 
     * File must be in format specified in save() method
     * Returns an Eigen matrix.
     */
    static MatrixXd load(string fname) {
        ifstream in;
        in.open(fname);

        // fetch matrix size from first line;
        string line;
        getline(in, line);
        int rows = atoi(line.c_str());
        getline(in, line);
        int cols = atoi(line.c_str());
        // cout << rows << cols;

        MatrixXd m(rows, cols);

        for (int i = 0 ; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                getline(in, line, ',');
                m(i, j) = atof(line.c_str());
            }
        }
        return m;
    }

};
