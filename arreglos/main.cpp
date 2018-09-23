#include <iostream>
#include <iostream>

using namespace std;
int inv (int &a, int &b);
int imprimir(int arr[],int len)
{
    for(int i=0; i< len ; i++){
        cout<< arr[i] <<".";
    }
}
int tamano(char cad[])
{
    int tam =0;
    for(int i=0; cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
int sum(const int arr[],const int length)
{
    long sum=0;
    for (int i =0; i<length ; sum+=arr[i++]);
    return sum;
}
int invertir(int arr[],int len,int inicio)

{
    if (len==0)//siel tamano es igual a 0 entonces que me retonrme el primer elemento
    {
        return arr[0];
    }
    else {
        if (inicio!=(len-1)/2)
        {
            inv(arr[inicio],arr[len-1]);

            return invertir(arr,len-1,inicio+1);

        }
    }

}
int mayor(const int array[],const int length)
{
    int may=0;
    for (int i =0; i<length ; i++)
    {
        if(array[i]>may){
                may=array[i];

        }
    }
    return may;
}
int primo(const int arr[],const int length)
{

    for(int n=0; n<length ; n++){
        int x=0;
        for(int i=1;i<length +1;i++){
            if(arr[n]%i==0){
                x++;
                //cout<<"x"<<x;
            }
        }
        if(x!=2){
            cout<<" ";
        }else{
            cout<<arr[n]<<endl;

        }
    }
}
int inv (int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void ordenar (int arreglo[], int tam)
{
   int i, j, temporal;

   for (i = tam - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (arreglo[j] > arreglo[j + 1]) {
            inv(arreglo[j],arreglo[j+1]);
         }

}
void descendente( int arr[], int length)
{
    ordenar(arr,length);
    invertir(arr,length,0);
    imprimir(arr,7);

}
int contarCar(char cadena[],char a){
    int i=0;
    int b=0;

    while(cadena[i]!='\0')
    {
        if(cadena[i]==a)
        {
            b++;
            i++;
        }
        else{
            i++;
        }
    }
    return b;

}
bool isPal(char cadena[])
{
    int k=tamano(cadena);
    for(int i=0; i<k;i++)
    {
        if(i==(k-1)/2)
        {
            break;
        }
        else{
            if(cadena[i]==cadena[k])
            {
                k--;
                return true;
            }
            else
                return false;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 5, 4, 6, 7};
    char cad[]="aaae";
    char al='a';
//    cout << "Sum: " << sum(arr, 7) << endl;
//    cout << "Sum: " << mayor(arr, 7) << endl;
    //ordenar(arr,7);
    //invertir(arr,7,0);
    //descendente(arr,7);
    //imprimir(arr,7);
//    cout<<contarCar(cad,al);
    cout<<isPal(cad);

    return 0;
}
