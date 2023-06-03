#include <iostream>
#include <fstream>

using namespace std;

void process(string fileName)   {
    // TODO
    int row, col;
    
    ifstream ifs(fileName);
    
    ifs >> row; ifs >> col;
    
    double maxAll;
    ifs >> maxAll;
    double maxRow1 = maxAll;
    double hold1;
    for(int j = 1; j < col; j++){
        ifs >> hold1;
        if(hold1 > maxRow1) maxRow1 = hold1;
    }
    cout << maxRow1 << " ";
    if(maxRow1 > maxAll) maxAll = maxRow1;
    
    for(int i = 1; i < row; i++){
        double maxRow;
        ifs >> maxRow;
        double hold;
        for(int j = 1; j < col; j++){
            ifs >> hold;
            if(hold > maxRow) maxRow = hold;
        }
        cout << maxRow << " ";
        if(maxRow > maxAll) maxAll = maxRow;
    }
    
    cout << maxAll;
}

int main(){

    return 0;
}