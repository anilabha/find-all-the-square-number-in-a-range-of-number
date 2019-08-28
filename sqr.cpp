/******************************************************************************

                          Created by Anilabha Baral

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int sqr(int n){

    int b=sqrt(n);
    if (b>=2){
    for(int i=2;i<=b;i++){
        int c=pow(i,2);
            cout<<"sqr number in the range of "<<n<<" is : "<< c<<endl;



    }
    }
    else{
        cout<<"no sqr number found!!!!!!!!!!!\n";
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

