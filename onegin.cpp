#define NULL 0
#define MAXLEN 1000
#define LINES 100 /* MAX LINES TO BE SORTED */
#include <iostream>
#include <fstream>
using namespace std;

int GETLINE(char S[],int LIM,ifstream& file){ /* GET LINE INTO S,RETURN LENGTH */
int  I;char C; //for(int i=0;i<=20;i++){C=file.get();cout<<C<<i<<"\n";S[i]=C;cout<<S[i]<<"qqq";if (C=='\n') cout<<C<<"Aaa";}

C=file.get();S[0] = C;cout<<C;
for(I=1;I<LIM-1 && (C!=EOF && C!='\n');++I)
{C=file.get();S[I] = C;cout<<C;}
if (C == '\n') S[I] = C;
++I;
S[I] = '\0';cout<<I<<"k";
return(I);}

STRCPY(char *S, char  *T) {cout<<5; /* COPY T TO S; POINTER VERSION 2 */
while ((*S++ = *T++) != '\0'){}}




int READLINES(char *LINEPTR[], int MAXLINES,ifstream & file) {
int LEN, NLINES;
char *P, *ALLOC(), LINE[MAXLEN];
NLINES = 0;


while ((GETLINE(LINE, MAXLEN,file)) > 2){NLINES++;cout<<NLINES<<"aaa";}cout<<"ppp"<<NLINES<<"ppp";
if (NLINES >= MAXLINES){
return(-1);} /*else {

if ((P = (char*)malloc(LEN)) == NULL)
{return (-1);}*/
else {
LINE[LEN-1] = '\0';
 STRCPY(P,LINE);
LINEPTR[NLINES++] = P;
}cout<<NLINES<<"aaa";
return(NLINES);
}


STRCMP(char *S,char *T) { /* RETURN <0 IF S<T, 0 IF S==T, >0 IF S>T */
for ( ; *S == *T; S++, T++)
if (*S == '\0') {
return(0);}
return(*S-*T);}


SORT(char *V[],int N) /* SORT STRINGS V[0] ... V[N-1] */
{
int GAP, I, J;
char *TEMP;
for (GAP = N/2; GAP > 0; GAP /= 2)
for (I = GAP; I < N; I++)
for (J = I - GAP; J >= 0; J -= GAP)
{


if (STRCMP(V[J], V[J+GAP]) <= 0)
break;
TEMP = V[J];
V[J] = V[J+GAP];
V[J+GAP] = TEMP;
}}




WRITELINES(char *LINEPTR[],int NLINES) /* WRITE OUTPUT LINES */
{
int I;
while (--NLINES >= 0)
cout<<*LINEPTR++<<"\n";
}

/* SORT INPUT LINES */

int main() {
ifstream file;
file.open("D:\\1\\as.txt");
char *LINEPTR[LINES];
int NLINES; /* NUMBER OF INPUT LINES READ */

if (!file)
 {
 cout << "no";
 return -1;
 }
 else
 { cout << "ye";
if ((NLINES = READLINES(LINEPTR, LINES,file)) >= 0)
{
     SORT(LINEPTR,
NLINES); WRITELINES(LINEPTR, NLINES);
}
else
{

cout<<"INPUT TOO BIG TO SORT"<<"\n";
}
return 0;}}
