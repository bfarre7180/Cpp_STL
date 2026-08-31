### Installation
git clone https://github.com/bfarre7180/Cpp_STL.git
cd Cpp_STL

cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
