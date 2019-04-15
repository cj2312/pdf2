#include<iostream>
using namespace std;
# define PI 3.14159
# define NEWLINE '\n'
#define O 1
//1.1-----------------------

int main1 (){
    double r=5.0;
    double circle ;

    circle=2* PI*r;
//circle=2* 3.14159* r;
    cout<<circle<<NEWLINE;
//cout<<circle<<’\n ’;
    return 0;

}
//2.1------------------------
int main2(){
    const char* str = "HELLO WORLD!!";
    cout<<str<<endl;
    return 0;
}
//2.2--------------------------------
int main3(){
    int N;
    cin>>N;
    for(;N-->0;)
        cout<<"HELLO WORLD!!"<<endl;
    return 0;
}
//2.3-------------------------------------
int main4(){
    int N;
    cin>>N;
    while(N-->0)
        cout<<"HELLO WORLD!!"<<endl;
    return 0;
}
int main5(){
    int N;
    cin>>N;
    do
        cout<<"HELLO WORLD!!"<<endl;
    while(--N>0);
    return 0;
}
//3.2--------------------------------------------------
int main6(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    int acc =0;

 // manejar el primer numero por separado
    cin >> acc;
    int minVal = acc;
    int maxVal = acc;

 // luego procesar el resto de la entrada
    for(int i= 1; i<N; ++i) {
        int a;
        cin >> a;
        acc += a;
        if(a < minVal){
            minVal = a;
        }
        if(a > maxVal)
        {
            maxVal = a;
        }
    }

    cout << "Mean: " << (double )acc/N << "\n";
    cout << "Max: " << maxVal << "\n";
    cout << "Min: " << minVal << "\n";
    cout << "Range: " << (maxVal -minVal) << "\n";

    return 0;
}
//3.3--------------------------------------------
int main7(){
    int N;
    cin >> N;
    for(int i= 2; N>0; ++i) {
        bool isPrime = true ;
        for (int j= 2; j<i; ++j){
            if(i %j== 0)//va sacar modulo de i con todos sus numero anteriores hasta 2....apenas el  modulo de i j sea 0 se va detener el bucle paraa ese i y ese numero i no es primo...
            {
                isPrime = false ;
                //cout<<i<<"\t"<<j<<"\t"<<(i%j)<<endl;
                //cout<<i<<"no es primo"<<endl;
                break ;
            }
        }
        if(isPrime)
        {
            --N;//hace una cuenta regresiva para mostrar los N primeross numero primos
            cout << i << "\n";
        }
    }
    return 0;
}
//3.4------------
int main8(){

    for(;;){
        int n;
        cin>>n;
        cout<<((n%5==0 & n>0)?n/5:-1)<<endl;}
    return 0;
}
int main9(){

    while(1){
        int n;
        cin>>n;
        if (n%5>0){
            cout<<-1<<endl;
            continue;
        }
        cout<<(n/5)<<endl;}
    return 0;
}
int main10(){

    while(1){
        int n;
        cin>>n;
        if (n%5>0){
            cout<<-1<<endl;
            continue;
        }
        if(n<0) break;
        cout<<(n/5)<<endl;}
        cout<<"Goodbye!"<<endl;
    return 0;
}
//3.5---------------------------------------
int main11(){
    int dole=14,bob=14,accumulator = 0;
    while (true )
    {
        if(dole == 0) break ;
        accumulator += ((dole % 2 == 1) ? bob : 0);//este rpograma multiplica 2 numeros ... a uno lo va duplicando y al otro divdiendo entre 2... y si da impar lo va sumando con otros impares para hallar el resultado
        dole /= 2;
        bob *= 2;
    }
    cout << accumulator << "\n";
}
int main12(){
    return O;
}//retona 1 y se sale
int main13(){
   // N is a nonnegative integer
   int N=6;
    double acc = 0;
    for(int i = 1; i <= N; ++i)
    {

        double term = (1.0/i);
        acc += term * term;
        for (int j= 1; j<i; ++j)
        {
            acc *= -1;
        }
    }
    cout << acc << "\n";}
//4.1----------------------------------------------------------
int main14()
 {
    short number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is ";
    int accumulator = 1;
    for (; number > 0; accumulator *= number--);
    cout << accumulator << ".\n";

    return 0;
}

 long long accumulator = 1;

 int main15()
 {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The factorial of " << number << " is " ;
    if(number < 0)
    {
        cout << "No negative numbers allowed!\n";
        return 1;
    }
    if(number > 20)
    {
        cout << "Program will not produce correct result!\n";
    }
    for (; number > 0; accumulator *= number--);
    cout<< accumulator << ".\n";
    return 0;
 }

int main ()
{
    int
    number ;
    cout<<" Enter a number :";
    cin>>number ;
    switch ( number )
    {
    case 0:
    case 1:
        cout<<"1\n";
        break ;
    case 2:
        cout<<"2\n";
        break ;
    case 3:
    cout << "6\n";
        break ;
    case 4:
        cout<<"24\n";
        break ;
    case 5:
        cout<<" 120\n";
        break ;
    case 6:
        cout<<" 720\n";
        break ;
    case 7:
        cout << "5040\n";break ;
    case 8: cout << "40320\n"; break ;
    case 9: cout << "362880\n"; break ;
    case 10: cout << "3628800\n"; break ;
    default :

        cout<<" Input not supported !\n";

        break ;
    }

    return 0;
}
