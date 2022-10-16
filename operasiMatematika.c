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
	printf("Jarak (dalam meter) : ");
	scanf("%f", &jarak);
	printf("Waktu (dalam sekon) : ");
	scanf("%f", &waktu);
	printf("Kecepatan : %.2f m/s", hitungKecepatan(jarak, waktu));
	printf("\n\n");
}

void rumusDebit(){
	int pilihanDik;
	float luasPenampang, kecepatan, volume, waktu;
	printf("1. Luas Penampang dan Kecepatan \n2. Volume dan Waktu \nApa yang diketahui? : ");
	scanf("%d", &pilihanDik);

	switch(pilihanDik){
		case 1 :
			printf("Luas Penampang : ");
			scanf("%f", &luasPenampang);
			printf("Kecepatan : ");
			scanf("%f", &kecepatan);
			printf("Debit : %.2f", hitungDebit1(luasPenampang, kecepatan));
			printf("\n\n");
			break;
		case 2:
			printf("Volume : ");
			scanf("%f", &volume);
			printf("Waktu : ");
			scanf("%f", &waktu);
			printf("Debit : %.2f",hitungDebit2(volume, waktu));
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
	printf("Jarak Pada Peta(dalam cm) : ");
	scanf("%f", &jarakPadaPeta);
	printf("Jarak Sebenarnya(dalam km) : ");
	scanf("%f", &jarakSebenarnya);
	printf("Skala = 1 : %.0f", hitungSkala(jarakSebenarnya, jarakPadaPeta));
	printf("\n\n");
}

void persegi(){
	int pilihLuasKll;
	float sisi;
	printf("1. Keliling \n2. Luas\n3. Pilih Operasi : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("Sisi Persegi : ");
			scanf("%f", &sisi);
			printf("Keliling : %.2f", hitungKllPersegi(sisi));
			printf("\n\n");
			break;
		case 2 :
			printf("Sisi Persegi");
			scanf("%f", &sisi);
			printf("Luas : %.2f", hitungLuasPersegi(sisi));
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
	printf("1. Keliling \n2. Luas\n3. Pilih Operasi : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("Panjang Persegi Panjang: ");
			scanf("%f", &panjang);
			printf("Lebar Persegi Panjang : ");
			scanf("%f", &lebar);
			printf("Keliling : %.2f", hitungKllPersegiPanjang(panjang, lebar));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang Persegi Panjang: ");
			scanf("%f", &panjang);
			printf("Lebar Persegi Panjang : ");
			scanf("%f", &lebar);
			printf("Luas : %.2f",hitungLuasPersegiPanjang(panjang, lebar));
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
	printf("1. Keliling \n2. Luas\n3. Pilih Operasi : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("Panjang Sisi 1 : ");
			scanf("%f", &sisi1);
			printf("Panjang Sisi 2 : ");
			scanf("%f", &sisi2);
			printf("Panjang Sisi 3 : ");
			scanf("%f", &sisi3);
			printf("Keliling : %.2f", hitungKllSegitiga(sisi1, sisi2, sisi3));
			printf("\n\n");
			break;
		case 2 :
			printf("Alas : ");
			scanf("%f", &alas);
			printf("Tinggi : ");
			scanf("%f", &tinggi);
			printf("Luas : %.2f", hitungLuasSegitiga(alas, tinggi));
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
	printf("1. Keliling \n2. Luas\nPilih Operasi : ");
	scanf("%d", &pilihLuasKll);
	switch(pilihLuasKll){
		case 1 :
			printf("Panjang Jari Jari Lingkaran : ");
			scanf("%f", &r);
			printf("Keliling : %.2f", hitungKllLingkaran(r));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang Jari Jari Lingkaran : ");
			scanf("%f", &r);
			printf("Luas : %.2f", hitungLuasLingkaran(r));
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
	printf("1. Luas Permukaan \n2. Volume \nPilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Panjang Rusuk Kubus(dalam cm) : ");
			scanf("%f", &rusuk);
			printf("Luas Permukaan = %.2f", hitungLuasPermukaanKubus(rusuk));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang Rusuk Kubus(dalam cm) : ");
			scanf("%f", &rusuk);
			printf("Volume = %.2f", hitungVolumeKubus(rusuk));
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
	printf("1. Luas Permukaan \n2. Volume \nPilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Panjang : ");
			scanf("%f", &panjang);
			printf("Lebar : ");
			scanf("%f", &lebar);
			printf("Tinggi : ");
			scanf("%f", &tinggi);
			printf("Luas Permukaan = %.2f", hitungLuasPermukaanBalok(panjang, lebar, tinggi));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang : ");
			scanf("%f", &panjang);
			printf("Lebar : ");
			scanf("%f", &lebar);
			printf("Tinggi : ");
			scanf("%f", &tinggi);
			printf("Volume = %.2f", hitungVolumeBalok(panjang, lebar, tinggi));
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
	printf("1. Luas Permukaan \n2. Volume \nPilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Panjang Jari Jari : ");
			scanf("%f", &r);
			printf("Tinggi Balok : ");
			scanf("%f", &tinggi);
			printf("Luas Permukaan = %.2f", hitungLuasPermukaanTabung(r, tinggi));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang Jari Jari : ");
			scanf("%f", &r);
			printf("Tinggi Balok : ");
			scanf("%f", &tinggi);	
			printf("Volume = %.2f", hitungVolumeTabung(r, tinggi));
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
	printf("1. Luas Permukaan \n2. Volume \nPilih Operasi : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("Panjang Jari-Jari Kerucut : ");
			scanf("%f", &r);
			printf("Panjang Garis Pelukis Kerucut : ");
			scanf("%f", &garisPelukis);
			printf("Luas Permukaan = %.2f", hitungLuasPermukaanKerucut(r, garisPelukis));
			printf("\n\n");
			break;
		case 2 :
			printf("Panjang Jari-Jari Kerucut : ");
			scanf("%f", &r);
			printf("Tinggi Kerucut : ");
			scanf("%f", &tinggi);
			printf("Volume Kerucut = %.2f", hitungVolumeKerucut(r, tinggi));
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
	printf("Suku pertama : ");
	scanf("%f", &suku1);
	printf("Suku kedua : ");
	scanf("%f", &suku2);
	printf("Cari nilai suku ke-berapa? : ");
	scanf("%d", &n);
	b = suku2 - suku1;
	printf("Nilai suku ke-%d = %.2f", n, hitungBrsAritmatika(suku1, n, b));
	printf("\n\n");
}

void deretAritmatika(){
	float suku1, suku2, b;
	int batasDeret;
	printf("Suku pertama : ");
	scanf("%f", &suku1);
	printf("Suku kedua : ");
	scanf("%f", &suku2);
	printf("Batas deret : ");
	scanf("%d", &batasDeret);
	b = suku2 - suku1;
	printf("Jumlah deret aritmatika hingga suku ke-%d = %.2f", batasDeret, hitungDrtAritmatika(batasDeret, suku1, b));
	printf("\n\n");
}

void barisanGeometri(){
	float suku1, suku2, r;
	int n;
	printf("Suku pertama : ");
	scanf("%f", &suku1);
	printf("Suku kedua : ");
	scanf("%f", &suku2);
	printf("Cari nilai suku ke-berapa? : ");
	scanf("%d", &n);
	r = suku2/suku1;
	printf("Nilai suku ke-%d = %.2f", n, hitungBrsGeometri(suku1, r, n));
	printf("\n\n");
}

void deretGeometri(){
	float suku1, suku2, r;
	int n;
	printf("Suku pertama : ");
	scanf("%f", &suku1);
	printf("Suku kedua : ");
	scanf("%f", &suku2);
	printf("Batas deret : ");
	scanf("%d", &n);
	r = suku2/suku1;
	printf("Jumlah deret geometri hingga suku ke-%d = %.2f", n, hitungDrtGeometri(suku1, r, n));
	printf("\n\n");
}

void deretGeometriTakHingga(){
	float suku1, suku2, r;
	printf("Suku pertama : ");
	scanf("%f", &suku1);
	printf("Suku kedua : ");
	scanf("%f", &suku2);
	r = suku2/suku1;
	printf("Jumlah deret geometri tak hingga nya adalah : %.2f", hitungDrtGeoTakHingga(suku1, r));
	printf("\n\n");
}

void cobaLagi(){
	int pilihan;
	printf("1. Iya \n2. Tidak \nIngin Bermain Lagi? : ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			printf("\n\n");
			menu();
			break;
		case 2 :
			break;	
	}
}

int main(){
	menu();
	return 0;
}

void menu(){
	int pilihanMenu;
	printf("1. Kecepatan \n2. Debit \n3. Skala \n4. Bangun Datar \n5. Bangun Ruang \n6. Barisan dan Deret Aritmatika \n7. Barisan dan Deret Geometri\n");
	printf("Pilih salah satu : ");
	scanf("%d", &pilihanMenu);
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

//PROSEDUR MENU
void menuBangunDatar(){
	int pilihanBgnDatar;
	printf("1. Persegi \n2. Persegi Panjang \n3. Segitiga \n4. Lingkaran \nPilih Bangun Datar : ");
	scanf("%d", &pilihanBgnDatar);
	switch(pilihanBgnDatar){
		case 1 :
			persegi();
			break;
		case 2 : 
			persegiPanjang();
			break;
		case 3 :
			segiTiga();
			break;
		case 4 : 
			lingkaran();
			break;
		default :
			printf("Input anda salah!");
			menuBangunDatar();
	}
}

void menuBangunRuang(){
	int pilihanBgnRuang;
	printf("1. Kubus \n2. Balok \n3. Tabung \n4. Kerucut\nPilih Bangun Ruang : ");
	scanf("%d", &pilihanBgnRuang);
	switch(pilihanBgnRuang){
		case 1 :
			rumusKubus();
			break;
		case 2 : 
			rumusBalok();
			break;
		case 3 :
			rumusTabung();
			break;
		case 4 :
			rumusKerucut();
			break;			
		default :
			printf("Input anda salah, Ulangi Lagi!\n");
			menuBangunRuang();	
	}
}

void menuAritmatika(){
	int pilihan;
	printf("1. Barisan Aritmatika \n2. Deret Aritmatika \nPilih Operasi : ");
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
	printf("1. Barisan Geometri \n2. Deret Geometri \n3. Deret Geometri Tak Hingga (Hanya jika 0 < rasio < 1) \nPilih Operasi : ");
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
