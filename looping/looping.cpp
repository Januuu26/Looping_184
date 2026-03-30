#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;


    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"TEKNOLOGI INFORMASI UMY"<<endl;
     }
     cout<<endl;

     srand(time(0));

     cout<<"PERULANGAN WHILE"<<endl;
     x =  1 + rand()%10;

     while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
     }
     
     cout<<"Bilangan acak while yang terakhir ="<<x <<endl;
     cout<<endl;

     cout<<"PERULANGAN DO-WHILE"<<endl;
     x =  1 + rand()%10;

     do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
     }while(x<=5);

     cout<<"Bilangan acak do-while yang terakhir ="<<x <<endl;
     cout<<endl;

    return 0;
}

 Logika not
 #include <iostream>
 using namespace std;

 int main(){
    float  niLB,niLM,rerata:
    string status;

    cout<<"Masukan nilai Matematika = ";
    cin>>niLM;
    cout<<"Masukan nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB + niLM)/2;

    if(!(rerata >= 60))
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status kelulusan = "<<status<<"  ,dengan nilai rata-rata = "<<rerata<<endl;

 }
 Logika OR
#include <iostream>
using namespace std;

int mainn(){
    float niLB,niLM,rerata;
    string status;

    cout<<"Masukan nilai Matematika = ";
    cin>>niLM;
    cout<<"Masukan nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB + niLM)/2;

    if((rerata >= 60) || (niLB >= 70))
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status kelulusan = "<<status<<"  ,dengan nilai rata-rata = "<<rerata<<endl;

}

Logika AND
#include <iostream>
using namespace std;

int main(){
    float niLB,niLM,rerata;
    string status;

    cout<<"Masukan nilai Matematika = ";
    cin>>niLM;
    cout<<"Masukan nilai Bahasa Inggris = ";
    cin>>niLB;

    rerata = (niLB + niLM)/2;

    if((rerata >= 60) && (niLB >= 70))
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status kelulusan = "<<status<<"  ,dengan nilai rata-rata = "<<rerata<<endl;

}

