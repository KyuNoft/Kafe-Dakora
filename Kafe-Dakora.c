#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct data
{
    char nama[50], divisi[50], jabatan[50], id[100];
}data;

void masukkan(int pil)
{
    system("cls");
    int x=0;
    if(pil == 3)
    x=x+1;
    else
    x=x+0;
    data d[100];
    printf("Masukkan ID           : "); scanf("%s", d[x].id);
    printf("Masukkan Nama Pegawai : "); scanf("%s", d[x].nama);
    printf("Masukkan Divisi       : "); scanf("%s", d[x].divisi);
    printf("Masukkan Jabatan      : "); scanf("%s", d[x].jabatan);
}

void informasi()
{
	char id[100];
	data d[100];
	system("cls");
	printf("\t============================================================\n");
	printf("\t      SELAMAT DATANG DI  PROGRAM INFORMASI PEGAWAI          \n");
	printf("\t============================================================\n\n");
	printf("Masukkan ID Pegawai  : "); scanf("%s", id);
	if(!strcmp(id,"46703322")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Panji\n");
	printf("\tDivisi       : Office\n");
	printf("\tJabatan      : Manajer\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46707160")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Dwi\n");
	printf("\tDivisi       : Office\n");
	printf("\tJabatan      : Bendahara\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46706057")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Eki\n");
	printf("\tDivisi       : Office\n");
	printf("\tJabatan      : Gudang\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46708053")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Yusya\n");
	printf("\tDivisi       : Office\n");
	printf("\tJabatan      : Pemasaran\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46708377")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Dinar\n");
	printf("\tDivisi       : Office\n");
	printf("\tJabatan      : Pemasaran\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46714757")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Adit\n");
	printf("\tDivisi       : Kitchen\n");
	printf("\tJabatan      : Kapten\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46717311")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Erwan\n");
	printf("\tDivisi       : Kitchen\n");
	printf("\tJabatan      : Wakil\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46713400")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Rully\n");
	printf("\tDivisi       : Kitchen\n");
	printf("\tJabatan      : Wakil\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46711566")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Ejin\n");
	printf("\tDivisi       : Kitchen\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46710065")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Dadang\n");
	printf("\tDivisi       : Kitchen\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46713657")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Ridwan\n");
	printf("\tDivisi       : Kithcen\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46720832")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Iqbal\n");
	printf("\tDivisi       : Bar\n");
	printf("\tJabatan      : Kapten\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46724532")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Rizal\n");
	printf("\tDivisi       : Bar\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46727144")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Aris\n");
	printf("\tDivisi       : Bar\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46738765")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Ale\n");
	printf("\tDivisi       : Service\n");
	printf("\tJabatan      : Kapten\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46730945")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Yulia\n");
	printf("\tDivisi       : Service\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46738099")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Intan\n");
	printf("\tDivisi       : Service\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46741356")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Cecep\n");
	printf("\tDivisi       : Server\n");
	printf("\tJabatan      : Kapten\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46746833")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Nizar\n");
	printf("\tDivisi       : Server\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46746744")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Kiki\n");
	printf("\tDivisi       : Server\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46748355")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Asep\n");
	printf("\tDivisi       : Server\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46749768")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Riki\n");
	printf("\tDivisi       : Server\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46757566")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Cucu\n");
	printf("\tDivisi       : Dishwasher\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46751543")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Riyan\n");
	printf("\tDivisi       : Dishwasher\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46757755")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Ojak\n");
	printf("\tDivisi       : Dishwasher\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
	}else if(!strcmp(id,"46761234")){
	printf("\n\t========================\n");
	printf("\tNama Pegawai : Indra\n");
	printf("\tDivisi       : Office Boy\n");
	printf("\tJabatan      : Anggota\n");
	printf("\t========================\n");getch();
    }else if(id == d[1].id)
    {
    printf("\n\t========================\n");
	printf("\tNama Pegawai : %s\n", d[1].nama);
	printf("\tDivisi       : %s\n", d[1].divisi);
	printf("\tJabatan      : %s\n", d[1].jabatan);
	printf("\t========================\n");getch();
    }
    {
    printf("ID Tidak Valid");getch();}
}

void penggajian()
{
	int div, posisi, pendapatan, gajiperhari, blembur, pemotongan, jabsen, potabsen, jpotabsen, gajittlpotabsen, jinsentif, ttlinsentif, gajittlinsentif, jlembur, ttllembur, gajittllembur;
	char id[10];
	system("cls");
	printf("\t=======================================================================================\n"
	       "\t======                                                                           ======\n"
	       "\t=============        SELAMAT DATANG DI PROGRAM PENGGAJIAN KARYAWAN      ===============\n"
	       "\t======                                                                           ======\n"
	       "\t=======================================================================================\n\n");
	printf("Masukkan ID Pegawai : "); scanf("%s", id);
	if(!strcmp(id,"46703322")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 2400000;
	gajiperhari = pendapatan / 26;
	ttllembur = 100000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46707160")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 2000000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46706057")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1600000;
	gajiperhari = pendapatan / 26;
	ttllembur = 50000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46708053")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1700000;
	gajiperhari = pendapatan / 26;
	ttllembur = 60000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46708377")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1700000;
	gajiperhari = pendapatan / 26;
	ttllembur = 60000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46714757")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 2100000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46717311")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1900000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46713400")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1900000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46711566")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1600000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46710065")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1600000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46713657")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1600000;
	gajiperhari = pendapatan / 26;
	ttllembur = 70000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46720832")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 2000000;
	gajiperhari = pendapatan / 26;
	ttllembur = 80000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46724532")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1500000;
	gajiperhari = pendapatan / 26;
	ttllembur = 80000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46727144")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1500000;
	gajiperhari = pendapatan / 26;
	ttllembur = 80000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46738765")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1900000;
	gajiperhari = pendapatan / 26;
	ttllembur = 60000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46730945")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1300000;
	gajiperhari = pendapatan / 26;
	ttllembur = 60000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46738099")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1300000;
	gajiperhari = pendapatan / 26;
	ttllembur = 60000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46741356")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 2300000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46746833")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1800000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46746744")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1800000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46748355")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1800000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46749768")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1800000;
	gajiperhari = pendapatan / 26;
	ttllembur = 90000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46757566")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1500000;
	gajiperhari = pendapatan / 26;
	ttllembur = 50000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46751543")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1500000;
	gajiperhari = pendapatan / 26;
	ttllembur = 50000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46757755")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1500000;
	gajiperhari = pendapatan / 26;
	ttllembur = 50000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else if(!strcmp(id,"46761234")){
	printf("\t Berapa Kali anda Lembur dalam Sebulan ini (Hari)\n");
	printf("Jumlah Lembur dalam Sebulan           : "); scanf("%i", &jlembur);
	printf("\t Berapa Kali anda Tidak masuk Kerja dalam Sebulan ini (Hari)\n");
	printf("Jumlah Absen dalam Sebulan            : "); scanf("%i", &jabsen);
	printf("\t Total Pendapatan Pajak Insentif Kafe dalam Sebulan ini\n");
	printf("Total Insentif Kafe dalam Sebulan     : "); scanf("%i", &jinsentif);

	pendapatan = 1200000;
	gajiperhari = pendapatan / 26;
	ttllembur = 30000 * jlembur;
	gajittllembur = pendapatan + ttllembur;
	potabsen = gajiperhari * 30/100;
	jpotabsen = potabsen * jabsen;
	gajittlpotabsen = gajittllembur - jpotabsen;
	ttlinsentif = jinsentif / 26;
	gajittlinsentif = gajittlpotabsen + ttlinsentif;

	printf("\n============================================================\n");
	printf("Gaji Pokok Anda Sebesar           : Rp. %i\n", pendapatan);
	printf("Gaji Perhari                      : Rp. %i\n", gajiperhari);
	printf("Total Bonus Lembur                : Rp. %i\n", ttllembur);
	printf("Total Potongan                    : Rp. %i\n", jpotabsen);
	printf("Total Insentif Kafe dalam Sebulan : Rp. %i\n", jinsentif);
	printf("Insentif yang Diterima            : Rp. %i\n", ttlinsentif);
	printf("=================================================== \n");
	printf("Gaji Bersih                       : Rp. %i\n", gajittlinsentif);
	printf("============================================================\n\n");
	printf("===================================================================\n");
	printf("Gaji Anda Bulan ini Sebesar Rp. %i Akan Dibayarkan Tanggal 28\n", gajittlinsentif);
	printf("===================================================================\n\n"); getch();
    }else{
    printf("ID Tidak Valid");getch();
	}
}

