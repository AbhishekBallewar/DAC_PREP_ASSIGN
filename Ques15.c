#include <stdio.h>
#include<string.h>
void Occurences();

int main(void){
    
    char str[20];
    printf("enter the string\n");
    gets(str);
    Occurences(str);
    
    return 0;
}
void Occurences (char* ptr){
    int i =0;
   
    int A = 0;int B = 0;int C = 0; int D = 0;
    int E = 0; int F= 0; int G = 0;  int H = 0;
    int I = 0;int J = 0;int K = 0;int L = 0;
    int M = 0;int N = 0;int O = 0;int P = 0;
    int Q = 0;int R = 0;int S = 0;int T = 0;
    int U = 0;int V = 0;int W = 0;int X = 0;
    int Y = 0;int Z = 0;int Symbol=0;
    int j = strlen(ptr);
      
    while(i<j)
    {
        char ch = ptr[i];
    switch(ch)
    {
       case ('a'):
        case ('A'):
        A++; 
        break;
        case ('b'):
        case ('B'):
        B++;
        break;
         case ('c'):
        case ('C'):
        C++; 
        break;
         case ('d'):
        case ('D'):
        D++; 
        break;
         case ('e'):
        case ('E'):
        E++; 
        break;
          case ('f'):
        case ('F'):
        F++; 
        break;
          case ('g'):
        case ('G'):
        G++; 
        break;
          case ('h'):
        case ('H'):
        H++; 
        break;
          case ('i'):
        case ('I'):
        I++; 
        break;
          case ('j'):
        case ('J'):
        J++; 
        break;
          case ('k'):
        case ('K'):
        K++; 
        break;
          case ('l'):
        case ('L'):
        L++; 
        break;
          case ('m'):
        case ('M'):
        M++; 
        break;
          case ('n'):
        case ('N'):
        N++; 
        break;
          case ('o'):
        case ('O'):
        O++; 
        break;
          case ('p'):
        case ('P'):
        P++; 
        break;
          case ('q'):
        case ('Q'):
        Q++; 
        break;
          case ('r'):
        case ('R'):
        R++; 
        break;
          case ('s'):
        case ('S'):
        S++; 
        break;
          case ('t'):
        case ('T'):
        T++; 
        break;
          case ('u'):
        case ('U'):
        U++; 
        break;
          case ('v'):
        case ('V'):
        V++; 
        break;
          case ('w'):
        case ('W'):
        W++; 
        break;
          case ('x'):
        case ('X'):
        X++; 
        break;
          case ('y'):
        case ('Y'):
        Y++; 
        break;
          case ('z'):
        case ('Z'):
        Z++; 
        break;
        default: Symbol++;
       
    }   
    i++;  
    }
   
    if(A!=0){
    printf("A = %d\n",A);
    }
    if(B!=0){
    printf("B = %d\n",B);
    }
    if(C!=0){
    printf("C = %d\n",C);
    }
    if(D!=0){
    printf("D = %d\n",D);
    }
    if(E!=0){
    printf("E = %d\n",E);
    }
    if(F!=0){
    printf("F = %d\n",F);
    }
    if(G!=0){
    printf("G = %d\n",G);
    }
    if(H!=0){
    printf("H = %d\n",H);
    }
    if(I!=0){
    printf("I = %d\n",I);
    }
    if(J!=0){
    printf("J = %d\n",J);
    }
    if(K!=0){
    printf("K = %d\n",K);
    }
    if(L!=0){
    printf("L = %d\n",L);
    }
    if(M!=0){
    printf("M = %d\n",M);
    }
     if(N!=0){
    printf("N = %d\n",N);
    }
     if(O!=0){
    printf("O = %d\n",O);
    }
     if(P!=0){
    printf("P = %d\n",P);
    }
     if(Q!=0){
    printf("Q = %d\n",Q);
    }
     if(R!=0){
    printf("R = %d\n",R);
    }
     if(S!=0){
    printf("S = %d\n",S);
    }
     if(T!=0){
    printf("T = %d\n",T);
    }
     if(U!=0){
    printf("U = %d\n",U);
    }
     if(V!=0){
    printf("V= %d\n",V);
    }
     if(W!=0){
    printf("W = %d\n",W);
    }
     if(X!=0){
    printf("X= %d\n",X);
    }
     if(Y!=0){
    printf("Y = %d\n",Y);
    }
     if(Z!=0){
    printf("Z = %d\n",Z);
    }

    if(Symbol!=0){
   printf("Symbol = %d ",Symbol);
   }
   
}