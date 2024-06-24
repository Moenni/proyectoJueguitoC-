#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
///Prototipo
void menu();
///Desarrollo de funciones
void menu(){
    int opcion;
    string nombre;
    while(true){
        system("cls");
        if(nombre!=""){
          cout<<"Hola "<<nombre<<endl;
        }
        cout<<"1-Cargar Nombre: "<<endl;
        cout<<"2-Jugar Solo"<<endl;
        cout<<"3-Jugar Doble"<<endl;
        cout<<"0-Salir "<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opcion;///CIN ANTERIOR


        switch(opcion){
        case 1:
            cout<<"Ingrese nombre: "<<endl;
            ///cin>>nombre;
            cin.ignore();///IGNORA EL ENTER DEL CIN ANTERIOR
            getline(cin,nombre);
            ///cout<<"Ingrese apellido: "<<endl;
           /// cin>>apellido;

            break;
        case 2:
            int puntos;
            puntos=jugar();
            system("cls");
            cout<<"Bien ! \n El jugador " <<nombre;
            cout<<" obtuvo "<<puntos<< " puntos "<<endl;
            system("pause");
            break;
        case 3:

             for(int i=1;i<=2;i++){


            puntos=jugar();
            system("cls");
            cout<<"Bien ! \n El jugador " <<nombre;
            cout<<" obtuvo "<<puntos<< " puntos "<<endl;
            system("pause");

            cout<<"Ingrese nombre: "<<endl;
            cin.ignore();
            getline(cin,nombre);
            break;
             }
            break;
        case 0:
            return;
        }

    }
}

#endif // MENU_H_INCLUDED
