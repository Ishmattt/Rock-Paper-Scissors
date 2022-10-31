#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int cChoosenum(){
    srand((unsigned) time(NULL));
    int random = rand();
    int a;
    a=random%3;
    return a;}
    
int uChoosenum(string a){
    int j;
    if(a=="rock"){
        j=0;
    }else if (a=="paper"){
        j=1;
    }else if (a=="scissor"){
        j=2;
    }else j=3;
    return j;
}

int main()
{
     string uChoose,cChoose;
     cout<<"here\n";
     cout.flush();
     sleep(2);
     char arr[]="come play with me...",arr1[]="just write paper, rock, or scissor";
     
     int fixcChoose=cChoosenum();
     if (fixcChoose==0){
         cChoose="rock";
     }else if (fixcChoose==1){
         cChoose="paper";
     }else {cChoose="scissor";}
     
     
     for(int i=0;i<21;i++){
         cout<<arr[i];
         cout.flush();
         sleep(1);}
     cout<<"\n";
     for(int i=0;i<33;i++){
         cout<<arr1[i];
         }
     sleep(1);
     cout<<"\n\nYou :";
     cin>>uChoose;
     cout<<"Me :"<<cChoose;
     
     if (uChoosenum(uChoose)==3){
         cout<<"\n\nThat's illegal, you dumbass.";
     }else if (uChoosenum(uChoose)==fixcChoose){
         cout<<"\n\nTie huh\n";
         sleep(1);
         cout<<"Again";
     }else if ((uChoosenum(uChoose)==fixcChoose+1) ||  (uChoosenum(uChoose)==0 && fixcChoose==3)){
         cout<<"\n\nWow,\n";
         sleep(1);
         cout<<"you beat me,\n";
         sleep(1);
         cout<<"lets play again :]";
     }else {
         sleep(2);
         cout<<"\nhaha, ";
         sleep(1);
         cout<<"i won ";
         sleep(1);
         char arr2[]="....";
         for(int i=0;i<4;i++){
         cout<<arr2[i];
         cout.flush();
         sleep(1);}
         cout<<"\n";
         sleep(1);
         cout<<"I WON!!!\n";
         sleep(1);
         cout<<"and you...\n";
         sleep(1);
         cout<<"you\n";
         sleep(2);
         char arr3[]="L O S E";
         for(int i=0;i<7;i++){
         cout<<arr3[i];
         cout.flush();
         sleep(1);}
         
         sleep(2);
         cout<<"\nthat's what you get to dare challanged me\n";
         sleep(2);
         cout<<"you think you can beat me?\n\n";
         sleep(2);
         cout<<"you\n";
         sleep(1);
         cout<<"loser\n";
         sleep(1);
         cout<<"bitchless\n";
         sleep(1);
         cout<<"freak\n";
         sleep(1);
         cout<<"motherfucker\nThinking of beating me?\n\n";
         sleep(3);
         cout<<"go\n";
         sleep(1);
         cout<<"go cry on friend\n";
         sleep(1);
         cout<<"wait\n";
         for(int i=0;i<4;i++){
         cout<<arr2[i];
         cout.flush();
         sleep(1);}
         
         cout<<"\nYOU DON'T HAVE ANY FRIEND!!\n";
         sleep(1);
         cout<<"that's why you play with me in the first place!!! ";
         sleep(1);
         cout<<"haha\n\n";
         sleep(4);
         cout<<"thanks for playing tho\n";
         sleep(1);
         cout<<"bye, loser";}
     
     return 0;
}
 