#include<iostream>
#include<cstdlib>
#include<chrono>
#include<fstream>

//ZMIENNE GLOBALNE
unsigned long long loop_counter,changes_counter,I;

//DEKLARACJE FUNKCJI
void filltab(double *,unsigned long long N);
void  bubbleSortPerf(double *,unsigned long long );
void  bubbleSort(double *,unsigned long long );
void printArray(double *,unsigned long long );
void coppyArray(double *,double *,unsigned long long );
void bubbleSortReverse(double *,unsigned long long );
void FillFile(double *tab,unsigned long long N);
void loadFromFile(double *t);
