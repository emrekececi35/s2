#include <stdio.h>
#include <stdlib.h>

int x,satir,sutun,oyuncu=1;

char arazi[9][9],arka[9][9],asatir,tas='X';

/*
void tara(int a,int b, char t){
    //x++
    for(a;a<9;++a){
            if(arazi[a+1][b]==tas &&arazi[a][b]!=' '&&arazi[a][b]!=tas){
                return 1;    
            }
        
    }
    //x--
    for(a;a>0;--a){
            if(arazi[a-1][b]==tas &&arazi[a][b]!=' '&&arazi[a][b]!=tas){
                return 1;    
            }
        
    }
    //y++
    for(b;b<9;++b){
            if(arazi[a][b+1]==tas&&arazi[a][b]!=' '&&arazi[a][b]!=tas){
                return 1;    
            }
        
    }
    //y--
    for(b;b>0;--b){
            if(arazi[a][b-1]==tas &&arazi[a][b]!=' '&&arazi[a][b]!=tas ){
                return 1;    
            }
            
    }
    //x++y++
    for(a;a<9;++a){
        for(){
            
        }
    }
    
    
    
    
}
*/
void tara(int b,int a,int c){
int i = a;
int j = b;
int s1 = 0;
int s2 = 0;
if(c==0){
    arazi[j][i] = 'O';
//sola bakiyor.
if(arazi[j][i-1]=='X'){
while(i>=0){
    i=i-1;
    if(arazi[j][i]=='O'){
        i=a;
       while(s2<s1){
       i=i-1;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
i = a;
//saga bakiyor.
if(arazi[j][i+1]=='X'){
while(i<8){
    i++;
    if(arazi[j][i]=='O'){
        i=a;
       while(s2<s1){
       i++;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
i = a;
//yukari  bakiyor.
if(arazi[j-1][i]=='X'){
while(j>=0){
    j=j-1;
    if(arazi[j][i]=='O'){
        j=b;
       while(s2<s1){
       j=j-1;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
j = b;
//assa bakiyor.
if(arazi[j+1][i]=='X'){
while(j<8){
    j++;
    if(arazi[j][i]=='O'){
       j=b;
       while(s2<s1){
       j++;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
j = b;
//sag ust capraz bakiyor.
if(arazi[j-1][i+1]=='X'){
while(j>=0 && i<8){
    j=j-1;
    i++;
    if(arazi[j][i]=='O'){
       j=b;
       i=a;
       while(s2<s1){
       j=j-1;
       i++;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
  }
 }
s1=0;
s2=0;
i = a;
j = b;
//sol ust capraz bakiyor.
if(arazi[j-1][i-1]=='X'){
while(j>=0 && i>=0){
    j=j-1;
    i=i-1;
    if(arazi[j][i]=='O'){
       j=b;
       i=a;
       while(s2<s1){
       j=j-1;
       i=i-1;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
i = a;
j = b;
//sag alt capraz bakiyor.
if(arazi[j+1][i+1]=='X'){
while(j<8 && i<8){
    j++;
    i++;
    if(arazi[j][i]=='O'){
       j=b;
       i=a;
       while(s2<s1){
       j++;
       i++;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
s1=0;
s2=0;
i = a;
j = b;
//sol alt capraz bakiyor
if(arazi[j+1][i-1]=='X'){
while(j<8 && i>=0){
    j++;
    i=i-1;
    if(arazi[j][i]=='O'){
       j=b;
       i=a;
       while(s2<s1){
       j++;
       i=i-1;
       arazi[j][i]='O';
       s2++;    
       }
       break;
    }
    s1++;
}
}
}
}

int char_to_int1(char x){
    switch(x){
        case 'A':{
            return 0;
        }
        case 'B':{
            return 1;
        }
        case 'C':{
            return 2;
        }
        case 'D':{
            return 3;
        }
        case 'E':{
            return 4;
        }
        case 'F':{
            return 5;
        }
        case 'G':{
            return 6;
        }
        case 'H':{
            return 7;
        }
        default:{
            return -1;
        }    
    }
    return -1;
}

/*
void hamle_al(){
    printf("\n%d.Oyuncu Koordinat Giriniz\n Satir Giriniz:",oyuncu);
    fflush(stdin);
    scanf("%c",&asatir);
    satir=char_to_int1(asatir);
    while(satir==-1){
        printf("\nYanlis Girdiniz Tekrar Girin:\n");
        fflush(stdin);
        scanf("%d",&asatir);
        satir=char_to_int1(asatir);    
    }
    printf("Sutun giriniz\n");
    scanf("%d",&sutun);
    sutun=sutun-1;
    while(sutun>7||sutun<0){
        printf("Satir Degerini Yanlis Giridiniz, Tekrar Giriniz");
        fflush(stdin);
        scanf("%d",sutun);
        sutun=sutun-1;
    }
    
    return hamle_uygula(satir,sutun);
}
*/

int multiplayermi(int x){
    if(x==0){
        printf("Iki Kisilik Oynamayi Sectiniz");
        return 0;
    }
    if(x==1){
        printf("Bilgisayara Karsi Oynamayi Sectiniz");
        return 1;
    }
    if(x!=0 || x!=1){
        printf("Sadece 1 veya 0 Degeri Girebilirsiniz.");
        printf("Tekrar Giris Yapiniz:\n");
        scanf("%d",&x);
        return multiplayermi(x);
    }
}

void yerlestir(char arazi[9][9]){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            arazi[i][j]=' ';
}
}
  arazi[1][1] = 'O';
  arazi[1][2] = 'X';
  arazi[1][3] = 'X';
  arazi[1][4] = 'X';
  arazi[2][4] = 'X';
  arazi[3][3] = 'O';


}

void alan_goster(char arazi[9][9]){
    short i,j;
    char indis='A';
    for( i=0; i < 8; i++) {
        printf("%c",indis++);
        for( j=0; j < 8; j++ ) {
            printf("%c : ",arazi[i][j]);
        }
        printf("\n\n");
    }
    printf("  1  2   3   4   5   6   7   8");
}


int main(void) {
    int secim;
    yerlestir(arazi);
    alan_goster(arazi);
    tara(2,2,0);
    alan_goster(arazi);
}

