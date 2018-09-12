#include <iostream>

using namespace std;

int main()
{
//
//    int anio;
//    cout<<"ingrese un año: "<<endl;
//    cin>>anio;
//    if(anio%4==0 && (anio %100!=0 || anio%4==0)){
//        cout<<"es bisiesto";
//    }
//    else{
//         cout<<"no es bisiesto"<<endl;
//    }
///////2
//    int numero;
//    cout<<"ingrese un numero :";
//    cin>>numero;
//    for(int i=1; i< numero;i++ ){
//        if(i%2==0){cout<<i<<";";}
//    }
//    cout<<numero;
/////////3
//    int x,y=1,z=0,a=0;
//    cout<<"ingresar x:";
//    cin>>x;
//    for(int i=0;i<x;i++){
//        if(i==0 || i==1)
//            cout<<i<<endl;
//        else{
//            z=y;
//            y=y+a;
//            cout<<y<<","<<endl;
//            a=z;
//        }
//    }
/////////4
//    int l;
//    cout<<" Ingrese el numero  :"; cin>>l;
//    for(int num=5;num<l;num++){
//
//        int k=0;
//        for(int i=1; i<num;i++)
//        {
//            if(num%i==0)
//            {
//                k+=i;
//            }
//
//        }
//        if(k==num){
//            cout<<endl;
//            cout<<k<<"; " ;
//            for(int i=1;i<num;i++)
//            {
//                if(num%i==0)
//                {
//                    cout<<i<<";";
//                    k+=i;
//                }
//            }
//        }
//    }


///////////////5

//    int num;
//    cout<<"ingrese hasta que numero apareceran los primos:"<<endl;
//    cin>>num;
//    int k=0;
//    for (int j=2;j<=num;j++){
//        int a=0;
//        for(int i=1;i<=num;i++)
//        {
//            if(j%i==0)
//            a++;
//        }
//        if (a==2){
//            k+=j;
//        }
//    }
//    cout<<"suma de los numeros primos: "<<k;

//////1

//    int n;
//    cout<<"ingrese un numero :";
//    cin>>n;
//    int k=0;
//    for(int i=1; i< n;i++ ){
//        if(i%3==0 || i%5==0){k+=i;}
//    }
//    cout<< k;


/////////2


//    int numero;
//    cout<<"ingrese un numero :";
//    cin>>numero;
//    for(int i=1; i< numero;i=i+2 ){
//        cout<<i<<";";
//    }
//    cout<<numero;

/////////4


//    int num;
//    cout<<"ingrese hasta que numero apareceran los primos:"<<endl;
//    cin>>num;
//    for (int j=2;j<=num;j++){
//        int a=0;
//        for(int i=1;i<=num;i++)
//        {
//            if(j%i==0)
//            a++;
//        }
//        if (a==2){
//            cout<<j<<endl;
//        }
//    }

//// 5
    int a=600851475143;
    int l;
    for(int b=1;b<=a;b++){
        if(a%b==0)
        {
           int x=0;
               for(int i=1;i<(b+1);i++){
                    if(b%i==0){
                        x++;
                    }
                }
                if(x!=2){
                    cout<<" ";
                }else
                    l=b;

        }

    }
    cout<<"el ultimo primo divisible entre 600851475143:  "<<l<<endl;
    return 0;

}
