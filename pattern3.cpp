#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"Enter n: ";
    cin>>n;
//     *
//    **
//   ***
//  ****
// *****
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=n-row;col++){ //space print
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){ //star print
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
//     1
//    22
//   333
//  4444
// 55555
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
//     1
//    12
//   123
//  1234
// 12345
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------

//     a
//    ab
//   abc
//  abcd
// abcde
    // row=1
    // row<=5
    // print=space 5-row times
    // char name=a inside the for condition 
    // print=a to a+row-1

    // for(row=1;row<=n;row++){
       
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(char name='a';name<='a'+row-1;name++){
    //         cout<<name;
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
//     1
//    21
//   321
//  4321
// 54321
    // row=1
    // row<=5
    // print space 5-row times
    // print row= row to 1 times

    // for(row=1;row<=n;row++){
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(col=row;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }
// --------------------------------------------
//     *
//    ***
//   *****
//  *******
// *********
// row=1
// row<=5
// print space 5-row times
// print * row*2-1 times

// for(row=1;row<=n;row++){
//     for(col=1;col<=n-row;col++){
//         cout<<" ";
//     }
//     for(col=1;col<=(row*2)-1;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
}