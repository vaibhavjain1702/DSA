#include <iostream>
using namespace std;

int main(){
    // int count;
    // for(count=1;count<=5;count=count+1){
    //     cout<<"Coder Army\n";
    // }
// --------------------------------------------
    // for(int i=1;i<=10;i=i+1){
    //     cout<<"hello\n";
    // }
// --------------------------------------------
    //printing n natural numbers
    // int n;
    // cin>>n;
    // for(int count=1;count<=n;count=count+1){
    //     cout<<count<<endl;
    // }
// --------------------------------------------
    //printing squares of n natural numbers
    // int n;
    // cin>>n;
    // for(int count=1;count<=n;count=count+1){
    //     cout<<count<<" Square is: "<<count*count<<endl;
    // }
// --------------------------------------------
    //printing even numbers upto n
    // int n;
    // cout<<"enter n: ";
    // cin>>n;

    // for(int i=2;i<=n;i=i+2){
    //     cout<<i<<endl;
    // }
 
    // another method 

    // for(int i=1;i<=n;i=i+1){
    //     if(i%2==0){
    //         cout<<i<<" ";
    // }
    // }
// --------------------------------------------
    // printing odd numbers till n
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i=i+1){
        if(i%2==1){
            cout<<i<<" ";
        }
        
    }
}
