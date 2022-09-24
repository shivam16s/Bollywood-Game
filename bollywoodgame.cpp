#include<iostream> 
#include <random>
#include <string>
using namespace std;


bool randomBool() {
    return 0 + (rand() % (1 - 0 + 1)) == 1;
}

int Count = 7;

string w = "DHADKAND";
int n = w.length();
string a ;

void suffle(){
    // a ='\0';
    for(int i =0 ; i<n ; i++){
        if (w[i] == ' '){
             a.push_back(' ');
        }
        else if(randomBool()){
            a.push_back('_');
        }
        else{
            a.push_back(w[i]);
        }
    }

}

void print(){
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;

}

void enterdata(int i){
    label:
    cout<<"\nEnter the Movie blank character in Capital: ";
    char temp ;
    cin >>temp ;
    if (w[i]==temp)
    {
        a[i]=temp;

    }
    else{
        --Count;
        if(Count>0){
            cout<<"\n Wrong Input!!!!! \n please Try again ....\n You have "<<Count<<" Lives Remaining\n";
            goto label;
        }
        else {
            cout<<"\n......Game Over......";
        }



    }
    
}


int main()
{

suffle();
// print();
for (int i = 0; i < n; i++)
{
    if(a[i]=='_'&& Count!=0 ){
        print();
        enterdata(i);
        
    }

}
if(Count > 0){
    cout<<"\nCongratulation!!!!\n You won the Game...... nice play\n\n";
} 
else{
    cout<<"\n!!!!  Come Again  !!!!\n\n";
} 
   return 0;
}