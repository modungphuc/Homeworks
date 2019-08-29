#include <iostream>
#include <fstream>
using namespace std;

int main () {
    std::ifstream file("sinhVien.txt");
    streampos begin,end;
    begin=file.tellg();
    file.seekg(0,ios::end);
    end=file.tellg();
    std::cout<<(end-begin)<<" Bytes"<<std::endl;
    file.close();
    return 0;
}