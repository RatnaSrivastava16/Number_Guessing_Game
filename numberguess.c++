#include<iostream>
using namespace std;
void random(int ranN,int max,int min,int limit){
    int userN;
     cout<<"Guess the Number between "<<min<<"-"<<max<<endl;
    while(limit>0){
    cin>>userN;
    if(ranN==userN)
    {
        cout<<"Congrats you won"<<endl;
        break;
    }
    else if(ranN>userN){
        cout<<"Too Low"<<endl;
    }
    else if(ranN<userN){
        cout<<"Too High"<<endl;
    }
    limit--;
    cout<<"You have "<<limit<<" chance left"<<endl;
    if(limit==0){
        cout<<"You Lost "<<endl;
        cout<<"The number was "<<ranN<<endl;
    }


    }
}


int main(){
    cout<<"                      ____   ____  ____      ____                   ____"  <<endl;
    cout<<"|\\  | |   | |\\    /| |    ) |     |____)    |        /\\   |\\    /| |    "<<endl;
    cout<<"| \\ | |   | | \\  / | |----  |---- |  \\      |   _   /__\\  | \\  / | |----"<<endl;
    cout<<"|  \\| |___| |  \\/  | |____) |____ |   \\     |__| | /    \\ |  \\/  | |____"<<endl;
    int n;
 while(1){
    int min;
    int max;
    cout<<"Enter the range you want to guess the number between: "<<endl;
    cout<<"Lower value"<<endl;
    cin>>min;
    cout<<"Higher value"<<endl;
    cin>>max;
    int limit= rand() % (5- 1 + 1) + 1;
    cout<<"You have "<<limit<<" chance to win the game"<<endl;
    int randomN = rand() % (max - min + 1) + min;
    random(randomN,max,min,limit);
    cout<<"Press 1 to play again or 0 exit"<<endl;
    cin>>n;
    if(n==0){
        exit(0);
    }

 }
}
