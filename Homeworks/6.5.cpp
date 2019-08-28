#include <iostream>
#include <fstream>
#include <string>
int main(){
    std::string line;
    std::ifstream count("count.txt");
    std::ofstream out("out.txt");
    int i=0,lineNumber=0;
    while (getline(count,line)){
        ++lineNumber;
        out<<line<<std::endl;
        if (lineNumber==10) out<<"this is the inserted line"<<std::endl;
    }
    count.close();
    out.close();
    return 0;
}