#include <iostream>
#include <math.h>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return  fibo(n-2)+fibo(n-1);
}

int main()
{
    //////1

//    int n;
//    cout<<"ingrese un numero :";
//    cin>>n;
//    int k=0;
//    for(int i=1; i< n;i++ ){
//        if(i%3==0 || i%5==0){k+=i;}
//    }
//    cout<< k;

/// 2

//    int num=10;
//    int suma=0;
//    for(int i=0; i<num; i++)
//    {
//
//          if (fibo(i)% 2 ==0){
//                cout<<"d"<<fibo(i)<<endl;
//                suma+=fibo(i);
//
//          }
//    }
//    cout<<suma;
//////3
//    int a=600851475143;
//    int l;
//    for(int b=1;b<=a;b++){
//        if(a%b==0)
//        {
//           int x=0;
//               for(int i=1;i<(b+1);i++){
//                    if(b%i==0){
//                        x++;
//                    }
//                }
//                if(x!=2){
//                    cout<<" ";
//                }else
//                    l=b;
//
//        }
//
//    }
//    cout<<"el ultimo primo divisib le entre 600851475143:  "<<l<<endl;

///////////////////4
//
//    int a,b,c,d,e;
//    int k,lai,laj;
//    for(int i=10;i<=99;i++){
//        for(int j=10;j<=99;j++)
//        {
//            a=i*j;
//            b=a/1000%10;
//            c=a/100%10;
//            d=a/10%10;
//            e=a%10;
//            if(b==e && c==d){
//                k=a;
//                lai=i;
//                laj=j;
//            }
//
//
//
//        }
//    }
//    cout<<"El palindromo más grande hecho a partir del producto de dos numeros de 2"<<endl;
//    cout<<"es"<< lai <<"*"<< laj<<" es palindrome: "<<k<<endl;


//////////////5
//    int a=2529;
//    int k=0;
//    int i;
//    for(i=2519; i<a ;i++)
//    {
//        for(int j=1; j<=20;j++)
//        {
//
//            if(i%j==0)
//            {
//                k+=1;
//
//                if(k==9)
//                    cout<<"el numero divisible de 1-10:"<<i<<endl;
//            }
//
//        }
//    }

/////////6
//    int suma=0;
//    int suman=0;
//    for(int i =1;i<101;i++)
//    {
//        suma+=pow(i,2);
//    }
//    for (int j=1;j<101;j++){
//        suman+=j;
//    }
//
//    int k=suman*suman;
//
//    int diferencia= k-suma;
//    cout<<"la resta de "<< k << " y " << suma <<"es igual    "<<diferencia<<endl

/////////7
//    int y=0;
//    for (int j=2;j<=20;j++){
//        int a=0;
//
//        for(int i=1;i<=20;i++)
//        {
//            if(j%i==0)
//                a++;
//        }
//        if (a==2){
//            y+=1;
//            if(y==6)
//                cout<<j<<endl;
//                //con el y sale el 13
//        }
//    }
///////////9
    int k=0;
    for(int a=1;a<1000;a++){
        for(int b=2;b<1010;b++){
            for(int c=3;c<1020;c++)
            {
                if(a<b && b<c)
                {
                    if((a*a)+(b*b)==c*c)
                    {
                        if(a+b+c==1000)
                        {
                            cout<<"a: "<<a<<endl;
                            cout<<"b: "<<b<<endl;
                            cout<<"c: "<<c<<endl;
                            k=a*b*c;
                        }

                    }

                }
            }
        }
    }
    cout<<k<<endl;
/////////////////10
    int h=0;
    int num=10;
    for (int j=2;j<=num;j++){
        int a=0;
        for(int i=1;i<=num;i++)
        {
            if(j%i==0)
                a++;
        }
        if (a==2){
            h+=j;
        }
    }
    cout<<h;






    return 0;
}
