#include <iostream>
#include <vector>
#include <stdlib.h> // Necesario para la función system("pause")
#include <cstdlib> // Necesario para la función rand()
#include <fstream>
#include <string>

using namespace std;

int main() {
	
    const int Tam_Cache = 4; // Tamaño de la caché
    const int Num_Con = 2; // Número de conjuntos en la caché
    const int Num_Blo_Con = 2; // Número de bloques por conjunto
    const int Tam_Blo = 1; // Tamaño de bloque en palabras
	int opcion, dir1, dir2, dir3, fallo1 = 0, fallo2 = 0, fallo3 = 0;
	ifstream archivo;
	string linea;
	
	vector<int> cache(Tam_Cache, -1); // Inicializamos la caché con -1 para indicar que está vacía
    vector<vector<int>> cache2(Num_Con, vector<int>(Num_Blo_Con, -1)); // Inicializamos la caché con -1 para indicar que está vacía
	vector<int> cache3(Tam_Cache, -1); // Inicializamos la caché con -1 para indicar que está vacía
	
	archivo.open("SecuenciaDir.txt",ios::in);
	
	cout << "\nSELECCIONE UNA OPCION:" << endl;
	cout << "\n______________________" << endl;
	cout << "\n1. Cache de correspondencia directa" <<endl;
	cout << "\n2. Cache asociativa por conjuntos de dos vias" <<endl;
	cout << "\n3. Cache completamente asociativa\n" <<endl;
	cin >> opcion;

	switch(opcion){
		
		case 1:
			
			cout << "\n\nCACHE DE CORRESPONDECIA DIRECTA" <<endl;
			cout << "\n_______________________________" <<endl;
			cout << "\nSecuencia de direcciones de bloque:\n" << endl;
			
			//CACHE DE CORRESPONDENCIA DIRECTA
			
  			while(!archivo.eof()){
  				
				getline(archivo,linea);
				cout<<linea<<endl;
				dir1 = stoi(linea);
								
        		cout << "___" << endl;
        
        		int ubicacion1 = dir1 % Tam_Cache; // Calculamos el índice en la caché para la dirección de bloque

        		if (cache[ubicacion1] != dir1) { // Si el bloque no está en la caché
        		
            		cache[ubicacion1] = dir1; // Reemplazamos el bloque en la ubicación calculada
            		fallo1++; // Aumentamos el contador de fallos
        		}
			}
			cout << "\nEl numero total de fallos en la cache de correspondencia directa es: " << fallo1<<"\n"<< endl;
			
		break;
		
		case 2:
			
			cout << "\n\nCACHE ASOCIATIVA POR CONJUNTOS DE DOS VIAS" <<endl;
			cout << "\n_______________________________\n" <<endl;	
			cout << "\nSecuencia de direcciones de bloque:\n" << endl;
			
			//CACHE DE ASOCIATIVA POR CONJUNTOS DE DOS VIAS	
			
			while(!archivo.eof()){
				
				getline(archivo,linea);
				cout<<linea<<endl;
				dir2 = stoi(linea);
        		
				cout << "___" << endl;
				
        		
        		int ubicacion2 = (dir2 / Tam_Blo) % Num_Con; // Calculamos el índice del conjunto para la dirección de bloque

        		bool band1 = false;
        		
        		for (int i = 0; i < Num_Blo_Con; i++) {
        			
           			if (cache2[ubicacion2][i] == dir2) { // Comprobamos si el bloque está en el conjunto
                		band1 = true;
                		break;
            		}
        		}

       			if (!band1) { // Si el bloque no está en el conjunto
       			
            		int remplazar_ubicacion2 = rand() % Num_Blo_Con; // Elegimos aleatoriamente un bloque para reemplazar
            		cache2[ubicacion2][remplazar_ubicacion2] = dir2; // Reemplazamos el bloque en la ubicación calculada
            		fallo2++; // Aumentamos el contador de fallos
        		}
   			}	

    		cout << "\nEl numero total de fallos en la cache asociativa por conjuntos de dos vias es: " << fallo2<<"\n"<< endl;
				
		break;	
		
		case 3:
			
			cout << "\n\nCACHE COMPLETAMENTE ASOCIATIVA" <<endl;
			cout << "\n_______________________________" <<endl;
			cout << "\nSecuencia de direcciones de bloque:\n" << endl;
			
			//CACHE COMPLETAMENTE ASOCIATIVA
			
			while(!archivo.eof()){
				
				getline(archivo,linea);
				cout<<linea<<endl;
				dir3 = stoi(linea);
        		
        		cout << "___" << endl;

        		bool band2 = false;
        		
        		for (int i = 0; i < Tam_Cache; i++) {
        			
            		if (cache3[i] == dir3) { // Comprobamos si el bloque está en la caché
               			band2 = true;
                		break;
            		}	
            		
        		}

        		if (!band2) { // Si el bloque no está en la caché
        		
            		int remplazar_ubicacion3 = rand() % Tam_Cache; // Elegimos aleatoriamente un bloque para reemplazar
            		cache3[remplazar_ubicacion3] = dir3; // Reemplazamos el bloque en la ubicación calculada
            		fallo3++; // Aumentamos el contador de fallos
            		
        		}
    		}

   			cout << "\nEl numero total de fallos en la cache completamente asociativa es: " << fallo3 <<"\n"<< endl;
   			
		break;
		
		default:
			
			cout << "OPCION INVALIDA." << endl;
			system("pause");
			return 0;
					
	}
    
    archivo.close();
    
	system("pause");
    return 0;
}
