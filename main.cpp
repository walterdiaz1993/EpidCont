#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
int opc,opc2,opcMuertes;
string depa,muni;

void seleccion(int Permiso){
		int opc1;
	cout<<"Seleccione un Departamento\n";
	cout<<"1. Islas de la Bah\241a\t 2. Cort\202s\t\t 3. Atl\240ntida\t\t 4. Col\242n\n"<<
		  "5. Gracias a Dios\t 6. Cop\240n\t\t 7. Santa B\240rbara\t 8. Yoro\n"<<
		  "9. Olancho\t\t 10. Ocotepeque\t\t 11. Lempira\t\t 12. Intibuc\240\n"<<
		  "13. Comayagua\t\t 14. Francisco Moraz\240n\t 15. El Para\241so\t\t 16. La Paz\n"<<
		  "17. Valle\t\t 18. Choluteca\n";
	cin>>opc;
	opcMuertes=opc;
	if(Permiso==1){
	
	switch(opc){
		case 1: depa="ISLAS_DE_LA_BAHIA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. San Juan\t 2. Guanaja\t\t 3. Jose Santos Guardiola\t\t 4. Utila\n";
		  		  cin>>opc1;
		  		  switch(opc1){
		  		  	case 1: muni="San_Juan";break;
		  		  	case 2: muni="Guanaja";break; 
		  		  	case 3: muni="Jose_Santos_Guardiola";break; 
		  		  	case 4: muni="Utila";break; 
		  		  	default: cout<<"Opcion no valida";break;
					}		  		  	
		break;
		case 2: depa="CORTES";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. San Pedro Sula\t 2. Choloma\t\t 3. Omoa\t\t 4. Pimienta\n"<<
		  	"5. Potrerillos\t\t 6. Puerto Cortes\t\t 7. San Antonio de Cortes\t 8. San Francisco de Yojoa\n"<<
		  	"9. San Manuel\t\t 10. Santa Cruz de Yojoa\t\t 11. Villanueva\t\t 12. La Lima\n";
		  		cin>>opc1;
		  		  switch(opc1){
		  		  	case 1: muni="San_Pedro_Sula";break;
		  		  	case 2: muni="Choloma";break;
		  		  	case 3: muni="Omoa";break;
					case 4: muni="Pimienta";break; 
		  		  	case 5: muni="Potrerillos";break; 
		  		  	case 6: muni="Puerto_Cortes";break;
					case 7: muni="San_Antonio";break;
					case 8: muni="San_Francisco_de_Yojoa";break;
					case 9: muni="San_Manuel";break;
					case 10: muni="Santa_Cruz_de_Yojoa";break;
					case 11: muni="Villanueva";break;
					case 12: muni="La_Lima";break;	 
		  		  	default: cout<<"Opcion no valida";break;
					}
		
		break;
		case 3: depa="ATLANTIDA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. La Ceiba\t 2. Tela\t\t 3. Jutiapa\t\t 4. La Masica\n"<<
		  	"5. San Francisco\t\t 6. Arizona\t\t 7. Esparta\t 8. El Porvenir\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="La_Ceiba";break;
					case 2: muni="Tela";break;
					case 3: muni="Jutiapa";break;
					case 4: muni="La_Masica";break;
					case 5: muni="San_Francisco";break;
					case 6: muni="Arizona";break;
					case 7: muni="Esparta";break;
					case 8: muni="El_Porvenir";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 4: depa="COLON";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Trujillo\t 2. Balfate\t\t 3. Iriona\t\t 4. Limón\n"<<
		  	"5. Saba\t\t 6. Santa Fe\t\t 7. Santa Rosa de Aguán\t 8. Sonaguera\n"<<
		  	"9. Tocoa\t\t 10. Bonito Oriental\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Trujillo";break;
					case 2: muni="Balfate";break;
					case 3: muni="Iriona";break;
					case 4: muni="Limón";break;
					case 5: muni="Saba";break;
					case 6: muni="Santa_Fe";break;
					case 7: muni="Santa_Rosa_de_Aguán";break;
					case 8: muni="Sonaguera";break;
					case 9: muni="Tocoa";break;
					case 10: muni="Bonito_Oriental";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 5: depa="GRACIAS_A_DIOS";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Puerto Lempira\t 2. Brus Laguna\t\t 3. Ahuas\t\t 4. Juan Francisco Bulnes\n"<<
		  	"5. Ramon Villeda Morales\t\t 6. Wampusirpe\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Puerto_Lempira";break;
					case 2: muni="Brus_Laguna";break;
					case 3: muni="Ahuas";break;
					case 4: muni="Juan_Francisco_Bulnes";break;
					case 5: muni="Ramon_Villeda_Morales";break;
					case 6: muni="Wampusirpe";break;
					default: cout<<"Opcion no valida";break;
				}
			
			
		break;
		case 6: depa="COPAN";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Santa Rosa de Copan\t 2. Cabañas\t\t 3. Concepcion\t\t 4. Copan Ruinas\n"<<
		  	"5. Corquin\t\t 6. Cucuyagua\t\t 7. Dolores\t 8. Dulce Nombre\n"<<
		  	"9. El Paraiso\t\t 10. Florida\t\t 11. La Jigua\t\t 12. La Union\n"<<
		  	"13. Nueva Arcadia\t\t 14. San Agustin\t 15. San Antonio\t\t 16. San Jeronimo\n"<<
		  	"17. San Jose\t\t 18. San Juan de Opoa\t\t 19. San Nicolas\t\t 20. San Pedro\t\t 21. Santa Rita\t\t 22. Trinidad de Copan\n"<<
		  	"23. Veracruz\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Santa_Rosa_de_Copan";break;
					case 2: muni="Cabañas";break;
					case 3: muni="Concepcion";break;
					case 4: muni="Copan_Ruinas";break;
					case 5: muni="Corquin";break;
					case 6: muni="Cucuyagua";break;
					case 7: muni="Dolores";break;
					case 8: muni="Dulce_Nombre";break;
					case 9: muni="El_Paraiso";break;
					case 10: muni="Florida";break;
					case 11: muni="La_Jigua";break;
					case 12: muni="La_Union";break;
					case 13: muni ="Nueva_Arcadia";break; 
					case 14: muni="San_Agustin";break;
					case 15: muni="San_Antonio";break;
					case 16: muni="San_Jeronimo";break;
					case 17: muni="San_Jose";break;
					case 18: muni="San_Juan_de_Opoa";break;
					case 19: muni="San_Nicolas";break;
					case 20: muni="San_Pedro";break;
					case 21: muni="Santa_Rita";break;
					case 22: muni="Trinidad_de_Copan";break;
					case 23: muni="Veracruz";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 7: depa="SANTA_BARBARA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Santa Barbara\t 2. Arada\t\t 3. Atima\t\t 4. Azacualpa\n"<<
		  	"5. Ceguaca\t\t 6. Concepcion del Norte\t\t 7. Concepcion del Sur\t 8. Chinda\n"<<
		  	"9. El Nispero\t\t 10. Gualala\t\t 11. Ilama\t\t 12. Las Vegas\n"<<
		  	"13. Macuelizo\t\t 14. Naranjito\t 15. Nuevo Celilac\t\t 16. Nueva Frontera\n"<<
		  	"17. Petoa\t\t 18. Proteccion\t\t 19. Quimistan\t\t 20. San Francisco de Ojuera\t\t 21. San Jose de las Colinas\t\t 22. San Luis\n"<<
		  	"23. San Marcos\t\t 24. San Nicolas\t\t 25. San Pedro Zacapa\t\t 26. San Vicente Centenario\t\t 27. Santa Rita\t\t 28. Trinidad\n";
		  	cin>>opc1;
		  	switch(opc1){
			  case 1: muni="Santa_Barbara";break;
			  case 2: muni="Arada";break;
			  case 3: muni="Atima";break;
			  case 4: muni="Azacualpa";break;
			  case 5: muni="Ceguaca";break;
			  case 6: muni="Concepcion_del_Norte";break;
			  case 7: muni="Concepcion_del_Sur";break;
			  case 8: muni="Chinda";break;
			  case 9: muni="El_Nispero";break;
			  case 10: muni="Gualala";break;
			  case 11: muni="Ilama";break;
			  case 12: muni="Las_Vegas";break;
			  case 13: muni="Macuelizo";break;
			  case 14: muni="Naranjito";break;
			  case 15: muni="Nuevo_Celilac";break;
			  case 16: muni="Nueva_Frontera";break;
			  case 17: muni="Petoa";break;
			  case 18: muni="Proteccion";break;
			  case 19: muni="Quimistan";break;
			  case 20: muni="San_Francisco_de_Ojuera";break;
			  case 21: muni="San_Jose_de_las_Colina";break;
			  case 22: muni="San_Luis";break;
			  case 23: muni="San_Marcos";break;
			  case 24: muni="San_Nicolas";break;
			  case 25: muni="San_Pedro_Zacapa";break;
			  case 26: muni="San_Vicente_Centenario";break;
			  case 27: muni="Santa_Rita";break;
			  case 28: muni="Trinidad";break;
			  default: cout<<"Opcion No Valida";break;
			  }
		break;
		case 8: depa="YORO";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Yoro\t 2. Arenal\t\t 3. El Negrito\t\t 4. El Progreso\n"<<
		  	"5. Jocon\t\t 6. Morazan\t\t 7. Olanchito\t\t 8. Santa Rita\n"<<
		 	 "9. Sulaco\t\t 10. Victoria\t\t 11. Yorito\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Yoro";break;
					case 2: muni="Arenal";break;
					case 3: muni="El_Negrito";break;
					case 4: muni="El_Progreso";break;
					case 5: muni="Jocon";break;
					case 6: muni="Morazan";break;
					case 7: muni="Olanchito";break;
					case 8: muni="Santa_Rita";break;
					case 9: muni="Sulaco";break;
					case 10: muni="Victoria";break;
					case 11: muni="Yorito";break;
					
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 9: depa="OLANCHO";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Juticalpa\t 2. Campamento\t\t 3. Catacamas\t\t 4. Concordia\n"<<
		  	"5. Dulce Nombre de Culmi\t\t 6. El Rosario\t\t 7. Esquipulas del Norte\t 8. Gualaco\n"<<
		 	"9. Guarizama\t\t 10. Guata\t\t 11. Guayape\t\t 12. Jano\n"<<
		  	"13. La Union\t\t 14. Mangulile\t 15.Manto\t\t 16. Salama\n"<<
		  	"17. San Esteban\t\t 18. San Francisco de Becerra\t\t 19. San Francisco de la Paz\t\t 20. Santa Maria del Real\t\t 21. Silca\t\t 22. Yocon\n"<<
		  	"23. Patuca\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Juticalpa";break;
					case 2: muni="Campamento";break;
					case 3: muni="Catacamas";break;
					case 4: muni="Concordia";break;
					case 5: muni="Dulce_Nombre_de_Culmi";break;
					case 6: muni="El_Rosario";break;
					case 7: muni="Esquipulas_del_Norte";break;
					case 8: muni="Gualaco";break;
					case 9: muni="Guarizama";break;
					case 10: muni="Guata";break;
					case 11: muni="Guayape";break;
					case 12: muni="Jano";break;
					case 13: muni="La_Union";break;
					case 14: muni="Mangulile";break;
					case 15: muni="Manto";break;
					case 16: muni="Salama";break;
					case 17: muni="San_Esteban";break;
					case 18: muni="San_Francisco_de_Becerra";break;
					case 19: muni="San_Francisco_de_la_Paz";break;
					case 20: muni="Santa Maria del Real";break;
					case 21: muni="Silca";break;
					case 22: muni="Yocon";break;
					case 23: muni="Patuca";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 10: depa="OCOTEPEQUE";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Ocotepeque\t 2. Belen Gualcho\t\t 3. Concepcion\t\t 4. Dolores Merendon\n"<<
		  	"5. Fraternidad\t\t 6. La Encarnacion\t\t 7. La Labor\t 8. Lucerna\n"<<
		  	"9. Mercedes\t\t 10. San Fernando\t\t 11. San Francisco del Valle\t\t 12. San Jorge\n"<<
		  	"13. San Marcos\t\t 14. Santa Fe\t 15. Sensenti\t\t 16. Sinuapa\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Ocotepeque";break;
					case 2: muni="Belen_Gualcho";break;
					case 3: muni="Concepcion";break;
					case 4: muni="Dolores_Merendon";break;
					case 5: muni="Fraternidad";break;
					case 6: muni="La_Encarnacion";break;
					case 7: muni="La_Labor";break;
					case 8: muni="Lucerna";break;
					case 9: muni="Mercedes";break;
					case 10: muni="San_Fernando";break;
					case 11: muni="San_Francisco_del_Valle";break;
					case 12: muni="San_Jorge";break;
					case 13: muni="San_Marcos";break;
					case 14: muni="Santa_Fe";break;
					case 15: muni="Sensenti";break;
					case 16: muni="Sinuapa";break;					
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 11: depa="LEMPIRA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Gracias\t\t 2.Belen\t\t 3.Candelaria\t 4. Cololaca\t\t 5. Erandique\t\t 6. Gualcince\n"<<
		  	"7. Guarita\t\t 8. La Campa\t\t 9. La Iguala\t 10. Las Flores\n"<<
		  	"11. La Union\t\t 12. La Virtud\t\t 13. Lepaera\t\t 14. Mapulaca\n"<<
		  	"15. Piraera\t\t 16. San Andres\t 17. San Francisco\t\t 18. San Juan Guarita\n"<<
		  	"19. San Manuel Colohete\t\t 20. San Rafael\t\t 21. San Sebastian\t\t 22. Santa Cruz\t\t 23. Talgua\t\t 24. Tambla\n"<<
		  	"25. Tomala\t\t 26. Valladolid\t\t 27. Virginia\t\t 28. San Marcos de Caiquin\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Gracias";break;
					case 2: muni="Belen";break;
					case 3: muni="Candelaria";break;
					case 4: muni="Cololaca";break;
					case 5: muni="Erandique";break;
					case 6: muni="Gualcince";break;
					case 7: muni="Guarita";break;
					case 8: muni="La_Campa";break;
					case 9: muni="La_Iguala";break;
					case 10: muni="Las_Flores";break;
					case 11: muni="La_Union";break;
					case 12: muni="La_Virtud";break;
					case 13: muni="Lepaera";break;
					case 14: muni="Mapulaca";break;
					case 15: muni="Piraera";break;
					case 16: muni="San_Andres";break;
					case 17: muni="San_Francisco";break;
					case 18: muni="San_Juan_Guarita";break;
					case 19: muni="San_Manuel_Colohete";break;
					case 20: muni="San_Rafael";break;
					case 21: muni="San_Sebastian";break;
					case 22: muni="Santa_Cruz";break;
					case 23: muni="Talgua";break;
					case 24: muni="Tambla";break;
					case 25: muni="Tomala";break;
					case 26: muni="Valladolid";break;
					case 27: muni="Virginia";break;
					case 28: muni="San_Marcos_de_Caiquin";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 12: depa="INTIBUCA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. La Esperanza\t 2. Camasca\t\t 3. Colomoncagua\t\t 4. Concepcion\n"<<
		  	"5. Dolores\t\t 6. Intibuca\t\t 7. Jesus de Otoro\t 8. Magdalena\n"<<
		  	"9. Masaguara\t\t 10. San Antonio\t\t 11. San Isidro\t\t 12. San Juan\n"<<
		  	"13. San Marcos de la Sierra\t\t 14. San Miguel Guancapla\t 15. Santa Lucia\t\t 16. Yamaranguila\n"<<
		  	"17. San Francisco de Opalaca\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="La_Esperanza";break;
					case 2: muni="Camasca";break;
					case 3: muni="Colomoncagua";break;
					case 4: muni="Concepción";break;
					case 5: muni="Dolores";break;
					case 6: muni="Intibuca";break;
					case 7: muni="Jesus_de_Otoro";break;
					case 8: muni="Magdalena";break;
					case 9: muni="Masaguara";break;
					case 10: muni="San_Antonio";break;
					case 11: muni="San_Isidro";break;
					case 12: muni="San_Juan";break;
					case 13: muni="Marcos_de_la_Sierra";break;
					case 14: muni="San_Miguel_Guancapla";break;
					case 15: muni="Santa_Lucia";break;
					case 16: muni="Yamaranguila";break;
					case 17: muni="San_Francisco_de_Opalaca";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 13: depa="COMAYAGUA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Comayagua\t 2. Ajuterique\t\t 3. El Rosario\t\t 4. Esquías\n"<<
		  	"5. Humuya\t\t 6. La libertad\t\t 7. Lamaní\t 8. La Trinidad\n"<<
		  	"9. Lejamani\t\t 10. Meambar\t\t 11. Minas de Oro\t\t 12. Ojos de Agua\n"<<
		  	"13. San Jerónimo (Honduras)\t\t 14. San José de Comayagua\t 15. San José del Potrero\t\t 16. San Luis\n"<<
		  	"17. San Sebastián\t\t 18. Siguatepeque\t\t 19. Villa de San Antonio\t\t 20. Las Lajas\t\t 21. Taulabé\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Comayagua";break;
					case 2: muni="Ajuterique";break;
					case 3: muni="El_Rosario";break;
					case 4: muni="Esquías";break;
					case 5: muni="Humuya";break;
					case 6: muni="La_libertad";break;
					case 7: muni="Lamaní";break;
					case 8: muni="La_Trinidad";break;
					case 9: muni="Lejamani";break;
					case 10: muni="Meambar";break;
					case 11: muni="Minas_de_Oro";break;
					case 12: muni="Ojos_de_Agua";break;
					case 13: muni="San_Jerónimo";break;
					case 14: muni="San_José_de_Comayagua";break;
					case 15: muni="San_José_del_Potrero";break;
					case 16: muni="San_Luis";break;
					case 17: muni="San_Sebastián";break;
					case 18: muni="Siguatepeque";break;
					case 19: muni="Villa_de_San_Antonio";break;
					case 20: muni="Las_Lajas";break;
					case 21: muni="Taulabé";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 14: depa="FRANCISCO_MORAZAN";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Distrito Central\t 2. Alubarén\t\t 3. Cedros\t\t 4. Curarén\n"<<
		  	"5. El Porvenir\t\t 6. Guaimaca\t\t 7. La Libertad\t 8. La Venta\n"<<
		  	"9. Lepaterique\t\t 10. Maraita\t\t 11. Marale\t\t 12. Nueva Armenia\n"<<
		  	"13. Ojojona\t\t 14. Orica\t 15. Reitoca\t\t 16. Sabanagrande\n"<<
		  	"17. San Antonio de Oriente\t\t 18. San Buenaventura\t\t 19. San Ignacio\t\t 20. San Juan de Flores\t\t 21. San Miguelito\t\t 22. Santa Ana\n"<<
		  	"23. Santa Lucía\t\t 24. Talanga\t\t 25. Tatumbla\t\t 26. Valle de Ángeles\t\t 27. Villa de San Francisco\t\t 28. Vallecillo\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Distrito_Central";break;
					case 2: muni="Alubarén";break;
					case 3: muni="Cedros";break;
					case 4: muni="Curarén";break;
					case 5: muni="El_Porvenir";break;
					case 6: muni="Guaimaca";break;
					case 7: muni="La_Libertad";break;
					case 8: muni="La_Venta";break;
					case 9: muni="Lepaterique";break;
					case 10: muni="Maraita";break;
					case 11: muni="Marale";break;
					case 12: muni="Nueva_Armenia";break;
					case 13: muni="Ojojona";break;
					case 14: muni="Orica";break;
					case 15: muni="Reitoca";break;
					case 16: muni="Sabanagrande";break;
					case 17: muni="San_Antonio_de_Oriente";break;
					case 18: muni="San_Buenaventura";break;
					case 19: muni="San_Ignacio";break;
					case 20: muni="San_Juan_de_Flores";break;
					case 21: muni="San_Miguelito";break;
					case 22: muni="Santa_Ana";break;
					case 23: muni="Santa_Lucía";break;
					case 24: muni="Talanga";break;
					case 25: muni="Tatumbla";break;
					case 26: muni="Valle_de_Ángeles";break;
					case 27: muni="Villa_de_San_Francisco";break;
					case 28: muni="Vallecillo";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 15: depa="EL_PARAISO";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Yuscarán\t 2. Alauca\t\t 3. Danli\t\t 4. El Paraiso\n"<<
		  	"5. Guinope\t\t 6. Jacaleapa\t\t 7. Liure\t 8. Moroceli\n"<<
		  	"9. Oropoli\t\t 10. Potrerillos\t\t 11. San Antonio de Flores\t\t 12. San Lucas\n"<<
		  	"13. San Matias\t\t 14. Soledad\t 15. Teupasenti\t\t 16. Texiguat\n"<<
		  	"17. Vado Ancho\t\t 18. Yauyupe\t\t 19. Trojes\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Yuscarán";break;
					case 2: muni="Alauca";break;
					case 3: muni="Danli";break;
					case 4: muni="El_Paraiso";break;
					case 5: muni="Guinope";break;
					case 6: muni="Jacaleapa";break;
					case 7: muni="Liure";break;
					case 8: muni="Moroceli";break;
					case 9: muni="Oropoli";break;
					case 10: muni="Potrerillos";break;
					case 11: muni="San_Antonio_de_Flores";break;
					case 12: muni="San_Lucas";break;
					case 13: muni="San_Matias";break;
					case 14: muni="Soledad";break;
					case 15: muni="Teupasenti";break;
					case 16: muni="Texiguat";break;
					case 17: muni="Vado_Ancho";break;
					case 18: muni="Yauyupe";break;
					case 19: muni="Trojes";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 16: depa="LA_PAZ";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. La Paz\t 2. Aguanqueterique\t\t 3. Cabanas\t\t 4. Cane\n"<<
		  	"5. Chinacla\t\t 6. Guajiquiro\t\t 7. Lauterique\t 8. Marcala\n"<<
		  	"9. Mercedes de Oriente\t\t 10. Opatoro\t\t 11. San Antonio del Norte\t\t 12. San Jose\n"<<
		  	"13. San Juan\t\t 14. San Pedro de Tutule\t 15. Santa Ana\t\t 16. Santa Elena\n"<<
		  	"17. Santa Maria\t\t 18. Santiago de Puringla\t\t 19. Yarula\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="La_Paz";break;
					case 2: muni="Aguanqueterique";break;
					case 3: muni="Cabanas";break;
					case 4: muni="Cane";break;
					case 5: muni="Chinacla";break;
					case 6: muni="Guajiquiro";break;
					case 7: muni="Lauterique";break;
					case 8: muni="Marcala";break;
					case 9: muni="Mercedes_de_Oriente";break;
					case 10: muni="Opatoro";break;
					case 11: muni="San_Antonio_del_Norte";break;
					case 12: muni="San_Jose";break;
					case 13: muni="San_Juan";break;
					case 14: muni="San_Pedro_de_Tutule";break;
					case 15: muni="Santa_Ana";break;
					case 16: muni="Santa_Elena";break;
					case 17: muni="Santa_Maria";break;
					case 18: muni="Santiago_de_Puringla";break;
					case 19: muni="Yarula";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 17: depa="VALLE";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Nacaome\t 2. Alianza\t\t 3. Amapala\t\t 4. Aramecina\n"<<
		  	"5. Caridad\t\t 6. Goascorán\t\t 7. Langue\t 8. San Francisco de Coray\n"<<
		 	"9. San Lorenzo\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Nacaome";break;
					case 2: muni="Alianza";break;
					case 3: muni="Amapala";break;
					case 4: muni="Aramecina";break;
					case 5: muni="Caridad";break;
					case 6: muni="Goascorán";break;
					case 7: muni="Langue";break;
					case 8: muni="San_Francisco_de_Coray";break;
					case 9: muni="San_Lorenzo";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		case 18: depa="CHOLUTECA";
			system("CLS");
			cout<<"Selecciones un Municipio\n";
			cout<<"1. Choluteca\t 2. Apacilagua\t\t 3. Concepcion de Maria\t\t 4. Duyure\n"<<
		  	"5. El Corpus\t\t 6. El Triunfo\t\t 7. Marcovia\t 8. Morolica\n"<<
		  	"9. Namasigue\t\t 10. Orocuina\t\t 11. Pespire\t\t 12. San Antonio de Flores\n"<<
		  	"13. San Isidro\t\t 14. San Jose\t 15. San Marcos\t\t 16. Santa Ana de Yusguare\n";
				cin>>opc1;
				switch(opc1){
					case 1: muni="Choluteca";break;
					case 2: muni="Apacilagua";break;
					case 3: muni="Concepcion_de_Maria";break;
					case 4: muni="Duyure";break;
					case 5: muni="El_Corpus";break;
					case 6: muni="El_Triunfo";break;
					case 7: muni="Marcovia";break;
					case 8: muni="Morolica";break;
					case 9: muni="Namasigue";break;
					case 10: muni="Orocuina";break;
					case 11: muni="Pespire";break;
					case 12: muni="San_Antonio_de_Flores";break;
					case 13: muni="San_Isidro";break;
					case 14: muni="San_Jose";break;
					case 15: muni="San_Marcos";break;
					case 16: muni="Santa_Ana_de_Yusguare";break;
					default: cout<<"Opcion no valida";break;
				}
		
		break;
		default: cout<<"Opcion no valida\n";break;
	}
	}
}

