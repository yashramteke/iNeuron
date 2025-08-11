/*Q7. There are 50 records in a file. Each record contains 6-character item-code, 20
characters for item-name and an integer price. Write a program to read these
records, arrange them in the descending order of price and write them in the same
file, overwriting the earlier records.*/

#include <iostream>
#include <fstream>
using namespace std;

class Record{

private:
    string code, name;
    int price;

public:
    void setCode(string C){code = C;}
    void setName(string N){name = N;}
    void setPrice(int P){price = P;}

    string retCode(void){return code;}
    string retName(void){return name;}
    int retPrice(void){return price;}
};

int main() {
    int n = 4;
    Record r[n];
    Record tmp;

    fstream fin;

    fin.open("D:/abc.txt", ios::in);

    string txt;

    for(int i = 0; i < n; i++){
        getline(fin, txt);
        r[i].setCode(txt);

        getline(fin, txt);
        r[i].setName(txt);

        getline(fin, txt);
        r[i].setPrice(stoi(txt));

        getline(fin, txt);
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(r[i].retPrice() < r[j].retPrice()){

                tmp.setCode(r[j].retCode());
                tmp.setName(r[j].retName());
                tmp.setPrice(r[j].retPrice());

                r[j].setCode(r[i].retCode());
                r[j].setName(r[i].retName());
                r[j].setPrice(r[i].retPrice());

                r[i].setCode(tmp.retCode());
                r[i].setName(tmp.retName());
                r[i].setPrice(tmp.retPrice());
            }
        }
    }
    fin.close();

    ofstream fout;
    fout.open("D:/abc.txt", ios::out);

    for(int i = 0; i < n; i++){
        fout<<r[i].retCode()<<endl;
        fout<<r[i].retName()<<endl;
        fout<<r[i].retPrice()<<endl<<endl;
    }

    fout.close();
}
