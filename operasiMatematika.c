#include <stdio.h>
#include <math.h>

//DEKLARASI MENU (ISI PROSEDUR ADA DI BAWAH FUNGSI MAIN)
void menu();
void menuBangunDatar();
void menuBangunRuang();
void menuAritmatika();
void menuGeometri();


//FUNGSI PERHITUNGAN
float hitungKecepatan(float a, float b){
	return a/b;
}

float hitungDebit1(float a, float b){
	return a * b;
}

float hitungDebit2(float a, float b){
	return a/b;
}

float hitungSkala(float a , float b){
	return a/b * 100000;
}

float hitungKllPersegi(float a){
	return 4 * a;
}

float hitungLuasPersegi(float a){
	return a * a;
}

float hitungKllPersegiPanjang(float a, float b){
	return (2 * (a + b));
}

float hitungLuasPersegiPanjang(float a, float b){
	return a * b;
}

float hitungKllSegitiga(float a, float b, float c){
	return a + b + c;
}

float hitungLuasSegitiga(float a, float b){
	return 0.5 * a * b;
}

float hitungKllLingkaran(float a){
	float pi = 3.14;
	return 2 * pi * a;
}

float hitungLuasLingkaran(float a){
	float pi = 3.14;
	return pi * a * a;
}

float hitungLuasPermukaanKubus(float a){
	return 6 * a * a;
}

float hitungVolumeKubus(float a){
	return a * a * a;
}

float hitungLuasPermukaanBalok(float a, float b, float c){
	return (2 * ((a * b) + (a * c) + (b * c)));
}

float hitungVolumeBalok(float a, float b, float c){
	return a * b * c;
}

float hitungLuasPermukaanTabung(float a, float b){
	return (2 * 3.14 * a * (a + b));
}

float hitungVolumeTabung(float a, float b){
	return 3.14 * a * a * b;
}

float hitungLuasPermukaanKerucut(float a, float b){
	return 3.14 * a * (a + b);
}

float hitungVolumeKerucut(float a, float b){
	return 0.33 * 3.14 * a * a * b;
}

float hitungBrsAritmatika(float x, float y, float z){
	return (x + (y-1) * z);
}

float hitungDrtAritmatika(float x, float y, float z){
	return ((x * 0.5) * (2 * y + (x-1) * z));
}

float hitungBrsGeometri(float a, float b, float c){
	return (a * pow(b, (c-1)));
}

float hitungDrtGeometri(float a, float b, float c){
	return ((a * (pow(b,c) - 1))/(b-1));
}

float hitungDrtGeoTakHingga(float a, float b){
	return (a/(1 - b));
}