void agregarContagio(string ID,string Nombre ,string Apellido,int Edad,string Genero){
	ofstream archivo;
	ofstream archivogeneral;
	
	switch(opc){
		case 1: 
			archivo.open("contagioIslas.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 2: 
			archivo.open("contagioCortes.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 3: 
			archivo.open("contagioAtlantida.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 4: 
			archivo.open("contagioColon.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 5: 
			archivo.open("contagioGracias.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 6: 
			archivo.open("contagioCopan.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 7: 
			archivo.open("contagioSB.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 8: 
			archivo.open("contagioYoro.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 9: 
			archivo.open("contagioOlancho.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 10: 
			archivo.open("contagioOcotepeque.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 11: 
			archivo.open("contagioLempira.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 12: 
			archivo.open("contagioIntibuca.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 13: 
			archivo.open("contagioComayagua.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 14: 
			archivo.open("contagioFrancisco.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 15: 
			archivo.open("contagioParaiso.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 16: 
			archivo.open("contagioPaz.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 17: 
			archivo.open("contagioValle.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		
		case 18: 
			archivo.open("contagioCholuteca.txt",ios::app);
		archivogeneral.open("contagioGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";
		archivogeneral<<depa<<" "<<muni<< " "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<"\n";		  		  	
		break;
		default: cout<<"Opcion no valida\n";break;
	}
	
}

void agregarFumigaciones(){
	ofstream archivo;
	ofstream archivogeneral;
	
	switch(opc){
		case 1: 
			archivo.open("FumigacionIslas.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 2: 
			archivo.open("FumigacionCortes.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 3: 
			archivo.open("FumigacionAtlantida.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 4: 
			archivo.open("FumigacionColon.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 5: 
			archivo.open("FumigacionGracias.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 6: 
			archivo.open("FumigacionCopan.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 7: 
			archivo.open("FumigacionSB.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 8: 
			archivo.open("FumigacionYoro.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 9: 
			archivo.open("FumigacionOlancho.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 10: 
			archivo.open("FumigacionOcotepeque.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 11: 
			archivo.open("FumigacionLempira.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 12: 
			archivo.open("FumigacionIntibuca.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 13: 
			archivo.open("FumigacionComayagua.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 14: 
			archivo.open("FumigacionFrancisco.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 15: 
			archivo.open("FumigacionParaiso.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 16: 
			archivo.open("FumigacionPaz.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 17: 
			archivo.open("FumigacionValle.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 18: 
			archivo.open("FumigacionCholuteca.txt",ios::app);
		archivogeneral.open("FumigacionGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		default: cout<<"Opcion no valida\n";break;
	}
	
}

void agregarLimpiezas(){
	ofstream archivo;
	ofstream archivogeneral;
	
	switch(opc){
		case 1: 
			archivo.open("LimpiezaIslas.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 2: 
			archivo.open("LimpiezaCortes.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 3: 
			archivo.open("LimpiezaAtlantida.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 4: 
			archivo.open("LimpiezaColon.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 5: 
			archivo.open("LimpiezaGracias.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 6: 
			archivo.open("LimpiezaCopan.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 7: 
			archivo.open("LimpiezaSB.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 8: 
			archivo.open("LimpiezaYoro.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 9: 
			archivo.open("LimpiezaOlancho.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 10: 
			archivo.open("LimpiezaOcotepeque.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 11: 
			archivo.open("LimpiezaLempira.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 12: 
			archivo.open("LimpiezaIntibuca.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 13: 
			archivo.open("LimpiezaComayagua.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 14: 
			archivo.open("LimpiezaFrancisco.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 15: 
			archivo.open("LimpiezaParaiso.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 16: 
			archivo.open("LimpiezaPaz.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 17: 
			archivo.open("LimpiezaValle.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		
		case 18: 
			archivo.open("LimpiezaCholuteca.txt",ios::app);
		archivogeneral.open("LimpiezaGeneral.txt",ios::app);
	
		if(archivo.fail()||archivogeneral.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
		}
		archivo<<depa<<" "<<muni<<"\n";
		archivogeneral<<depa<<" "<<muni<<"\n";		  		  	
		break;
		default: cout<<"Opcion no valida\n";break;
	}
	
}

void agregarMuerte(string ID,string Nombre ,string Apellido,int Edad,string Genero){

	ofstream aux;
	ofstream archivo;
    ifstream lectura;
    
    bool encontrado=false;
    string auxId;
    char opc3;
    archivo.open("MuertesGenerales.txt",ios::app);
    switch(opcMuertes){
		case 1: 
			lectura.open("contagioIslas.txt",ios::in);
		aux.open("MuertesIslas.txt",ios::app);  	
		break;
		
		case 2: 
			lectura.open("contagioCortes.txt",ios::in);
		aux.open("MuertesCortes.txt",ios::app);		  		  	
		break;
		
		case 3: 
			lectura.open("contagioAtlantida.txt",ios::in);
		aux.open("MuertesAtlantida.txt",ios::app);	  		  	
		break;
		
		case 4: 
			lectura.open("contagioColon.txt",ios::in);
		aux.open("MuertesColon.txt",ios::app);		  		  	
		break;
		
		case 5: 
			lectura.open("contagioGracias.txt",ios::in);
		aux.open("MuertesGracias.txt",ios::app);		  	
		break;
		
		case 6: 
			lectura.open("contagioCopan.txt",ios::in);
		aux.open("MuertesCopan.txt",ios::app);		  		  	
		break;
		
		case 7: 
			lectura.open("contagioSB.txt",ios::in);
		aux.open("MuertesSB.txt",ios::app);	  		  	
		break;
		
		case 8: 
			lectura.open("contagioYoro.txt",ios::in);
		aux.open("MuertesYoro.txt",ios::app);		  		  	
		break;
		
		case 9: 
			lectura.open("contagioOlancho.txt",ios::in);
		aux.open("MuertesOlancho.txt",ios::app);
		break;
		
		case 10: 
			lectura.open("contagioOcotepeque.txt",ios::in);
		aux.open("MuertesOcotepeque.txt",ios::app);		  		  	
		break;
		
		case 11: 
			lectura.open("contagioLempira.txt",ios::in);
		aux.open("MuertesLempira.txt",ios::app);  		  	
		break;
		
		case 12: 
			lectura.open("contagioIntibuca.txt",ios::in);
		aux.open("MuertesIntibuca.txt",ios::app);		  	
		break;
		
		case 13: 
			lectura.open("contagioComayagua.txt",ios::in);
		aux.open("MuertesComayagua.txt",ios::app);		  		  	
		break;
		
		case 14: 
			lectura.open("contagioFrancisco.txt",ios::in);
		aux.open("MuertesFrancisco.txt",ios::app);	  		  	
		break;
		
		case 15: 
			lectura.open("contagioParaiso.txt",ios::in);
		aux.open("MuertesParaiso.txt",ios::app);		  		  	
		break;
		
		case 16: 
			lectura.open("contagioPaz.txt",ios::in);
		aux.open("MuertesPaz.txt",ios::app);	  	
		break;
		
		case 17: 
			lectura.open("contagioValle.txt",ios::in);
		aux.open("MuertesValle.txt",ios::app);	  		  	
		break;
		
		case 18: 
			lectura.open("contagioCholuteca.txt",ios::in);
		aux.open("MuertesCholuteca.txt",ios::app);	  		  	
		break;
		default: cout<<"Opcion no valida\n";break;
	}
	
    if(aux.is_open() && lectura.is_open()&&archivo.is_open()){
    	cout<<"Ingresa la Identidad de la Persona que Fallecio: ";
        cin>>auxId;
        
		while(!lectura.eof()){
			lectura>>depa>>muni>>ID>>Nombre>>Apellido>>Edad>>Genero;
	
			 if(auxId==ID){
			 	
				cout<<"__________________________"<<endl;
                cout<<"ID: "<<ID<<endl;
                cout<<"Departamento: "<<depa<<endl;
                cout<<"Municipio: "<<muni<<endl;
                cout<<"Nombre: "<<Nombre<<endl;
				cout<<"Apellido: "<<Apellido<<endl;
                cout<<"Edad: "<<Edad<<endl;
                cout<<"Genero: "<<Genero<<endl;
				cout<<"__________________________"<<endl;
				
					encontrado=true;
				cout<<"Desea reportar como muerto a  "<<Nombre<<" (S/N): ";
                cin>>opc3;
                if(opc3=='S'||opc3=='s'){
                aux<<depa<<" "<<muni<<" "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<" "<<endl;
                archivo<<depa<<" "<<muni<<" "<<ID<<" "<<Nombre<<" "<<Apellido<<" "<<Edad<<" "<<Genero<<" "<<endl;
                cout<<"Registrado!!"<<endl;
                }
                opc3='a';
               }
            }	
		if(encontrado==false){
        cout<<"No se encontro ningun registro con clave "<<auxId<<endl;
    }

		 aux.close();
    lectura.close();
	}
	else{
		cout<<"No se pudo abrir el archivo\n";
	}
}
int reporteContagio(){
	
  int lin=0;
	  ifstream arch;
  
	
	switch(opc2){
		case 1:
		arch.open("contagioIslas.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 2:
		arch.open("contagioCortes.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 3:
		arch.open("contagioAtlantida.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 4:
		arch.open("contagioColon.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 5:
		arch.open("contagioGracias.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 6:
		arch.open("contagioCopan.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 7:
		arch.open("contagioSB.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 8:
		arch.open("contagioYoro.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 9:
		arch.open("contagioOlancho.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 10:
		arch.open("contagioOcotepeque.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 11:
		arch.open("contagioLempira.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 12:
		arch.open("contagioIntibuca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 13:
		arch.open("contagioComayagua.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 14:
		arch.open("contagioFrancisco.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 15:
		arch.open("contagioParaiso.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 16:
		arch.open("contagioPaz.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 17:
		arch.open("contagioValle.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 18:
		arch.open("contagioCholuteca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		default:
		cout<<"Opcion no valida\n"; 
	}
return lin;	
}

int reporteLimpieza(){
	
	
  int lin=0;
	  ifstream arch;
  
	
	switch(opc2){
		case 1:
		arch.open("LimpiezaIslas.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 2:
		arch.open("LimpiezaCortes.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 3:
		arch.open("LimpiezaAtlantida.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 4:
		arch.open("LimpiezaColon.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 5:
		arch.open("LimpiezaGracias.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 6:
		arch.open("LimpiezaCopan.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 7:
		arch.open("LimpiezaSB.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 8:
		arch.open("LimpiezaYoro.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 9:
		arch.open("LimpiezaOlancho.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 10:
		arch.open("LimpiezaOcotepeque.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 11:
		arch.open("LimpiezaLempira.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 12:
		arch.open("LimpiezaIntibuca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 13:
		arch.open("LimpiezaComayagua.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 14:
		arch.open("LimpiezaFrancisco.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 15:
		arch.open("LimpiezaParaiso.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 16:
		arch.open("LimpiezaPaz.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 17:
		arch.open("LimpiezaValle.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 18:
		arch.open("LimpiezaCholuteca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		default:
		cout<<"Opcion no valida\n"; 
	}
return lin;	
}

int reporteFumigacion(){
	
  int lin=0;
	  ifstream arch;
  
	
	switch(opc2){
		case 1:
		arch.open("FumigacionIslas.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 2:
		arch.open("FumigacionCortes.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 3:
		arch.open("FumigacionAtlantida.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 4:
		arch.open("FumigacionColon.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 5:
		arch.open("FumigacionGracias.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 6:
		arch.open("FumigacionCopan.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 7:
		arch.open("FumigacionSB.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 8:
		arch.open("FumigacionYoro.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 9:
		arch.open("FumigacionOlancho.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 10:
		arch.open("FumigacionOcotepeque.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 11:
		arch.open("FumigacionLempira.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 12:
		arch.open("FumigacionIntibuca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 13:
		arch.open("FumigacionComayagua.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 14:
		arch.open("FumigacionFrancisco.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 15:
		arch.open("FumigacionParaiso.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 16:
		arch.open("FumigacionPaz.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 17:
		arch.open("FumigacionValle.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 18:
		arch.open("FumigacionCholuteca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		default:
		cout<<"Opcion no valida\n"; 
	}
return lin;	
}

int reporteMuerte(){
	int lin=0;
	  ifstream arch;
  
	
	switch(opc2){
		case 1:
		arch.open("MuertesIslas.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 2:
		arch.open("MuertesCortes.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 3:
		arch.open("MuertesAtlantida.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 4:
		arch.open("MuertesColon.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 5:
		arch.open("MuertesGracias.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 6:
		arch.open("MuertesCopan.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 7:
		arch.open("MuertesSB.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 8:
		arch.open("MuertesYoro.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 9:
		arch.open("MuertesOlancho.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 10:
		arch.open("MuertesOcotepeque.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 11:
		arch.open("MuertesLempira.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 12:
		arch.open("MuertesIntibuca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 13:
		arch.open("MuertesComayagua.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		case 14:
		arch.open("MuertesFrancisco.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 15:
		arch.open("MuertesParaiso.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 16:
		arch.open("MuertesPaz.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;	
		break;
		case 17:
		arch.open("MuertesValle.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;
		break;
		case 18:
		arch.open("MuertesCholuteca.txt", ifstream::in); 
 		while(arch.good()) if(arch.get()=='\n') lin++;		
		break;
		default:
		cout<<"Opcion no valida\n"; 
	}
return lin;
}

void generar_grafico(float a,float b,float c, float d){
	ofstream archivocss;
	ofstream archivohtml;
	
	archivocss.open("grafico\\css\\estilos.css",ios::out);
	archivohtml.open("grafico\\index.html",ios::out);
	
	if(archivocss.fail()||archivohtml.fail()){
		cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	
	switch(opc2){
		case 1:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/65932)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/65932)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/65932<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/65932)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/65932)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/65932)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/65932<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/65932)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/4)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/4)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".js:after {content: \""<<c*100/4<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/4)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/4)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/4)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/4<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/4)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Islas de la Bahia</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";		
	
		break;
		case 2:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/1612762)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/1612762)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/1612762<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/1612762)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/1612762)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/1612762)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/1612762<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/1612762)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/4)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/4)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".js:after {content: \""<<c*100/4<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/4)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/4)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/4)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/4<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/4)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Cortes</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";		
	
		break;
		case 3:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/449822)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/449822)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/449822<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/449822)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/449822)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/449822)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/449822<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/449822)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/8)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/8)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".js:after {content: \""<<c*100/8<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/8)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/8)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/8)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/8<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/8)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"
		<<"<h1>Atlantida</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 4:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/40417)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/40417)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/40417<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/40417)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/40417)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/40417)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/40417<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/40417)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/10)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/10)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/10<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/10)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/10)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/10)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/10<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/10)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
			
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"
		<<"<h1>Colon</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 5:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/94450)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/94450)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/94450<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/94450)*1.8<<"deg); }" 	
		<<".css {transform: rotate("<<(b*100/94450)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/94450)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/94450<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/94450)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/6)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/6)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/6<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/6)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/6)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/6)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/6<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/6)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Gracias a Dios</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 6:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/382722)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/382722)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/382722<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/382722)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/382722)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/382722)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/382722<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/382722)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/23)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/23)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/23<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/23)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/23)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/23)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/23<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/23)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Copan</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 7:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/434896)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/434896)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/434896<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/434896)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/434896)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/434896)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/434896<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/434896)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/28)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/28)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/28)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/28)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/28)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/28)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Santa Barbara</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 8:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/587375)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/587375)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/587375<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/587375)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/587375)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/587375)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/587375<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/587375)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/11)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/11)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/11<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/11)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/11)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/11)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/11<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/11)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Yoro</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 9:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/537306)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/537306)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/537306<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/537306)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/537306)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/537306)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/537306<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/537306)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/23)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/23)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/23<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/23)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/23)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/23)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/23<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/23)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Olancho</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 10:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/23909)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/23909)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/23909<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/23909)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/23909)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/23909)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/23909<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/23909)*1.8<<"deg); }" 
		<<".js {transform: rotate("<<(c*100/16)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/16)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".js:after {content: \""<<c*100/16<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/16)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/16)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/16)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/16<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/16)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
			
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Ocotepeque</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 11:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/333125)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/333125)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/333125<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/333125)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/333125)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/333125)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/333125<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/333125)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/28)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/28)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/28)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/28)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/28)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/28)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Lempira</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 12:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/241568)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/241568)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/241568<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/241568)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/241568)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/241568)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/241568<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/241568)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/17)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/17)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/17<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/17)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/17)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/17)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/17<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/17)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Intibuca</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 13:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/144785)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/144785)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/144785<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/144785)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/144785)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/144785)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/144785<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/144785)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/21)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/21)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content:\""<<c*100/21<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/21)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/21)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/21)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/21<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/21)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Comayagua</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 14:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/1553000)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/1553000)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/1553000<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/1553000)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/1553000)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/1553000)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/1553000<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/1553000)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/28)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/28)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/28)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/28)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/28)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/28<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/28)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
			
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Francisco Morazan</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 15:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/458472)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/458472)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/458472<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/458472)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/458472)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(a*100/458472)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/458472<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/458472)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/19)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(a*100/19)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/19<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/19)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/19)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(a*100/19)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/19<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/19)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>El Paraiso</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 16:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/46264)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/46264)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/46264<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/46264)*1.8<<"deg); }" 
		<<".css {transform: rotate("<<(b*100/46264)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/46264)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/46264<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/46264)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/19)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/19)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/19<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/19)*1.8<<"deg); }" 
		<<".php {transform: rotate("<<(d*100/19)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/19)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/19<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/19)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>La Paz</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 17:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/178561)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/178561)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/178561<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/178561)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/178561)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/178561)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; }" 
		<<".css:after {content: \""<<b*100/178561<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/178561)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/9)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/9)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/9<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/9)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/9)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/9)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;} "
		<<".php:after {content: \""<<d*100/9<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/9)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Valle</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		case 18:
		archivocss<<"* {-webkit-box-sizing: border-box; -moz-box-sizing: border-box; box-sizing: border-box; } html {font-family: sans-serif; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; } body {margin: 0; } article, aside, details, figcaption, figure, footer, header, hgroup, main, menu, nav, section, summary {display: block; } audio, canvas, progress, video {display: inline-block; vertical-align: baseline; } audio:not([controls]) {display: none; height: 0; } [hidden], template {display: none; } a {background-color: transparent; } a:active, a:hover {outline: 0; } abbr[title] {border-bottom: 1px dotted; } b, strong {font-weight: bold; } dfn {font-style: italic; } h1 {font-size: 2em; margin: 0.67em 0; } mark {background: #ff0; color: #000; } small {font-size: 80%; } sub, sup {font-size: 75%; line-height: 0; position: relative; vertical-align: baseline; } sup {top: -0.5em; } sub {bottom: -0.25em; } img {border: 0; } svg:not(:root) {overflow: hidden; } figure {margin: 1em 40px; } hr {-moz-box-sizing: content-box; box-sizing: content-box; height: 0; } pre {overflow: auto; } code, kbd, pre, samp {font-family: monospace, monospace; font-size: 1em; } button, input, optgroup, select, textarea {color: inherit; font: inherit; margin: 0; } button {overflow: visible; } button, select {text-transform: none; } button, html input[type=\"button\"], input[type=\"reset\"], input[type=\"submit\"] {-webkit-appearance: button; cursor: pointer; } button[disabled], html input[disabled] {cursor: default; } button::-moz-focus-inner, input::-moz-focus-inner {border: 0; padding: 0; } input {line-height: normal; } input[type=\"checkbox\"], input[type=\"radio\"] {box-sizing: border-box; padding: 0; } input[type=\"number\"]::-webkit-inner-spin-button, input[type=\"number\"]::-webkit-outer-spin-button {height: auto; } input[type=\"search\"] {-webkit-appearance: textfield; -moz-box-sizing: content-box; -webkit-box-sizing: content-box; box-sizing: content-box; } input[type=\"search\"]::-webkit-search-cancel-button, input[type=\"search\"]::-webkit-search-decoration {-webkit-appearance: none; } fieldset {border: 1px solid #c0c0c0; margin: 0 2px; padding: 0.35em 0.625em 0.75em; } legend {border: 0; padding: 0; } textarea {overflow: auto; } optgroup {font-weight: bold; } table {border-collapse: collapse; border-spacing: 0; } td, th {padding: 0; } body {background-color: #111; } body h1, body a {color: #D1E7ED; text-align: center; } body a {text-decoration: none; display: block; font-size: 1em; } body a:hover {text-decoration: underline; color: #00e600; } .circular-progress {margin: auto; position: relative; } .circular-progress, .circular-progress:before, .circular-progress:after {width: 12rem; height: 12rem; border-radius: 50%; } .circular-progress:before, .circular-progress:after {position: absolute; text-align: center; top: 0; left: 0; } .circular-progress:before {padding: .5em; box-sizing: border-box; font-size: 2rem; line-height: 8rem; } .circular-progress:after {line-height: 13rem; }"
		<<".html {transform: rotate("<<(a*100/152519)*1.8<<"deg); background: linear-gradient(0deg, #6666ff 50%, rgba(102, 102, 255, 0.2) 50%); } .html:before, .html:after {color: #6666ff; } .html:before {content: \"Contagio\"; background: #111 content-box; transform: rotate(-"<<(a*100/152519)*1.8<<"deg); text-transform: uppercase; font-size: 1rem; }"
		<<".html:after {content: \""<<a*100/152519<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(a*100/152519)*1.8<<"deg); } "
		<<".css {transform: rotate("<<(b*100/152519)*1.8<<"deg); background: linear-gradient(0deg, orange 50%, rgba(255, 165, 0, 0.2) 50%); } .css:before, .css:after {color: orange; } .css:before {content: \"Muertos\"; background: #111 content-box; transform: rotate(-"<<(b*100/152519)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".css:after {content: \""<<b*100/152519<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(b*100/152519)*1.8<<"deg); } "
		<<".js {transform: rotate("<<(c*100/16)*1.8<<"deg); background: linear-gradient(0deg, #e600e6 50%, rgba(230, 0, 230, 0.2) 50%); } .js:before, .js:after {color: #e600e6; } .js:before {content: \"Fumigaciones\"; background: #111 content-box; transform: rotate(-"<<(c*100/16)*1.8<<"deg); text-transform: uppercase;font-size: 1rem; } "
		<<".js:after {content: \""<<c*100/16<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(c*100/16)*1.8<<"deg); } "
		<<".php {transform: rotate("<<(d*100/16)*1.8<<"deg); background: linear-gradient(0deg, #00e600 50%, rgba(0, 230, 0, 0.2) 50%); } .php:before, .php:after {color: #00e600; } .php:before {content: \"Limpiezas\"; background: #111 content-box; transform: rotate(-"<<(d*100/16)*1.8<<"deg); text-transform: uppercase; font-size: 1rem;}" 
		<<".php:after {content: \""<<d*100/16<<"%"<<"\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-"<<(d*100/16)*1.8<<"deg); } .python {transform: rotate(126deg); background: linear-gradient(0deg, salmon 50%, rgba(250, 128, 114, 0.2) 50%); } .python:before, .python:after {color: salmon; } .python:before {content: \"python\"; background: #111 content-box; transform: rotate(-126deg); text-transform: uppercase; } .python:after {content: \"70%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-126deg); } .node {transform: rotate(108deg); background: linear-gradient(0deg, white 50%, rgba(255, 255, 255, 0.2) 50%); } .node:before, .node:after {color: white; } .node:before {content: \"node\"; background: #111 content-box; transform: rotate(-108deg); text-transform: uppercase; } .node:after {content: \"60%\"; background: linear-gradient(transparent 50%, #111 50%); transform: scale(1.1) rotate(-108deg); } .skills {display: flex; flex-wrap: wrap; margin: 5em auto; }";	
		
		archivohtml<<"!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"/><meta name=\"viewport\" content=\"width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0\"/><title>Document</title><link rel=\"stylesheet\" href=\"css/estilos.css\"/></head><body></body><h1>Estadistica de Contagio</h1>"<<
		"<h1>Choluteca</h1><div class=\"skills\"><div class=\"circular-progress html\"></div><div class=\"circular-progress css\"></div> <div class=\"circular-progress js\"></div> <div class=\"circular-progress php\"></div></div></html>";
		break;
		default:
		cout<<"Opcion no valida\n";
	}
}


