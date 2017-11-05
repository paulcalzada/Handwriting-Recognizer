#include <fstream>
#include <vector>
#include <iostream>
#include <Eigen/Dense>
#include "nnimage.h"

using namespace std;
using namespace Eigen;
/* Helper library
 */
class mnist_loader {
public:
    static vector<nnimage> load(string fname, int num) {
        cout << "OK WE STARTED" << endl;
        ifstream imgs("Data/t10k-images-idx3-ubyte", ios::binary);
        ifstream imgs("Data/t10k-labels-idx1-ubyte", ios::binary);

        vector<nnimage> images;

        int checksum = 0;
        int image_count = 0;
        int image_width = 0;
        int image_height = 0;
        
        imgs.read((char*)&checksum, sizeof(checksum));
        imgs.read((char*)&image_count, sizeof(image_count));
        imgs.read((char*)&image_width, sizeof(image_width));
        imgs.read((char*)&image_height, sizeof(image_height));

        for (int i = 0; i < num; i++) {
            MatrixXd data(784, 1);
            
            for (int j = 0; j < 784; j++) {
                unsigned char c = 0;
                imgs.read((char*)&c, sizeof(c));
                data(j, 0) = double(c);
            }
            nnimage nnimg(data);
            images.push_back(nnimg);
        }

        imgs.close();
        
        return images;
    }
};
