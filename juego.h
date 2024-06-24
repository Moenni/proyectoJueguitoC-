#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
///Prototipo
int jugar();
int lanzar();

///Desarrollo
int jugar(){
    int numero;
    int intentos=0;

    while(true){
        intentos++;
        numero = lanzar();
        cout<<"Numero elegido: "<<numero<<endl;
        if(numero==5){
            cout<<"Ganaste!!!"<<endl;
            system("pause");
            return intentos;
        }
        system("pause");

    }
    intentos=0;
}
int lanzar(){
    return rand()%5+1;
}


#endif // JUEGO_H_INCLUDED
