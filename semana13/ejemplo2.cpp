#include<fstream>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    int i=0;
    while(!source.eof()){
        int x;
        destination<<source;
    }
    
    source.close();

    
    
    return 0;
}