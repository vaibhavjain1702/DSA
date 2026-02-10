#include <iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"Enter n: ";
    cin>>n;

//     1
//    121
//   12321
//  1234321
// 123454321
    // row=1
    // row<=5
    // print space 5-row times
    // print as 1 to row and then row-1 to 1

    // for(row=1;row<=n;row++){
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<col;
    //     }
    //     for(col=row-1;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
    // row=1
    // row<=5
    // print space row times
    // print * (n-row)*2 + 1

    // for(row=1;row<=n;row++){
    //     for(col=1;col<=row-1;col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=((n-row)*2)+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // or

    // for(row=n;row>=1;row--){
    //     for(col=1;col<=n-row;col++){
    //         cout<<" ";
    //     }
    //     for(col=1;col<=2*row-1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
    // row=n
    // row>=1
    // print * row to 1 times
    // print space 1 to (n-row)*2 times increase by 1
    // print * row to 1 times
    // new loop
    // print * 1 to n times
    // print space (n-row)*2 to 1 times
    // print * 1 to row times

    // for(row=n;row>=1;row--){
    //     for(col=row;col>=1;col--){
    //         cout<<"* ";
    //     }
    //     for(col=1;col<=(n-row)*2;col=col+1){
    //         cout<<"  ";
    //     }
    //      for(col=row;col>=1;col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }   
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     for(col=(n-row)*2;col>=1;col=col-1){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // --------------------------------------------
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
//     row=1
//     row<=n
//     print * row times
// print space (n-row)*2
// print * row times
// row=3
// row>=1
// print * row times
// print space (n-row)*2
// print * row times

// for(row=1;row<=n;row++){
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     for(col=1; col<=(n-row)*2; col++){
//         cout<<"  ";
//     }
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(row=n-1;row>=1;row--){
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     for(col=1; col<=(n-row)*2; col++){
//         cout<<"  ";
//     }
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// --------------------------------------------
//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    * 
// row=1
// row<=n
// print space  1 to n-row
// print "* " from 1 to row
// new loop
// row=n
// row>=1
// print space 1 to n-row 
// print "* " 1 to row

// for(row=1;row<=n;row++){
//     for(col=1;col<=n-row;col++){
//         cout<<" ";
//     }
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(row=n;row>=1;row--){
//     for(col=1;col<=n-row;col++){
//         cout<<" ";
//     }
//     for(col=1;col<=row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

}