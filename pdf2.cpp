#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//4.1
int sum ( const int x , const int y ) {
    return x + y ;
}

double sum ( const double x , const double y ) {
    return x + y ;
}
//4.2
//Mezclar y combinar un int con un doble hace que sea ambiguo a cuál quieres llamar.
//El compilador podría convertir 1 a doble y llamar a la versión doble de sum,
//o podría convertir 10.0 a un int y llamar a la versión int

//4.3
int sum ( const int x , const int y , const int z ) {
    return x + y + z ;
}

int sum ( const int a , const int b , const int c , const int d ) {
    return a + b + c + d ;
}
//4.4
int sum( const int a, const int b, const int c = 0 , const int d = 0){
    return a + b + c + d ;
}

//4.5
int sum( const int numbers [], const int numbersLen ) {
    int sum = 0;
    for(int i = 0; i < numbersLen ; ++i ) {
    sum += numbers [ i];
    }
    return sum;
}
//4.6
/*int sum ( const int numbers [] , const int numbersLen ) {
    return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 ,
    numbersLen - 1) ;
 }*/
//5.1
double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;

//5.2
/*int dartsInCircle = 0;
    for(int i = 0; i < n ; ++ i ) {
        double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )
        RAND_MAX ;
        if( sqrt ( x * x + y * y ) < 1 ) {
        ++ dartsInCircle ;
        }
    }
*/
//5.3
double computePi ( const int n){
    srand ( time (0) ) ;
    int dartsInCircle = 0;

    for(int i = 0; i < n ; ++i ) {
        double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )
            RAND_MAX ;
        if( sqrt ( x * x + y * y ) < 1 ) {
            ++ dartsInCircle ;
        }
    }
}

//6.1
void printArray ( const int arr [], const int len ) {
    for(int i = 0; i < len; ++i ) {
        cout << arr [ i];
        if( i < len -1) {
            cout << ", ";
        }
    }
}
//6.2
void reverse (int numbers [] , const int numbersLen ) {

    for(int i = 0; i < numbersLen / 2; ++ i ) {
        int tmp = numbers [ i ];
        int indexFromEnd = numbersLen - i - 1;
        numbers [ i ] = numbers [ indexFromEnd ];
        numbers [ indexFromEnd ] = tmp ;
    }
}

//6.3
void transpose ( const int input [][ LENGTH ] , int output [][ WIDTH ]) {

    for(int i = 0; i < WIDTH ; ++ i ) {
        for (int j = 0; j < LENGTH ; ++ j ) {
            output [ j ][ i ] = input [ i ][ j ];
        }
    }
}

//6.4 Se devolvería un puntero al primer elemento de la matriz,
//pero la matriz se habría ido Fuera de alcance, invalida el puntero.

//6.5
void reverse (int numbers [] , const int numbersLen ) {
    for(int i = 0; i < numbersLen / 2; ++ i ) {
            int tmp = *( numbers + i ) ;
            int indexFromEnd = numbersLen - i - 1;
            *( numbers + i ) = *( numbers + indexFromEnd ) ;
            *( numbers + indexFromEnd ) = tmp ;
    }
}

//7.1
int stringLength ( const char * str ) {
    int length = 0;
    while (*( str + length )!= '\0') {
        ++ length ;
    }
    return length ;
}

//7.2
void swap (int &x, int & y ) {
    int tmp = x ;
    x = y ;
    y = tmp;
}
//7.3
void swap (int *x , int * y ) {

    int tmp = * x ;
    *x = *y;
    *y = tmp;
}
//7.4
void swap (int ** x , int ** y ) {

    int *tmp = *x ;
    *x = *y ;
    *y = tmp ;
}

//7.5
/*
1.	 char *nthCharPtr = &oddOrEven[5];
2.	 nthCharPtr -= 2; or nthCharPtr = oddOrEven + 3;
3.	 cout << *nthCharPtr;
4.	 char **pointerPtr = &nthCharPtr;
5.	 cout << pointerPtr;
6.	 cout << **pointerPtr;
7.	 nthCharPtr++; to point to the next character in oddOrEven (i.e. one character past
     the location it currently points to)
8.	 cout << nthCharPtr - oddOrEven;

 */





 // r^2 is 1 , and a/4 = dartsInCircle /n, yielding this for pi:
 return dartsInCircle / static_cast <double >(n ) * 4;
 }

int main(){


return 0;
}
