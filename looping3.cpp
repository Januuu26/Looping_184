#include <iostream>
using namespace std;

int main(){
    float niLB,niLM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>niLM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB+niLM)/2;

    if ((rerata >= 60) || (niLM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}