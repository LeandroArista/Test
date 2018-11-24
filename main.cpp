#include <iostream>
#include "Punto.h"
#include "Segmento.h"
#include "Lista.h"
#include <cstdlib>
#include "Conjunto.h"
#include "MergeSort.h"
#include "AdministradorFiguras.h"
#include "Figura.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Heap.h"
#include "Quicksort.h"
#include "HeapSort.h"
using namespace std;

void generarLista(Lista<Punto> & puntos, int n){
    for (int i=1; i<= n;i++){
        double x = rand() % 100;
        double y = rand() % 100;
        Punto aux(x,y);
        puntos.agregarf(aux);
    }
}

void generarSegmentos(Lista<Punto>  puntos, Lista<Segmento> & segmentos, int n){
    int cont=0;
    for (int i=1;i<=n;i++){
        cont++;
        if (cont == 2){
            Punto aux1=puntos.getElem(i);
            Punto aux2=puntos.getElem(i-1);
            segmentos.agregarf(Segmento(aux1,aux2));
            cont=0;
        }
    }
}
double sumaSegmentos(Lista<Segmento> segmento){
    double acum=0;
    for (int i=1;i<=segmento.longitud();i++){
        acum+=segmento.getElem(i).longitud();
    }
    return acum;
}

void eliminarMenores(Conjunto<int> & conj, int n){
    int tam=conj.longitud();
    int arr[tam];
    for (int i=1;i<=tam;i++){
        arr[i-1]=conj.recuperarE(i);
    }
    MergeSort<int> ord;
    ord.ordenar(arr,tam);
    for (int i=1;i<=n;i++){
        conj.eliminarElem(i);
    }
}
void prueba(int arr[],int tam){
    MergeSort<int> ord;
    ord.ordenar(arr,tam);
    for(int i=0;i<tam;i++){
     cout<<arr[i]<<"-";
    }
    cout<<endl;
}
void prueba2(int arr[],int tam){
    Quicksort<int> ord;
    ord.ordenar(arr,tam);
    for(int i=0;i<tam;i++){
     cout<<arr[i]<<"-";
    }
    cout<<endl;
}
void prueba3(int arr[],int tam){
    Heap<int> h(arr,tam);
    HeapSort<int> hip( &h );
    int * res;
    hip.ordenar( &h, res);
}

void semana2A(){
    Lista<Punto> puntos;
    Lista<Segmento> segmentos;
    int n=12;
    generarLista(puntos,n);/// genera 12 puntos
    cout<<"Puntos aleatorios"<<endl;
    for (int i=1;i<=n;i++){
        cout<<puntos.getElem(i)<<endl;
    }
    generarSegmentos(puntos,segmentos,n/2); ///genera n/2 segmentos
    double suma=sumaSegmentos(segmentos);
    cout<<"Cantidad Segmentos "<<segmentos.longitud()<<endl;
    for (int i=1;i<=segmentos.longitud();i++){
        cout<<(segmentos.getElem(i)).extremo1()<<" ---- "<<segmentos.getElem(i).extremo2()<<endl;
    }
    cout << "Suma Segmentos:  "<<suma << endl;
}
void semana2B(){
    Conjunto <int> conj;
    conj.agregarC(7);
    conj.agregarC(2);
    conj.agregarC(3);
    conj.agregarC(5);
    conj.agregarC(8);
    conj.agregarC(1);
    cout<<" Conjunto de n elementos"<<endl;
    for (int i=1;i<=conj.longitud();i++){
        cout<<conj.recuperarE(i)<<" , ";
    }cout<<endl;

    int tam=conj.longitud()/2;
    eliminarMenores(conj,tam);
    cout<<" Eliminar menores del conjunto"<<endl;
    for (int i=1;i<=conj.longitud();i++){
        cout<<conj.recuperarE(i)<<" , ";
    }cout<<endl;
    AdministradorFiguras figura2d;
    Figura * f1= new Triangulo(Punto(4,0),Punto(6,0),Punto(5,7),Punto(4,0),"rojo");
    figura2d.agregarFigura(f1);

    Figura * f2= new Triangulo(Punto(6.5,0),Punto(8.5,0),Punto(7.5,7),Punto(6.5,0),"rojo");
    figura2d.agregarFigura(f2);

    Figura * f3= new Triangulo(Punto(9,0),Punto(11,0),Punto(10,7),Punto(9,0),"rojo");
    figura2d.agregarFigura(f3);

    Figura * f4= new Triangulo(Punto(11.5,0),Punto(13.5,0),Punto(12.5,7),Punto(11.5,0),"rojo");
    figura2d.agregarFigura(f4);

    Figura * f5= new Triangulo(Punto(0,7.5),Punto(4.5,7.5),Punto(5,14.5),Punto(0,7.5),"verde");
    figura2d.agregarFigura(f5);

    Figura * f6= new Triangulo(Punto(13.5,7.5),Punto(18.5,7.5),Punto(13.5,14.5),Punto(13.5,7.5),"verde");
    figura2d.agregarFigura(f6);

    Figura * f7= new Cuadrado(Punto(5,7.5),8,"amarillo");
    figura2d.agregarFigura(f7);

    Figura * f8= new Cuadrado(Punto(5.5,13.5),2,"verde");
    figura2d.agregarFigura(f8);

    Figura * f9= new Cuadrado(Punto(8,13.5),2,"verde");
    figura2d.agregarFigura(f9);

    Figura * f10= new Cuadrado(Punto(10.5,13.5),8,"verde");
    figura2d.agregarFigura(f10);

    Figura * f11= new Cuadrado(Punto(5,16.5),8,"amarillo");
    figura2d.agregarFigura(f11);

    Figura * f12= new Circulo(Punto(8.75,20.5),3.5,"celeste");
    figura2d.agregarFigura(f12);

    Figura * f13= new Triangulo(Punto(5,25.5),Punto(12.5,25.5),Punto(8.75,34),Punto(5,25.5),"rojo");
    figura2d.agregarFigura(f13);

    cout<<"Lista de Figuras"<<endl;
    for (int i=1;i<=figura2d.longitud();i++){
        (*figura2d.getFigura(i)).mostrar();
    }
}

void semana3A(){
    int arr[]={-1,5,8,6,1,4,7,3,9,2,0};
    int n = sizeof(arr)/sizeof(*arr)-1;
    Heap<int> h(arr,n);
    cout<<"Heap"<<endl;
        h.mostrar();
    cout<<"resultado"<<endl;
    HeapSort<int> hip( &h );
    int * resultado;
    hip.ordenar(resultado);

}

void semana3B(int entrada, int ordenamiento){
     int arreglo1[entrada+1];
     arreglo1[0]=-1;
     for(int i=1;i<entrada+1;i++){
        int ra= rand()% (100);
        arreglo1[i]=ra;
     }
     if (ordenamiento==1) ///MERGESORT
        prueba(arreglo1,entrada);
     if (ordenamiento==2) ///QUICKSORT
        prueba2(arreglo1,entrada);
     if (ordenamiento==3) ///HEAPSORT
        prueba3(arreglo1,entrada);
}
int main()
{
    //semana2A();
    ///------------------------
   // semana2B();
    ///------------------------
    //semana3A();
    ///------------------------
    int entrada;
    cout<<"ingrese tamaño arreglo tamaño: "<<endl;
    cin>>entrada;
////    semana3B(entrada,1); ///merge
//    //semana3B(entrada,2); ///quick
    semana3B(entrada,3); ///heap

     ///-------------------------------------
    return 0;
}