int main() {
	int opc,edad,opcgenero;
	string id,nombre,apellido,genero;
	char opcion;
	bool salir=true,salirIngreso=true;
	cout<<"**************************************************************************\n";
	cout<<"**************************************************************************\n";
	cout<<"***                                                                   ****\n";
	cout<<"***                                                                   ****\n";
	cout<<"***         Bienvenido al Sistema de Control de Dengue                ****\n";
	cout<<"***                          HONDURAS                                 ****\n";
	cout<<"***                                                                   ****\n";
	cout<<"***                                                                   ****\n";
	cout<<"**************************************************************************\n";
	cout<<"**************************************************************************\n\n\n";

while(salir!=false){
	int permiso=1;	
	cout<<"Elija una Opcion\n";
	cout<<"1. Registro de Contagio por Dengue\n";
	cout<<"2. Registro de Muertes por dengue\n";
	cout<<"3. Registro de Fumigaciones\n";
	cout<<"4. Registro de Limpiezas\n";
	cout<<"5. Reportes\n";
	cout<<"6. Salir\n";
	cin>>opc;
	switch(opc){
		case 1:
			
		while(salirIngreso!=false){
		
		seleccion(permiso);
		cout<<"Numero de identidad: \n";
		cin>>id;
		cout<<"Nombre completo: \n";
		cin>>nombre;
		cout<<"Apellido: \n";
		cin>>apellido;
		cout<<"Edad:\n";
		cin>>edad;
		cout<<"Genero:\n";
		while(opcgenero!=1&&opcgenero!=2){
		cout<<"Coloque 1 para Fenemino o 2 para Masculino\n";
		cin>>opcgenero;
		if(opcgenero==1){
			genero="Femenino";
		}
		else{
			if(opcgenero==2){
			genero="Masculino";
			}
			else
			{
				cout<<"Opcion no valida\n";
			}
		}
		}
		opcgenero=0;
		agregarContagio(id,nombre,apellido,edad,genero);
		cout<<"\250Desea Agregar otro Registro (S/N)\n";
		cin>>opcion;
		if(opcion=='N'||opcion=='n')
		salirIngreso=false;
		}
		 salirIngreso=true;
		 system("CLS");
		break;
		case 2:
			permiso=0;
		while(salirIngreso!=false){
		seleccion(permiso);
		agregarMuerte(id,nombre,apellido,edad,genero);
		cout<<"\250Desea Agregar otro Registro (S/N)\n";
		cin>>opcion;
		system("CLS");
		if(opcion=='N'||opcion=='n')
		salirIngreso=false;
		}
	salirIngreso=true;
		
		system("CLS");
		break;
		case 3:
		
		while(salirIngreso!=false){
		
		seleccion(permiso);
		
		agregarFumigaciones();
		cout<<"\250Desea Agregar otro Registro (S/N)\n";
		cin>>opcion;
		if(opcion=='N'||opcion=='n')
		salirIngreso=false;
		}
		  salirIngreso=true;
		  system("CLS");
		break;
		case 4:
		
		while(salirIngreso!=false){
		
		seleccion(permiso);
		
		agregarLimpiezas();
		cout<<"\250Desea Agregar otro Registro (S/N)\n";
		cin>>opcion;
		if(opcion=='N'||opcion=='n')
		salirIngreso=false;
		}
		salirIngreso=true;
		system("CLS");
		break;
	
		case 5:
			float valor1,valor2,valor3,valor4;
		cout<<"Seleccione un Departamento\n";
		cout<<"1. Islas de la Bah\241a\t 2. Cort\202s\t\t 3. Atl\240ntida\t\t 4. Col\242n\n"<<
		  "5. Gracias a Dios\t 6. Cop\240n\t\t 7. Santa B\240rbara\t 8. Yoro\n"<<
		  "9. Olancho\t\t 10. Ocotepeque\t\t 11. Lempira\t\t 12. Intibuc\240\n"<<
		  "13. Comayagua\t\t 14. Francisco Moraz\240n\t 15. El Para\241so\t\t 16. La Paz\n"<<
		  "17. Valle\t\t 18. Choluteca\n";
	cin>>opc2;
	
		valor1=reporteContagio();
		valor2=reporteMuerte();
		valor3=reporteFumigacion();
		valor4=reporteLimpieza();
		
		cout<<"La cantidad de contagios Son: "<<valor1<<"\n\n";
		cout<<"La cantidad de Muertos Son: "<<valor2<<"\n\n";
		cout<<"La cantidad de Fumigaciones Son: "<<valor3<<"\n\n";
		cout<<"La cantidad de limpieza Son: "<<valor4<<"\n\n";
		generar_grafico(valor1,valor2,valor3,valor4);
		system("grafico\\index.html");
		system("CLS");
			cout<<"Desea Generar un Reporte General?\n";
		break;
		case 6:
			salir=false;
		break;
		default:
			cout<<"Opcion No Valida\n";
	}
}	
	system("pause");
	return 0;
}
