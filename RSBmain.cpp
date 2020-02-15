//
//  main.cpp
//  Practice Session
//
//  Created by Daniel Mai Fisher on 9/10/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <iostream>
using namespace std;
//Project Rock, Paper, Scissors

//1-user
//opponent=random response
//Define what is Win and tie
//Keep score if Score=3 then Game Over
//Prompt for start again

int compC();
void conflict(int,int);

int main(int argc, const char * argv[]) {
    int choice;
    cout<<"Welcome to this super basic Rock, Paper, Scissors..."<<endl;
    cout<<endl;
    
    cout << "Game Choices.\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Please enter your choice here:";
    cin >> choice;
    
    cout<<endl;
    conflict(choice,compC());
    cout<<endl;

    
    return 0;
}

//Computer Choice
int compC(){
    srand (time(NULL));
    int compChoice= rand() % 3 + 1;
    return compChoice;
}

//All possible outcomes
void conflict(int c, int compC){

   //In case of Draw
    if (c==compC) {
        cout<<"It's a Draw"<<endl;
    }
 
   //Player Picks Rock
    if (c==1 && compC==2) {
        cout<<"You chose Rock \nComputer chose Paper"<<endl;
        cout<<"You Lost :("<<endl;
    }

    if (c==1 && compC==3) {
        cout<<"You chose Rock \nComputer chose Scissors"<<endl;
        cout<<"You won :)"<<endl;
    }
    
  //Player picks Paper
    if (c==2 && compC==1) {
        cout<<"You chose Paper \nComputer chose Rock"<<endl;
        cout<<"You won :)"<<endl;
    }

    if (c==2 && compC==3) {
        cout<<"You chose Paper \nComputer chose Scissors"<<endl;
        cout<<"You Lost :("<<endl;

    }

   //Player picks Scissors
    if (c==3 && compC==1) {
       cout<<"You chose Scissors \nComputer chose Rock"<<endl;
       cout<<"You won :)"<<endl;
    }
   
    if (c==3 && compC==2) {
        cout<<"You chose Scissors \nComputer chose Paper"<<endl;
        cout<<"You Lost :("<<endl;
        
        
    }
//Error Message
    if(c>3 || c<1){
        cout<< "Please don't be an idiot\n Only put in the options above";
    }
}

