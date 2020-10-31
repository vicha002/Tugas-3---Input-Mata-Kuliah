#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int nomor ;
	float rata, nilai1, nilai2, nilai3;
	cout <<"LOGIN AKUN========================================="<< endl;
	//nput username
	string User ;
	cout <<"Username :"; cin >> User ;
	
	//input password
	string Ps ;
	cout <<"Password :"; cin >> Ps ;
	cout <<"===================================================="<<endl;
	
	//if, else
	if (User != "Vicha" && Ps == "020601")
		{cout <<"Username yang anda masukkan SALAH!"<<endl;}
	else if (User == "Vicha" && Ps != "020601")
		{cout<<"Password yang anda masukkaan SALAH!"<<endl;}
	else if (User != "Vicha" && Ps != "020601")
		{cout<<"Username dan Password yang anda masukkan SALAH!"<<endl;}
	else if (User == "Vicha" && Ps == "020601")
		{
		 cout<<" Login Berhasil "<<endl;
		 cout<<""<<endl;
		 cout<<"Input Nilai Mata Kuliah"<<endl;
		 cout<<"1. Algoritma dan Pemrograman"<<endl;
		 cout<<"2. Kalkulus"<<endl;
		 cout<<""<<endl;
		 cout<<"Pilih :" ;
		 cin >> nomor ;
		 cout<<"------------------------------------------------"<<endl;
		 cout <<""<<endl;
		
		 //switch case dan nested if 
		 switch (nomor)
		  {
			  case 1 :
				cout <<"Nilai Harian	:"; cin >> nilai1 ;
				cout <<"Nilai UTS	:"; cin >> nilai2 ;	
				cout <<"Nilai UAS	:";	cin >> nilai3 ;
				
				cout<<""<<endl;
				rata = (nilai1 + nilai2 + nilai3)/3 ;
					if (rata >=80)
					{cout <<" Anda LULUS Algoritma dan pemrograman dengan nilai "<<fixed<<setprecision(4)<< rata <<endl ;}
					else 
					{cout <<"Anda TIDAK LULUS Algoritma dan Pemrograman dengan nilai "<<fixed<<setprecision(4)<< rata <<endl;}
			break ;
			case 2 :
				cout <<"Nilai Harian	:"; cin >> nilai1 ;
				cout <<"Nilai UTS 	:"; cin >> nilai2 ;	
				cout <<"Nilai UAS 	:"; cin >> nilai3 ;
				
				cout <<""<<endl;
				rata = (nilai1 + nilai2 + nilai3)/3 ;
					if (rata >=80)
					{cout <<" Anda LULUS Kalkulus dengan nilai "<<fixed<<setprecision(4)<< rata <<endl ;} 
					else 
					{cout <<"Anda TIDAK LULUS Kalkulus dengan nilai "<<fixed<<setprecision(4)<< rata <<endl;}
			break ;
			
			default : cout <<"Input anda SALAH!"<<endl;
			}
		}

	return 0;	
}