//MENU RUMUS
void rumusKecepatan(){
	float jarak, waktu;
	printf("|| ================================================== ||\n");
	printf("||                    RUMUS KECEPATAN                 ||\n");
	printf("|| ================================================== ||\n");
	printf("||Jarak (dalam meter) : ");
	scanf("%f", &jarak);
	printf("||Waktu (dalam sekon) : ");
	scanf("%f", &waktu);
	printf("||Kecepatan : %.2f m/s\n", hitungKecepatan(jarak, waktu));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void rumusDebit(){
	int pilihanDik;
	float luasPenampang, kecepatan, volume, waktu;
	printf("|| ================================================== ||\n");
	printf("||                 APA SAJA YANG DIKETAHUI?           ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Luas Penampang dan Kecepatan                    ||\n");
	printf("|| 2. Volume dan Waktu                                ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihanDik);

	switch(pilihanDik){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("|| Luas Penampang : ");
			scanf("%f", &luasPenampang);
			printf("|| Kecepatan : ");
			scanf("%f", &kecepatan);
			printf("|| Debit : %.2f \n", hitungDebit1(luasPenampang, kecepatan));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2:
			printf("|| ================================================== ||\n");
			printf("|| Volume : ");
			scanf("%f", &volume);
			printf("|| Waktu : ");
			scanf("%f", &waktu);
			printf("|| Debit : %.2f \n",hitungDebit2(volume, waktu));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input ada salah, Ulangi Lagi!");
			printf("\n\n");
			rumusDebit();
	}	
}

void rumusSkala(){
	float jarakPadaPeta, jarakSebenarnya, skala;
	printf("|| ================================================== ||\n");
	printf("||                   KALKULATOR SKALA                 ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Jarak Pada Peta(dalam cm) : ");	
	scanf("%f", &jarakPadaPeta);
	printf("|| Jarak Sebenarnya(dalam km) : ");
	scanf("%f", &jarakSebenarnya);
	printf("|| Skala = 1 : %.0f \n", hitungSkala(jarakSebenarnya, jarakPadaPeta));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void persegi(){
	int pilihLuasKll;
	float sisi;
	printf("|| ================================================== ||\n");
	printf("||                        PERSEGI                     ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Keliling Persegi                                ||\n");
	printf("|| 2. Luas Persegi                                    ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                   KELILING PERSEGI                 ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Sisi Persegi : ");
			scanf("%f", &sisi);
			printf("|| Keliling : %.2f \n", hitungKllPersegi(sisi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                      LUAS PERSEGI                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Sisi Persegi");
			scanf("%f", &sisi);
			printf("|| Luas : %.2f \n", hitungLuasPersegi(sisi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			persegi();	
	}
}

void persegiPanjang(){
	int pilihLuasKll;
	float panjang, lebar;
	printf("|| ================================================== ||\n");
	printf("||                    PERSEGI PANJANG                 ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Keliling Persegi Panjang                        ||\n");
	printf("|| 2. Luas Persegi Panjang                            ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||               KELILING PERSEGI PANJANG             ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Persegi Panjang: ");
			scanf("%f", &panjang);
			printf("|| Lebar Persegi Panjang : ");
			scanf("%f", &lebar);
			printf("|| Keliling : %.2f", hitungKllPersegiPanjang(panjang, lebar));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                 LUAS PERSEGI PANJANG               ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Persegi Panjang : ");
			scanf("%f", &panjang);
			printf("|| Lebar Persegi Panjang : ");
			scanf("%f", &lebar);
			printf("|| Luas : %.2f \n",hitungLuasPersegiPanjang(panjang, lebar));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			persegiPanjang();	
	}
}

void segiTiga(){
	int pilihLuasKll;
	float sisi1, sisi2, sisi3, alas, tinggi;
	printf("|| ================================================== ||\n");
	printf("||                       SEGI TIGA                    ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Keliling Segitiga                               ||\n");
	printf("|| 2. Luas Segitiga                                   ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                   KELILING SEGITIGA                ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Sisi 1 : ");
			scanf("%f", &sisi1);
			printf("|| Panjang Sisi 2 : ");
			scanf("%f", &sisi2);
			printf("|| Panjang Sisi 3 : ");
			scanf("%f", &sisi3);
			printf("|| Keliling : %.2f \n", hitungKllSegitiga(sisi1, sisi2, sisi3));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                     LUAS SEGITIGA                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Alas : ");
			scanf("%f", &alas);
			printf("|| Tinggi : ");
			scanf("%f", &tinggi);
			printf("|| Luas : %.2f \n", hitungLuasSegitiga(alas, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 3 :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			segiTiga();	
	}
}

void lingkaran(){
	float r;
	int pilihLuasKll;
	printf("|| ================================================== ||\n");
	printf("||                       LINGKARAN                    ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Keliling Lingkaran                              ||\n");
	printf("|| 2. Luas Lingkaran                                  ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                  KELILING LINGKARAN                ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari Jari Lingkaran : ");
			scanf("%f", &r);
			printf("|| Keliling : %.2f \n", hitungKllLingkaran(r));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                     LUAS LINGKARAN                 ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari Jari Lingkaran : ");
			scanf("%f", &r);
			printf("|| Luas : %.2f \n", hitungLuasLingkaran(r));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			lingkaran();	
	}
}

void rumusKubus(){
	int pilihan;
	float rusuk;
	printf("|| ================================================== ||\n");
	printf("||                       KUBUS                        ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Luas Permukaan Kubus                            ||\n");
	printf("|| 2. Volume Kerucut                                  ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                LUAS PERMUKAAN KUBUS                ||\n");
			printf("|| ================================================== ||\n");	
			printf("|| Panjang Rusuk Kubus : ");
			scanf("%f", &rusuk);
			printf("|| Luas Permukaan = %.2f \n", hitungLuasPermukaanKubus(rusuk));
			printf("|| ================================================== ||\n");	
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                      VOLUME KUBUS                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Rusuk Kubus : ");
			scanf("%f", &rusuk);
			printf("|| Volume = %.2f \n", hitungVolumeKubus(rusuk));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			rumusKubus();
	}
}

void rumusBalok(){
	int pilihan;
	float panjang, lebar, tinggi;
	printf("|| ================================================== ||\n");
	printf("||                       BALOK                        ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Luas Permukaan Balok                            ||\n");
	printf("|| 2. Volume Balok                                    ||\n");
	printf("|| Pilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                LUAS PERMUKAAN BALOK                ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Balok : ");
			scanf("%f", &panjang);
			printf("|| Lebar Balok : ");
			scanf("%f", &lebar);
			printf("|| Tinggi Balok : ");
			scanf("%f", &tinggi);
			printf("|| Luas Permukaan = %.2f \n", hitungLuasPermukaanBalok(panjang, lebar, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                      VOLUME BALOK                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Balok : ");
			scanf("%f", &panjang);
			printf("|| Lebar Balok : ");
			scanf("%f", &lebar);
			printf("|| Tinggi Balok : ");
			scanf("%f", &tinggi);
			printf("|| Volume = %.2f \n", hitungVolumeBalok(panjang, lebar, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default	:
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			rumusBalok();
	}
}

void rumusTabung(){
	int pilihan;
	float r, tinggi;
	printf("|| ================================================== ||\n");
	printf("||                       TABUNG                       ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Luas Permukaan Tabung                           ||\n");
	printf("|| 2. Volume Tabung                                   ||\n");
	printf("|| Pilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                LUAS PERMUKAAN TABUNG               ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari Jari Tabung: ");
			scanf("%f", &r);
			printf("|| Tinggi Tabung : ");
			scanf("%f", &tinggi);
			printf("|| Luas Permukaan = %.2f \n", hitungLuasPermukaanTabung(r, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                     VOLUME TABUNG                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari Jari Tabung: ");
			scanf("%f", &r);
			printf("|| Tinggi Tabung : ");
			scanf("%f", &tinggi);	
			printf("|| Volume = %.2f \n", hitungVolumeTabung(r, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default	:
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			rumusTabung();
	}
}

void rumusKerucut(){
	int pilihan;
	float pi = 3.14;
	float r, tinggi, garisPelukis;
	printf("|| ================================================== ||\n");
	printf("||                       KERUCUT                      ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Luas Permukaan Kerucut                          ||\n");
	printf("|| 2. Volume Kerucut                                  ||\n");
	printf("|| Pilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("||                LUAS PERMUKAAN KERUCUT              ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari-Jari Kerucut : ");
			scanf("%f", &r);
			printf("|| Panjang Garis Pelukis Kerucut : ");
			scanf("%f", &garisPelukis);
			printf("|| Luas Permukaan = %.2f \n", hitungLuasPermukaanKerucut(r, garisPelukis));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                    VOLUME KERUCUT                  ||\n");
			printf("|| ================================================== ||\n");
			printf("|| Panjang Jari-Jari Kerucut : ");
			scanf("%f", &r);
			printf("|| Tinggi Kerucut : ");
			scanf("%f", &tinggi);
			printf("|| Volume Kerucut = %.2f \n", hitungVolumeKerucut(r, tinggi));
			printf("|| ================================================== ||\n");
			printf("\n\n");
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			printf("\n\n");
			rumusKerucut();
	}
}

void barisanAritmatika(){
	float suku1, suku2, b;
	int n;
	printf("|| ================================================== ||\n");
	printf("||                   BARISAN ARITMATIKA               ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Suku pertama : ");
	scanf("%f", &suku1);
	printf("|| Suku kedua : ");
	scanf("%f", &suku2);
	printf("|| Cari nilai suku ke-berapa? : ");
	scanf("%d", &n);
	b = suku2 - suku1;
	printf("|| Nilai suku ke-%d = %.2f \n", n, hitungBrsAritmatika(suku1, n, b));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void deretAritmatika(){
	float suku1, suku2, b;
	int batasDeret;
	printf("|| ================================================== ||\n");
	printf("||                     DERET ARITMATIKA               ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Suku pertama : ");
	scanf("%f", &suku1);
	printf("|| Suku kedua : ");
	scanf("%f", &suku2);
	printf("|| Batas deret : ");
	scanf("%d", &batasDeret);
	b = suku2 - suku1;
	printf("|| Jumlah deret aritmatika hingga suku ke-%d = %.2f \n", batasDeret, hitungDrtAritmatika(batasDeret, suku1, b));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void barisanGeometri(){
	float suku1, suku2, r;
	int n;
	printf("|| ================================================== ||\n");
	printf("||                    BARISAN GEOMETRI                ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Suku pertama : ");
	scanf("%f", &suku1);
	printf("|| Suku kedua : ");
	scanf("%f", &suku2);
	printf("|| Cari nilai suku ke-berapa? : ");
	scanf("%d", &n);
	r = suku2/suku1;
	printf("|| Nilai suku ke-%d = %.2f \n", n, hitungBrsGeometri(suku1, r, n));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void deretGeometri(){
	float suku1, suku2, r;
	int n;
	printf("|| ================================================== ||\n");
	printf("||                      DERET GEOMETRI                ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Suku pertama : ");
	scanf("%f", &suku1);
	printf("|| Suku kedua : ");
	scanf("%f", &suku2);
	printf("|| Batas deret : ");
	scanf("%d", &n);
	r = suku2/suku1;
	printf("|| Jumlah deret geometri hingga suku ke-%d = %.2f \n", n, hitungDrtGeometri(suku1, r, n));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void deretGeometriTakHingga(){
	float suku1, suku2, r;
	printf("|| ================================================== ||\n");
	printf("||               DERET GEOMETRI TAK HINGGA            ||\n");
	printf("|| ================================================== ||\n");
	printf("|| Suku pertama : ");
	scanf("%f", &suku1);
	printf("|| Suku kedua : ");
	scanf("%f", &suku2);
	r = suku2/suku1;
	printf("|| Jumlah deret geometri tak hingga nya adalah : %.2f \n", hitungDrtGeoTakHingga(suku1, r));
	printf("|| ================================================== ||\n");
	printf("\n\n");
}

void cobaLagi(){
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||                      COBA LAGI?                    ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Iya                                             ||\n");
	printf("|| 2. Tidak                                           ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("|| ================================================== ||\n");
			printf("\n\n");
			menu();
			break;
		case 2 :
			printf("|| ================================================== ||\n");
			printf("||                    TERIMA KASIH!                   ||\n");
			printf("||                                                    ||\n");
			printf("||                   by devtadanarsa                  ||\n");
			printf("|| ================================================== ||\n");
			break;	
	}
}

int main(){
	menu();
	return 0;
}

//PROSEDUR MENU
void menu(){
	int pilihanMenu;
	printf("|| ================================================== ||\n");
	printf("||                        MENU                        ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Kecepatan                                       ||\n");
	printf("|| 2. Debit                                           ||\n");
	printf("|| 3. Skala                                           ||\n");
	printf("|| 4. Bangun Datar                                    ||\n");
	printf("|| 5. Bangun Ruang                                    ||\n");
	printf("|| 6. Barisan dan Deret Aritmatika                    ||\n");
	printf("|| 7. Barisan dan Deret Geometri                      ||\n");
	printf("|| Pilih salah satu : ");
	scanf("%d", &pilihanMenu);
	printf("|| ================================================== ||\n\n");
	switch(pilihanMenu){
		case 1 :
			rumusKecepatan();
			cobaLagi();
			break;
		case 2 :
			rumusDebit();
			cobaLagi();
			break;
		case 3 :
			rumusSkala();
			cobaLagi();
			break;
		case 4 :
			menuBangunDatar();
			cobaLagi();
			break;	
		case 5 :
			menuBangunRuang();
			cobaLagi();
			break;
		case 6 :
			menuAritmatika();
			cobaLagi();
			break;
		case 7 :
			menuGeometri();
			cobaLagi();
			break;		
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			menu();
	}
}

void menuBangunDatar(){
	int pilihanBgnDatar;
	printf("|| ================================================== ||\n");
	printf("||                 KALKULATOR BANGUN DATAR            ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Persegi                                         ||\n");
	printf("|| 2. Persegi Panjang                                 ||\n");
	printf("|| 3. Segitiga                                        ||\n");
	printf("|| 4. Lingkaran                                       ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihanBgnDatar);
	switch(pilihanBgnDatar){
		case 1 :
			printf("\n\n");
			persegi();
			break;
		case 2 : 
			printf("\n\n");
			persegiPanjang();
			break;
		case 3 :
			printf("\n\n");
			segiTiga();
			break;
		case 4 : 
			printf("\n\n");
			lingkaran();
			break;
		default :
			printf("Input anda salah!");
			menuBangunDatar();
	}
}

void menuBangunRuang(){
	int pilihanBgnRuang;
	printf("|| ================================================== ||\n");
	printf("||                 KALKULATOR BANGUN RUANG            ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Kubus                                           ||\n");
	printf("|| 2. Balok                                           ||\n");
	printf("|| 3. Tabung                                          ||\n");
	printf("|| 4. Kerucut                                         ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihanBgnRuang);
	switch(pilihanBgnRuang){
		case 1 :
			printf("\n\n");
			rumusKubus();
			break;
		case 2 :
			printf("\n\n"); 
			rumusBalok();
			break;
		case 3 :
			printf("\n\n");
			rumusTabung();
			break;
		case 4 :
			printf("\n\n");
			rumusKerucut();
			break;			
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			menuBangunRuang();	
	}
}

void menuAritmatika(){
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||              BARISAN DAN DERET ARITMATIKA          ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Barisan Aritmatika                              ||\n");
	printf("|| 2. Deret Aritmatika                                ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			barisanAritmatika();
			break;
		case 2 :
			deretAritmatika();
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			menuAritmatika();	
	}
}

void menuGeometri(){
	int pilihan;
	printf("|| ================================================== ||\n");
	printf("||               BARISAN DAN DERET GEOMETRI           ||\n");
	printf("|| ================================================== ||\n");
	printf("|| 1. Barisan Geometri                                ||\n");
	printf("|| 2. Deret Geometri                                  ||\n");
	printf("|| 3. Deret Geometri Tak Hingga(Hanya Jika 0 < r < 1) ||\n");
	printf("|| Pilih Salah Satu : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			barisanGeometri();
			break;
		case 2:
			deretGeometri();
			break;
		case 3 :
			deretGeometriTakHingga();
			break;
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			menuGeometri();			
	}
}
