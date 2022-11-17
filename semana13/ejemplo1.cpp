#include<fstream>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    int sum=0;
    int i=0;
    while(!source.eof()){
        int x;
        source>>x;
        sum=sum+x;
        i++;
    }
    
    source.close();

    destination<<sum/i;
    
    return 0;
}