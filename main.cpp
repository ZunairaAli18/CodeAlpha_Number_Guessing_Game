#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main(){
    cout<<"Welcome to number Guessing Game!!"<<endl;
    char ch;
    do{
    srand(time(0));
    int randomnumber=rand()%100 +1;
    int n=0;
    cout<<"Enter number to guess"<<endl;
    while(n!=randomnumber){
        cin>>n;
        if(n<randomnumber){
            cout<<"Too Low!"<<endl;
        }
        if(n>randomnumber){
            cout<<"Too High"<<endl;
        }
    }
    cout<<"Congratulations!! You have guessed it right."<<endl;
    cout<<"Do you want to play more?(y/n)"<<endl;
    cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    return 0;
}