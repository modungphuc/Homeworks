#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
typedef struct {
    char MSSV[10];
    std::string name;
} Sinhvien;

int main(){
    Sinhvien bachKhoa[2];
    int i=0;
    std::string line;
    std::ifstream SV("sinhVien.txt");
    while (getline(SV,line)) {
        std::istringstream iss(line);
        iss>>bachKhoa[i].MSSV>>bachKhoa[i].name;
        ++i;
    }
    std::cout<<bachKhoa[1].MSSV<<std::endl;
    SV.close();
    return 0;
}