void main()
{
	int pilihan;
	char mengulang;
	do
	{
	system("cls");
	printf("\t=======================================================================================\n"
	       "\t======                                                                           ======\n"
	       "\t==========     SELAMAT DATANG DI PROGRAM PENGGAJIAN KARYAWAN CAFE DAKORA     ==========\n"
	       "\t======                                                                           ======\n"
	       "\t=======================================================================================\n"
	       "\t==========           Jl. Telekomunikasi No. 01, Terusan Buah Batu,           ==========\n"
		   "\t======                        Bandung, Jawa Barat 40257                          ======\n"
	       "\t=======================================================================================\n\n");
	printf("\t=========================\n"
	       "\t======= Menu Utama ======\n"
		   "\t=========================\n"
		   "\t=1. Informasi Pegawai   =\n"
		   "\t=2. Penggajian Pegawai  =\n"
		   "\t=3. Input Pegawai       =\n"
		   "\t=4. Keluar...           =\n"
		   "\t=========================\n");
	printf("\t[1/2/3] : "); scanf("%i", &pilihan);
	switch(pilihan)
	{
		case 1  : informasi(); break;
		case 2  : penggajian(); break;
		case 3  : masukkan(pilihan); break;
	}
	}while(pilihan == 1 || pilihan == 2 || pilihan == 3 || pilihan != 4);
	printf("\n\t===============================================================================\n");
    printf("\t          TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI, SAMPAI JUMPA !\n");
    printf("\t===============================================================================\n");
}
