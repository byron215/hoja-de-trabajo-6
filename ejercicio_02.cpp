#include <iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
int main (){
	fstream archivo ("personaz.txt");
	int j,b,c,d,b1,c1,d1,b2,c2,d2,b3,c3,d3,b4,c4,d4,b5,c5,d5,b6,c6,d6,b7,c7,d7,b8,c8,d8,b9,c9,d9,suma,suma2,suma3;
	string a,a1,a2,a3,a4,a5,a6,a7,a8,a9;
	string e;
	do{
system ("cls");
    cout<<"<----Menu---->"<<endl;
	cout<<"1.-ingresar"<<endl;
	cout<<"2.-informe"<<endl;
	cout<<"3.-salir"<<endl;
	cin>>j;
	if ((j>=1)&&(j<=2))
		cin.ignore();
	

		
		{
	if(!archivo.is_open())
			{
			archivo.open ("personaz.txt",ios::out | ios::app);
			
		}
	
	
	
		switch (j){
	case 1:
	
	

	

	cout<<"persona "<<1;
	cout<<"\ngenero\n";
	cin>>a;
	cout<<"peso\n";
	cin>>b;
	cout<<"altura\n";
	cin>>c;
	cout<<"edad";
	cin>>d;	
		cout<<"persona "<<2;
	cout<<"\ngenero\n";
	cin>>a1;
	cout<<"peso\n";
	cin>>b1;
	cout<<"altura\n";
	cin>>c1;
	cout<<"edad";
	cin>>d1;	

		cout<<"persona "<<3;
	cout<<"\ngenero\n";
	cin>>a2;
	cout<<"peso\n";
	cin>>b2;
	cout<<"altura\n";
	cin>>c2;
	cout<<"edad";
	cin>>d2;	

		cout<<"persona "<<4;
	cout<<"\ngenero\n";
	cin>>a3;
	cout<<"peso\n";
	cin>>b3;
	cout<<"altura\n";
	cin>>c3;
	cout<<"edad";
	cin>>d3;	

		cout<<"persona "<<5;
	cout<<"\ngenero\n";
	cin>>a4;
	cout<<"peso\n";
	cin>>b4;
	cout<<"altura\n";
	cin>>c4;
	cout<<"edad";
	cin>>d4;	

		cout<<"persona "<<6;
	cout<<"\ngenero\n";
	cin>>a5;
	cout<<"peso\n";
	cin>>b5;
	cout<<"altura\n";
	cin>>c5;
	cout<<"edad";
	cin>>d5;	

		cout<<"persona "<<7;
	cout<<"\ngenero\n";
	cin>>a6;
	cout<<"peso\n";
	cin>>b6;
	cout<<"altura\n";
	cin>>c6;
	cout<<"edad";
	cin>>d6;	

		cout<<"persona "<<8;
	cout<<"\ngenero\n";
	cin>>a7;
	cout<<"peso\n";
	cin>>b7;
	cout<<"altura\n";
	cin>>c7;
	cout<<"edad";
	cin>>d7;	

		cout<<"persona "<<9;
	cout<<"\ngenero\n";
	cin>>a8;
	cout<<"peso\n";
	cin>>b8;
	cout<<"altura\n";
	cin>>c8;
	cout<<"edad";
	cin>>d8;	

		cout<<"persona "<<10;
	cout<<"\ngenero\n";
	cin>>a9;
	cout<<"peso\n";
	cin>>b9;
	cout<<"altura\n";
	cin>>c9;
	cout<<"edad";
	cin>>d9;	

	suma=b+b1+b2+b3+b4+b5+b6+b7+b8+b9;
    suma2=c+c1+c2+c3+c4+c5+c6+c7+c8+c9;
	suma3=d+d1+d2+d3+d4+d5+d6+d7+d8+d9;
	

	
	archivo<<"genero  "<<"peso  "<<"altura  "<<"edad  "<<endl;
	archivo<<a <<"       "<<b <<"     "<<c <<"     "<<d<<""<<endl; 
    archivo<<a1<<"       "<<b1<<"     "<<c1<<"     "<<d1<<""<<endl; 
	archivo<<a2<<"       "<<b2<<"     "<<c2<<"     "<<d2<<""<<endl; 			
	archivo<<a3<<"       "<<b3<<"     "<<c3<<"     "<<d3<<""<<endl; 	
	archivo<<a4<<"       "<<b4<<"     "<<c4<<"     "<<d4<<""<<endl; 
	archivo<<a5<<"       "<<b5<<"     "<<c5<<"     "<<d5<<""<<endl; 
	archivo<<a6<<"       "<<b6<<"     "<<c6<<"     "<<d6<<""<<endl; 
	archivo<<a7<<"       "<<b7<<"     "<<c7<<"     "<<d7<<""<<endl; 
	archivo<<a8<<"       "<<b8<<"     "<<c8<<"     "<<d8<<""<<endl; 
	archivo<<a9<<"       "<<b9<<"     "<<c9<<"     "<<d9<<""<<endl; 
	
	archivo<<"\nla media del peso es :"<<suma/10;
	archivo<<"\nla media de la atura es:"<<suma2/10;
	archivo<<"\nla media del adad es: "<<suma3/10;
	
break;
		case 2:
			

		
	cout<<"genero  "<<"peso   "<<"altura  "<<"edad  "<<endl;
	cout<<a<<"        "<<b<<"      "<<c<<"      "<<d<<"" <<endl;  
    cout<<a1<<"       "<<b1<<"     "<<c1<<"     "<<d1<<""<<endl; 
	cout<<a2<<"       "<<b2<<"     "<<c2<<"     "<<d2<<""<<endl; 			
	cout<<a3<<"       "<<b3<<"     "<<c3<<"     "<<d3<<""<<endl; 	
	cout<<a4<<"       "<<b4<<"     "<<c4<<"     "<<d4<<""<<endl; 
	cout<<a5<<"       "<<b5<<"     "<<c5<<"     "<<d5<<""<<endl; 
	cout<<a6<<"       "<<b6<<"     "<<c6<<"     "<<d6<<""<<endl; 
	cout<<a7<<"       "<<b7<<"     "<<c7<<"     "<<d7<<""<<endl; 
	cout<<a8<<"       "<<b8<<"     "<<c8<<"     "<<d8<<""<<endl; 
	cout<<a9<<"       "<<b9<<"     "<<c9<<"     "<<d9<<""<<endl; 				

	
	cout<<"\nla media del peso es :"<<suma/10;
	cout<<"\nla media de la atura es:"<<suma2/10;
	cout<<"\nla media del adad es: "<<suma3/10;
			
			
	


		archivo.close ();
}
}
	return 0;	
}while (j!=3);
	
}