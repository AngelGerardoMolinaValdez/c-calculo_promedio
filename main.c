#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main (){ /*promedio*/
textbackground(8);
clrscr();
char nom[10], *materia;
int cantcortes,calificaciones, nummateria;
float promedio,suma=0;
gotoxy(1,3);
textcolor(11);
cprintf("Hola introduce tu nombre por favor: ");
scanf("%s",&nom);
textcolor(20);
gotoxy(1,5);
cprintf("Hola %s este programa te ayudara a",nom);
gotoxy(1,6);
cprintf("sacar el promedio de tus materias.");
gotoxy(1,7);
textcolor(3);
cprintf("�De que materia deseas sacar su promedio?: ");
gotoxy(1,8);
textcolor(14);
cprintf("1.-Modulo");
gotoxy(1,9);
cprintf("2.-Submodulo");
gotoxy(1,10);
cprintf("3.-Geometria");
gotoxy(1,11);
cprintf("4.-Educacion fisica");
gotoxy(1,12);
cprintf("5.-Quimica");
gotoxy(1,13);
cprintf("6.-Actividades culturales");
gotoxy(1,14);
cprintf("7.-Leoye");
gotoxy(1,15);
textcolor(15);
scanf("%i", &nummateria);
if(nummateria<=7){
switch(nummateria){
case 1: materia="Modulo";  break;
case 2: materia="Submodulo";  break;
case 3: materia="Geomtria";  break;
case 4: materia="Educacion fisica" ; break;
case 5: materia="Quimica";  break;
case 6: materia="Actividades cultrales";  break;
case 7: materia="Leoye";  break;
default : printf("No es una matera valida");
}
}
else { cprintf("No es una materia valida");
getch();
return(0);
}
cprintf("Cuantos cortes tiene tu semestre: ");
scanf("%d",&cantcortes);
for(int i=0;i<cantcortes;i++){
gotoxy(1,16+i+1);
textcolor(25);
cprintf("Introduzca la calificacion %d: ",i+1);
scanf("%d",&calificaciones);
suma=suma+calificaciones;
}
promedio=suma/cantcortes;
gotoxy(1,16+i+1);
textcolor(1002);
cprintf("Tu promedio de %s es:%.2f",materia, promedio);
if(promedio<6){
gotoxy(1,17+i+1);
textcolor(6);
cprintf("Lo sentimos tu calificacion es reprobatoria.");
}
else{
gotoxy(1,17+i+1);
textcolor(6);
cprintf("Felicidades has aprobado tu materia.");
}
getch();
}






