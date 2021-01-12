#include <dos.h>

int main()
{
int C=262*2;
int CC=277*2;
int D=294*2;
int DD=311*2;
int E=330*2;
int F=349*2;
int FF=370*2;
int G=392*2;
int GG=415*2;
int A=440*2;
int AA=466*2;
int B=494*2;

int o=250;
//song

sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o);
sound(B); //B
delay(o);
sound(D); //D
delay(o);
sound(C); //C
delay(o);
sound(A); //A
delay(o);

nosound();
delay(o);

sound(C); //C
delay(o);
sound(E); //E
delay(o);
sound(A); //A
delay(o);
sound(B); //B
delay(o);

nosound();
delay(o/2);

sound(E); //E
delay(o);
sound(A); //A
delay(o);
sound(B); //B
delay(o);
sound(C); //C
delay(o);

nosound();
delay(o);


sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o);
sound(B); //B
delay(o);
sound(D); //D
delay(o);
sound(C); //C
delay(o);
sound(A); //A
delay(o);

nosound();
delay(o);


sound(C); //C
delay(o);
sound(E); //E
delay(o);
sound(A); //A
delay(o);
sound(B); //B
delay(o);

nosound();
delay(o/2);


sound(E); //E
delay(o);
sound(C); //C
delay(o);
sound(B); //B
delay(o);
sound(A); //A
delay(o);

nosound();
delay(o);


sound(B); //B
delay(o);
sound(C); //C
delay(o);
sound(D); //D
delay(o);
sound(E); //E
delay(o);

nosound();
delay(o/2);

sound(G); //G
delay(o);
sound(F); //F
delay(o);
sound(E); //E
delay(o);
sound(D); //D
delay(o);

nosound();
delay(o/2);


sound(E); //E
delay(o);
sound(E); //E
delay(o);
sound(D); //D
delay(o);
sound(C); //C
delay(o);

nosound();
delay(o/2);


sound(E); //E
delay(o);
sound(D); //D
delay(o);
sound(C); //C
delay(o);
sound(E); //E
delay(o);

nosound();
delay(o);


sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o); 
sound(DD); //D#
delay(o);
sound(E); //E
delay(o);
sound(E); //E
delay(o);
sound(D); //D
delay(o);
sound(C); //C
delay(o);
sound(A); //A
delay(o);

nosound();
delay(o);


sound(C); //C
delay(o);
sound(E); //E
delay(o);
sound(A); //A
delay(o);
sound(B); //B
delay(o);

nosound();
delay(o/2);


sound(E); //E
delay(o);
sound(C); //C
delay(o);
sound(B); //B
delay(o);
sound(A); //A
delay(o);



nosound();
return 0;
}