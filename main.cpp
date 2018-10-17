#include <iostream>
#include <string>
#include <sstream>
#include<math.h>
using namespace std;

void mayuscula(string &pal){
    for (int i=0;i<pal.length();i++){
        pal[i]=towupper(pal[i]);

    }
}

void  swap( int &a,int &b){
    int temp= a;
    a=b;
    b=temp;
}

void swapbyptr(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
bool bisiesto(int *year){
    return !(*year%4!= 0 ||(*year%100==0 && *year%400!=0));
    // *year %4 && (*year % 100!=0)|| (*year %400==0)
// No es bisiesto
    //Es bisiesto
}
bool isPerf(int *num){
    int o=1;
    for(int n=1; n<*num; n++)
        o= pow(2, n-1)*(pow(2, n)-1);
    return ( *num ==o);
}
/*
bool isperf(int *num){
    int sum=0;
    for(int  x=1;x<i-1;x++){
            if (i%x==0)
                d=d+x;
}
*/
bool isPrim(int *num){
    int c=0;
    for (int i=1; i<=*num;i++){
        if(*num%i==0)
            c++;
        }
        return (c==2);

}
// SUMA DE ELEMENTOS DE UN ARRAY
int sumaE(int arr[],int len){
    int sum=0;
    for(len>0;len--;arr++)
        sum+=*arr;
    return sum;
}
//  LONGITUD DE UNA CADENA
int lenAC(char cadena[]){
    int cont=0;
    while(*cadena!='\o'){
        cont++;
        cadena++;}
    return cont;
}
// longitud de uua cadena sin usar la varible contador

int lenLC(char cadena[]){
    char  *ptr=cadena;
    while(*cadena++!='\0')
    return cadena- ptr;
}
// PALINDROME
bool esPalC(char nom[],int larg ){
    char *aux=nom +(larg-1);
    while(aux>nom)
        if(*aux--!=*nom++)
            return false;
        return true;
}
int printL(char arreglo[]){
    int i=0;
    while(arreglo[i]!='\o'){
        cout << arreglo[i]<<" ";
        i++;
    }

}
//INVERTIR ARRAY

void invL(char *arr,int len){
    int b=0;
    char *ptr=arr;
    while(b<len){
        *ptr=arr[b];
        arr[b]=arr[len];
        arr[len]=*ptr;
        b++;
        len--;}

}
int main()
{
    int a=5;
    int b=10;
    swap(a,b);
    cout << a<< " "<< b<<endl;
    int arr[]={2018,2014};
    char letr[]="felici";
    char magi[]="hannah";
    int nume[]={1,2,3,4,5,6};
    int l=2014;
    cout << bisiesto(&l)<<endl;
    int num=6;
    cout << " Sera perfecto: "<<isPerf(&num)<<endl;
    /*
    int x=5;
    int &y=x;// referencia a x
    int  *ptr =&x;//puntero que apunta a x
    y++;
    x++;
    *ptr +=30;
    cout << x << endl;//imprime  37
    */
    cout << "la longitud de la lista char es: "<<lenAC(letr)<<endl;
    cout << "la longitud de la lista char es: "<<lenLC(letr)<<endl;
    cout <<"Es palindrome: "<<esPalC(magi,6)<<endl;
    invL(letr,6);
    cout << "La lista invertida es: "<< letr<<endl;

    return 0;
}
