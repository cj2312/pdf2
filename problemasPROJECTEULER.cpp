#include<iostream>
#include<string>
#include<math.h>

using namespace std;
unsigned long long fibRecursivo(int n){
    if(n==0 || n==1) return 1;
    return fibRecursivo(n-2)+fibRecursivo(n-1);
}
unsigned long long fibIterativo(int n){
    int i=1,j=1,k=2;
    int *ptr1=&i,*ptr2=&j;
    while(k<=n){
        int tmp=*ptr1+*ptr2;
        *ptr1=*ptr2;
        *ptr2=tmp;
        k++;

    }return *ptr2;
}
bool even(int n){
    if(n%2==0) return true;
    return false;
}
bool primo(int n){
    while(n>1){
    for(int i =2;i<n; i++){
        if(n%i==0){
            return false;
            break;

        }
    }return true;}
}
/*int sumPares(int n ){
    int c=0,i=0;
    while(i<n){
        if(i%2==0)
            c+=i;
        i++;
    }return c;
}*/
//problem 2
void p2(){
    int c=0,i=0;
    while(fibIterativo(i)<4000000){
        if (even (fibIterativo(i)))
            c+=fibIterativo(i);
        i++;
    }
    cout<<c<<endl;
}
//problem 3
void p3(unsigned long long numero){
    for(int i = 2 ; i <= numero ; i++)
{
    if(numero % i == 0)
    {
        //cout <<"numero "<<numero<<" "<<i<<" "<<endl;
        while(numero % i == 0)
            numero /= i;
            //cout <<"numero "<<numero<<" "<<i<<" "<<endl;
        cout<<i<<endl;
    }
}
}

/*void intToArr(int n, int Ndig){
    int arr[Ndig];
    for (int i=Ndig-1;i>=0;i--){
        *(arr+i)=n%10;
        n/=10;
        //cout<<i<<" "<<*(arr+i)<<" ";//esto va imprimir al reves....

    }
}
void reverso(int *arr,int t){
    for(int i=0;i<t;i++){
        int temp=*(arr+i);
        *(arr+i)=*(arr+t-i-1);
        *(arr+t-i-1)=temp;
    }
}
void print(int * arr,int t){
    for(int i=0;i<t;i++){
        cout<<*(arr+i)<<" ";
    }cout<<endl;
}*/
//problem 4----------------------
bool esPalindromo(int n){
    int aux,resto,numInv=0;
    aux=n;
    while(aux>0){
      resto=aux%10;
      aux=aux/10;
      numInv=numInv*10+resto;
    }
    if(numInv==n){
        return true;
    }
    else
       return false;
}
int largestP(){
    int m;
    for(int i=100;i<999;i++){
        for(int j=100;j<999;j++){
           m=i*j;
           if(esPalindromo(m))
                cout<<i<<"x"<<j<<"="<<mayor<<endl;
        }
    }
return 0;
}


//problem 5
int mcm(int a , int b ){
    int mi=min(a,b),mcd;
    for (int i=1;i<=mi;i++){
        if(a%i==0 & b%i==0)
            mcd=i;

    }return ((a*b)/mcd);}
void p5(){
    int numero=1;
    for(int i=1;i<20;i++){
        numero=mcm(numero,i);
        cout<<numero<<endl;
    }
}
//problem 6
int square(int n){
    return (n*n);
}
int sumsquares(int n){
    int c=0,i=0;
    while(i<=n){
        c+=square(i);
        i++;
    }return c;
}
int squareofsum(int n){
    int c=0,i=0;
    while(i<=n){
        c+=i;
        i++;
    }return square(c);
}
void p6(){
    int n= 100,diff;
    diff=squareofsum(n)- sumsquares(n);
    cout<<diff<<endl;
}

//problem 7
void p7(int n){
   for(int i=2;n>0;++i){
        bool esprimo=true;
        for(int j=2;j<i;++j){
            if(i%j==0){
                esprimo=false;
                break;
            }
        }
        if(esprimo){
            --n;
            cout<<i<<endl;
        }
   }
}

//problem 9-------------
void p9(){
    int a=1,b=2,c=3;
    while(1){
       if(square(a)+square(b)==square(c) & a+b+c==1000){
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;}
       a++;b++;c++;
    }
}
int main(){
    //cout<<fibIterativo(40)<<endl;;
    //cout<<sumPares(10);
    //p2();
    //p3(600851475143);
    //if (primo(2617)) cout <<"hola";else cout<<"gg"<<endl;
    //cout<<mcm(4,8);
    //p5();
    //p6();
    //p7(10001);
    int a[]={1,2,3};
    p9();









}
