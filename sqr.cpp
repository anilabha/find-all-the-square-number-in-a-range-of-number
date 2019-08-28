/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int sqr(int n){

    int b=sqrt(n);
    cout<<"after: "<<b<<endl;
    for(int i=2;i<=b;i++){
        int c=pow(i,2);
            cout<<"sqr number in the range of "<<n<<" is : "<< c<<endl;



    }

}


int main()
{

    int n;
    cout<<"enter the range : ";
    cin>>n;
    sqr(n);
    return 0;
}
