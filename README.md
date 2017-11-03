# Digit Recognizer
#### Compiling
You need to include Eigen library with `-I /path/to/Eigen/`.
The way I have the repository set up Eigen is located in the top-level directory.
So you need to put `-I ./` to include Eigen.
i.e.,
`g++ -o nn.o nn.cpp -std=c++11 -I ./`
#### The Plan
https://github.com/garyg1/Handwriting-Recognizer/wiki/The-Plan
