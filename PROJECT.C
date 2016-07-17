#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void clapping();

void main()
{
int gd=DETECT,gm;
void stage();
void people();
void fatman();
void thinman();
//void clapping();
initgraph(&gd,&gm,"..\\BGI");
printf("%d %d",getmaxx(),getmaxy());
stage();
people();
thinman();
fatman();
//clapping();
getch();
closegraph();

}



void thinman()
{


int i;
//thinman 1
circle(250,250,10); //head of thinman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(250,260,250,288); //body part 1
line(250,291,250,310); //body part 2
line(250,270,261,280);   //right arm of fatman
circle(261,282,2);  //right hand
line(250,270,240,280);   //left arm of fatman
circle(240,282,2);  //left hand
line(250,310,260,325);  //right leg
circle(260,327,2); //right foot
line(250,310,240,325);  //left leg
circle(240,327,2); //left foot


delay(400);
setcolor(BLUE);
//thinman 1
circle(250,250,10); //head of thinman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(250,260,250,288); //body part 1
line(250,270,261,280);   //right arm of fatman
circle(261,282,2);  //right hand
line(250,270,240,280);   //left arm of fatman
circle(240,282,2);  //left hand
setcolor(GREEN);
line(250,291,250,310); //body part 2
line(250,310,260,325);  //right leg
circle(260,327,2); //right foot
line(250,310,240,325);  //left leg
circle(240,327,2); //left foot


for(i=250;i>110;i=i-20)
{
setcolor(WHITE);
circle(i,250,10); //head of thinman
circle(i-5,245,1);//eye
arc(i-7,250,270,360,3);  //mouth
line(i,310,i+10,320); //left leg
line(i+10,320,i+5,320); //left foot
line(i,305,i-10,310); //right leg
line(i-10,310,i-15,315);
line(i-15,315,i-20,315);
line(i,270,i+11,280);   //right arm of fatman
circle(i+11,282,2);  //right hand
line(i,270,i-10,280);   //left arm of fatman
circle(i-10,282,2);  //left hand
line(i,260,i,288); //body part 1
line(i,291,i,310); //body part 2

delay(600);
setcolor(BLUE);
circle(i,250,10); //head of thinman
circle(i-5,245,1);//eye
arc(i-7,250,270,360,3);  //mouth
line(i,270,i+11,280);   //right arm of fatman
circle(i+11,282,2);  //right hand
line(i,270,i-10,280);   //left arm of fatman
circle(i-10,282,2);  //left hand
line(i,260,i,288); //body part 1
setcolor(GREEN);
line(i,291,i,310); //body part 2
line(i,310,i+10,320); //left leg
line(i+10,320,i+5,320); //left foot
line(i,305,i-10,310); //right leg
line(i-10,310,i-15,315);
line(i-15,315,i-20,315);
i=i-20;

setcolor(WHITE);
circle(i,250,10); //head of thinman
circle(i-5,245,1);//eye
arc(i-7,250,270,360,3);  //mouth
line(i,310,i-10,320); //left leg
line(i-10,320,i-15,320); //left foot
line(i,305,i+10,313); //right leg
line(i+10,313,i+15,310);
line(i+15,310,i+18,314);
line(i,270,i+11,280);   //right arm of fatman
circle(i+11,282,2);  //right hand
line(i,270,i-10,280);   //left arm of fatman
circle(i-10,282,2);  //left hand
line(i,260,i,288); //body part 1
line(i,291,i,310); //body part 2

delay(600);
setcolor(BLUE);

circle(i,250,10); //head of thinman
circle(i-5,245,1);//eye
arc(i-7,250,270,360,3);  //mouth
line(i,270,i+11,280);   //right arm of fatman
circle(i+11,282,2);  //right hand
line(i,270,i-10,280);   //left arm of fatman
circle(i-10,282,2);  //left hand
line(i,260,i,288); //body part 1
setcolor(GREEN);
line(i,291,i,310); //body part 2
line(i,310,i-10,320); //left leg
line(i-10,320,i-15,320); //left foot
line(i,305,i+10,313); //right leg
line(i+10,313,i+15,310);
line(i+15,310,i+18,314);
}
setcolor(WHITE);
circle(110,250,10); //head of thinman
circle(105,245,1);  //left eye
circle(115,245,1);   //right eye
arc(110,255,180,360,3);  //mouth
line(110,260,110,288); //body part 1
line(110,291,110,310); //body part 2
line(110,270,121,280);   //right arm of fatman
circle(121,282,2);  //right hand
line(110,270,100,280);   //left arm of fatman
circle(100,282,2);  //left hand
line(110,310,120,325);  //right leg
circle(120,327,2); //right foot
line(110,310,100,325);  //left leg
circle(100,327,2); //left foot

delay(400);
setcolor(BLUE);
circle(110,250,10); //head of thinman
circle(105,245,1);  //left eye
circle(115,245,1);   //right eye
arc(110,255,180,360,3);  //mouth

setcolor(WHITE);
circle(110,250,10); //head of fatman
circle(115,245,1);//eye
arc(116,250,270,360,3);  //mouth


delay(400);
setcolor(BLUE);
line(110,270,121,280);   //right arm of fatman
circle(121,282,2);  //right hand
line(110,270,100,280);   //left arm of fatman
circle(100,282,2);  //left hand
setcolor(GREEN);
line(110,310,120,325);  //right leg
circle(120,327,2); //right foot

setcolor(WHITE);
circle(110,250,10); //head of fatman
circle(115,245,1);//eye
arc(116,250,270,360,3);  //mouth
line(110,270,121,260);   //right arm of fatman
circle(121,262,2);  //right hand
line(110,310,120,305);  //right leg
circle(120,305,2); //right foot
line(110,270,105,280);   //left arm of fatman
circle(105,282,2);  //left hand

delay(400);
setcolor(BLUE);
circle(110,250,10); //head of fatman
circle(115,245,1);//eye
arc(116,250,270,360,3);  //mouth
line(110,270,121,260);   //right arm of fatman
circle(121,262,2);  //right hand
line(110,270,105,280);   //left arm of fatman
circle(105,282,2);  //left hand
line(110,260,110,288); //body part 1
setcolor(GREEN);
line(110,291,110,310); //body part 2
line(110,310,120,305);  //right leg
circle(120,305,2); //right foot
line(110,310,100,325);  //left leg
circle(100,327,2); //left foot


setcolor(WHITE);
arc(170,270,60,150,40); //body
circle(200,240,10); //head of thinman
circle(205,235,1);  //left eye
circle(204,245,1);   //right eye
arc(195,240,90,270,3);  //mouth
line(180,230,195,220); //right hand
line(180,230,192,250); //left hand
line(135,250,130,260); //left leg
line(135,250,130,240); //right leg

delay(300);
setcolor(BLUE);
arc(170,270,60,150,40); //body
circle(200,240,10); //head of thinman
circle(205,235,1);  //left eye
circle(204,245,1);   //right eye
arc(195,240,90,270,3);  //mouth
line(180,230,195,220); //right hand
line(180,230,192,250); //left hand
line(135,250,130,260); //left leg
line(135,250,130,240); //right leg

setcolor(WHITE);
//next position
circle(220,320,10); //head of thinman
circle(215,325,1);  //left eye
circle(225,325,1);   //right eye
arc(220,315,0,180,3);  //mouth
line(220,260,220,288); //body part 1
line(220,291,220,310); //body part 2
line(220,308,240,318);   //right arm of fatman
line(240,318,240,328);
circle(240,330,2);  //right hand
line(220,308,200,318);   //left arm of fatman
line(200,318,200,328);
circle(200,330,2);  //left hand
line(220,260,230,250);  //right leg
circle(230,248,2); //right foot
line(220,260,210,250);  //left leg
circle(210,248,2); //left foot

delay(300);
setcolor(GREEN);
circle(220,320,10); //head of thinman
circle(215,325,1);  //left eye
circle(225,325,1);   //right eye
arc(220,315,0,180,3);  //mouth
line(220,291,220,310); //body part 2
line(220,308,240,318);   //right arm of fatman
line(240,318,240,328);
circle(240,330,2);  //right hand
line(220,308,200,318);   //left arm of fatman
line(200,318,200,328);
circle(200,330,2);  //left hand
setcolor(BLUE);
line(220,260,220,288); //body part 1
line(220,260,230,250);  //right leg
circle(230,248,2); //right foot
line(220,260,210,250);  //left leg
circle(210,248,2); //left foot


setcolor(WHITE);
//next
arc(300,270,60,150,40); //body
circle(265,260,10); //head of thinman
circle(265,265,1);  //left eye
circle(260,265,1);   //right eye
arc(265,255,0,180,3);  //mouth
line(285,235,280,245); //right hand
line(285,235,280,225); //left hand
line(320,236,330,226); //left leg
line(320,236,330,246); //right leg

delay(300);
setcolor(BLUE);
arc(300,270,60,150,40); //body
circle(265,260,10); //head of thinman
circle(265,265,1);  //left eye
circle(260,265,1);   //right eye
arc(265,255,0,180,3);  //mouth
line(285,235,280,245); //right hand
line(285,235,280,225); //left hand
line(320,236,330,226); //left leg
line(320,236,330,246); //right leg

setcolor(WHITE);
//next pos
circle(370,250,10); //head of thinman
circle(365,245,1);  //left eye
circle(375,245,1);   //right eye
arc(370,255,180,360,3);  //mouth
line(370,260,370,288); //body part 1
line(370,291,370,310); //body part 2
line(370,270,381,280);   //right arm of fatman
circle(381,282,2);  //right hand
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand
line(370,310,380,325);  //right leg
circle(380,327,2); //right foot
line(370,310,360,325);  //left leg
circle(360,327,2); //left foot


delay(400);
setcolor(BLUE);
circle(370,250,10); //head of thinman
circle(365,245,1);  //left eye
circle(375,245,1);   //right eye
arc(370,255,180,360,3);  //mouth
line(370,260,370,288); //body part 1
line(370,270,381,280);   //right arm of fatman
circle(381,282,2);  //right hand
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand
setcolor(GREEN);
line(370,291,370,310); //body part 2
line(370,310,380,325);  //right leg
circle(380,327,2); //right foot
line(370,310,360,325);  //left leg
circle(360,327,2); //left foot

for(i=0;i<2;i++) {
setcolor(WHITE);
circle(430,310,10); //head of thinman
circle(435,305,1);  //left eye
circle(435,315,1);   //right eye
arc(425,310,90,270,3);  //mouth
line(370,310,420,310); //body
line(410,310,420,330); //right hand
line(420,330,430,320);
line(410,310,400,305);//left hand
line(370,310,350,315); //right leg
line(350,315,355,310);
line(370,310,350,305); //left leg
line(350,305,355,312);
line(355,312,350,312);

delay(400);
setcolor(GREEN);

circle(430,310,10); //head of thinman
circle(435,305,1);  //left eye
circle(435,315,1);   //right eye
arc(425,310,90,270,3);  //mouth
line(370,310,420,310); //body
line(410,310,420,330); //right hand
line(420,330,430,320);
line(410,310,400,305);//left hand
line(370,310,350,315); //right leg
line(350,315,355,310);
line(370,310,350,305); //left leg
line(350,305,355,312);
line(355,312,350,312);

setcolor(WHITE);

circle(430,310,10); //head of thinman
circle(435,305,1);  //left eye
circle(435,315,1);   //right eye
arc(425,310,90,270,3);  //mouth
line(370,310,420,310); //body
line(410,310,420,330); //right hand
line(420,330,430,320);
line(410,310,400,298);//left hand
line(370,310,350,315); //right leg
line(350,315,355,310);
line(370,310,350,298); //left leg
//line(350,305,355,312);
//line(355,312,350,312);
delay(400);
setcolor(GREEN);

circle(430,310,10); //head of thinman
circle(435,305,1);  //left eye
circle(435,315,1);   //right eye
arc(425,310,90,270,3);  //mouth
line(370,310,420,310); //body
line(410,310,420,330); //right hand
line(420,330,430,320);
line(410,310,400,298);//left hand
line(370,310,350,315); //right leg
line(350,315,355,310);
line(370,310,350,298); //left leg
//line(350,305,355,312);
//line(355,312,350,312);
}
setcolor(WHITE);
circle(370,250,10); //head of thinman
circle(365,245,1);  //left eye
circle(375,245,1);   //right eye
arc(370,255,180,360,3);  //mouth
line(370,260,370,288); //body part 1
line(370,291,370,310); //body part 2
line(370,270,381,280);   //right arm of fatman
circle(381,282,2);  //right hand
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand
line(370,310,380,325);  //right leg
circle(380,327,2); //right foot
line(370,310,360,325);  //left leg
circle(360,327,2); //left foot

//bye
delay(400);
setcolor(BLUE);
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand

for(i=0;i<2;i++){
setcolor(WHITE);
line(370,270,360,280);   //left arm of fatman
line(360,280,363,270);
circle(363,272,2);  //left hand

delay(400);
setcolor(BLUE);
line(370,270,360,280);   //left arm of fatman
line(360,280,363,270);
circle(363,272,2);  //left hand

setcolor(WHITE);
line(370,270,360,280);   //left arm of fatman
line(360,280,350,270);
circle(350,272,2);  //left hand

delay(400);
setcolor(BLUE);
line(370,270,360,280);   //left arm of fatman
line(360,280,350,270);
circle(350,272,2);  //left hand
}
setcolor(WHITE);
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand

clapping();

delay(400);
setcolor(BLUE);
circle(370,250,10); //head of thinman
circle(365,245,1);  //left eye
circle(375,245,1);   //right eye
arc(370,255,180,360,3);  //mouth
line(370,260,370,288); //body part 1
line(370,270,381,280);   //right arm of fatman
circle(381,282,2);  //right hand
line(370,270,360,280);   //left arm of fatman
circle(360,282,2);  //left hand
setcolor(GREEN);
line(370,291,370,310); //body part 2
line(370,310,380,325);  //right leg
circle(380,327,2); //right foot
line(370,310,360,325);  //left leg
circle(360,327,2); //left foot
}



void fatman()
{
int i;
setcolor(WHITE);
line(240,240,260,240);  //hat for fatman
rectangle(246,230,254,240);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
ellipse(250,285,115,360+70,7,25);   //body of fatman
line(257,270,268,280);   //right arm of fatman
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
circle(268,282,2);  //right hand
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot
//line(264,335,264,340);


//first dance step

delay(600);
setcolor(BLUE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(243,270,233,280);
circle(233,282,2);
//line(257,270,268,280);   //right arm of fatman
//circle(268,282,2);  //right hand

//first step left side showing hand up
for(i=0;i<2;i++){
setcolor(WHITE);
line(243,270,233,250);  //left hand
circle(233,252,2);
line(234,250,234,248);
//line(257,270,267,250);  //right hand    flying high
//circle(267,252,2);
//line(266,250,266,248);
circle(250,250,10); //head of fatman
circle(245,245,1);//eye
arc(243,250,270,360,3);  //mouth

delay(400);
setcolor(BLUE);
line(243,270,233,250);
circle(233,252,2);
line(234,250,234,248);
//line(257,270,267,250);
//circle(267,252,2);
//line(266,250,266,248);
circle(250,250,10); //head of fatman
circle(245,245,1);//eye
arc(243,250,270,360,3);  //mouth

setcolor(WHITE);

circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(243,270,238,275);
line(238,275,246,285);
circle(246,287,2);
line(248,288,250,290);
delay(400);
setcolor(BLUE);

circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(243,270,238,275);
line(238,275,246,285);
circle(246,287,2);
line(248,288,250,290);
}


setcolor(WHITE);

circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(243,270,233,280);
circle(233,282,2);



delay(200);
setcolor(BLUE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,268,280);   //right arm of fatman
circle(268,282,2);  //right hand

for(i=0;i<2;i++){
setcolor(WHITE);
line(257,270,267,250);  //right hand    flying high
circle(267,252,2);
line(266,250,266,248);
circle(250,250,10); //head of fatman
circle(255,245,1);//eye
arc(256,250,270,360,3);  //mouth

delay(600);
setcolor(BLUE);
line(257,270,267,250);  //right hand    flying high
circle(267,252,2);
line(266,250,266,248);
circle(250,250,10); //head of fatman
circle(255,245,1);//eye
arc(256,250,270,360,3);  //mouth

setcolor(WHITE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,262,275);   //right arm of fatman
line(262,275,256,285);
circle(256,287,2);  //right hand

delay(600);
setcolor(BLUE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,262,275);   //right arm of fatman
line(262,275,256,285);
circle(256,287,2);  //right hand

}
setcolor(WHITE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,268,280);   //right arm of fatman
circle(268,282,2);  //right hand


delay(200);
setcolor(BLUE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,268,280);   //right arm of fatman
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
circle(268,282,2);  //right hand

for(i=0;i<2;i++){
 setcolor(WHITE);
 circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);

 delay(400);
 setcolor(BLUE);
 circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
  line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);


 setcolor(WHITE);
 circle(250,250,10); //head of fatman
 circle(245,245,1);//eye
 arc(243,250,270,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,222,258);

 delay(400);
 setcolor(BLUE);
 circle(250,250,10); //head of fatman
 circle(245,245,1);//eye
 arc(243,250,270,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,222,258);


setcolor(WHITE);
 circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
  line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);

 delay(400);
 setcolor(BLUE);

 circle(250,250,10); //head of fatman
 circle(245,245,1);  //left eye
 circle(255,245,1);   //right eye
 arc(250,255,180,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);


 setcolor(WHITE);
 circle(250,250,10); //head of fatman
 circle(255,245,1);//eye
 arc(256,250,270,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,277,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,240,258);

 delay(400);
 setcolor(BLUE);
 circle(250,250,10); //head of fatman
 circle(255,245,1);//eye
 arc(256,250,270,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,277,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,240,258);


 }
  setcolor(WHITE);
  circle(250,250,10); //head of fatman
 circle(245,245,1);  //left eye
 circle(255,245,1);   //right eye
 arc(250,255,180,360,3);  //mouth
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);

 delay(400);
 setcolor(BLUE);
 line(257,270,267,272); //right hand
 line(267,272,269,258);
 line(269,258,261,258);
 line(243,270,233,272); //left hand
 line(233,272,231,258);
 line(231,258,239,258);

 setcolor(WHITE);
 line(257,270,268,280);   //right arm of fatman
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
circle(268,282,2);  //right hand

delay(400);
setcolor(BLUE);
line(257,270,268,280);   //right arm of fatman
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
circle(268,282,2);  //right hand
setcolor(GREEN);
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot
//dancing with touching hat and leg
for(i=0;i<2;i++) {
setcolor(WHITE);
line(243,270,233,250);  //left hand
line(233,250,240,240);
line(257,270,267,250);   //right hand
line(267,250,260,240);
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot

delay(400);
setcolor(GREEN);
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot


setcolor(WHITE);
line(247,310,245,325);//left leg
circle(245,327,2); //left foot
line(254,310,256,325);  //right leg
circle(256,327,2); //right foot

delay(400);
setcolor(BLUE);
line(243,270,233,250);  //left hand
line(233,250,240,240);
line(257,270,267,250);   //right hand
line(267,250,260,240);
setcolor(GREEN);
line(247,310,245,325);//left leg
circle(245,327,2); //left foot
line(254,310,256,325);  //right leg
circle(256,327,2); //right foot

 }

 
setcolor(WHITE);
line(257,270,268,280);   //right arm of fatman
//line(243,270,233,280);   //left arm of fatman
//circle(233,282,2);  //left hand
line(243,270,233,250);  //left hand
line(233,250,240,240);
circle(268,282,2);  //right hand
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot



delay(400);
setcolor(BLUE);
line(243,270,233,250);  //left hand
line(233,250,240,240);
line(240,240,260,240);  //hat for fatman
rectangle(246,230,254,240);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
setcolor(GREEN);
line(247,310,237,325);  //left leg
circle(237,327,2); //left foot

//lifting hat by left hand
setcolor(WHITE);
circle(250,250,10); //head of fatman
circle(245,245,1);//eye
arc(243,250,270,360,3);  //mouth
line(243,270,233,270);//left hand
circle(233,272,2); //left hand
line(231,270,231,290);//hat for fatman
rectangle(231,276,236,284);
line(247,310,237,317);  //left leg
line(237,317,247,325);
circle(247,327,2); //left foot

delay(600);
setcolor(BLUE);
circle(250,250,10); //head of fatman
circle(245,245,1);//eye
arc(243,250,270,360,3);  //mouth
line(243,270,233,270);//left hand
circle(233,272,2);
line(231,270,231,290);//hat for fatman
rectangle(231,276,236,284);
circle(268,282,2);  //right hand
line(257,270,268,280);   //right arm of fatman
setcolor(GREEN);
line(247,310,237,317);  //left leg
line(237,317,247,325);
circle(247,327,2); //left foot

setcolor(WHITE);
  circle(250,250,10); //head of fatman
 circle(245,245,1);  //left eye
 circle(255,245,1);   //right eye
 arc(250,255,180,360,3);  //mouth
line(243,270,238,275); //left hand
line(238,275,246,285);
line(257,270,262,275);   //right arm of fatman
line(262,275,256,285);
line(246,280,256,280); //hat for fatman
rectangle(248,280,254,285);
line(247,310,237,325);  //left leg
circle(237,327,2); //left foot

 delay(400);
setcolor(BLUE);
 circle(250,250,10); //head of fatman
 circle(245,245,1);  //left eye
 circle(255,245,1);   //right eye
 arc(250,255,180,360,3);  //mouth
 line(257,270,262,275);   //right arm of fatman
line(262,275,256,285);
line(246,280,256,280); //hat for fatman
rectangle(248,280,254,285);
setcolor(GREEN);
line(254,310,264,325);  //right leg
circle(264,327,2); //right foot

setcolor(WHITE);
circle(250,250,10); //head of fatman
circle(255,245,1);//eye
arc(256,250,270,360,3);  //mouth
line(257,270,267,270); //right hand
circle(269,270,2);
line(270,272,270,292); //hat for fatman
rectangle(270,278,275,286);
line(254,310,264,317);  //right leg
line(264,317,254,325);
circle(257,327,2);

delay(400);
setcolor(BLUE);
line(257,270,267,270); //right hand
circle(269,270,2);
line(270,272,270,292); //hat for fatman
rectangle(270,278,275,286);


setcolor(WHITE);
line(240,240,260,240);  //hat for fatman
rectangle(246,230,254,240);
line(257,270,267,250);   //right hand
line(267,250,260,240);

delay(400);
setcolor(BLUE);
line(257,270,267,250);   //right hand
line(267,250,260,240);
circle(250,250,10); //head of fatman
circle(255,245,1);//eye
arc(256,250,270,360,3);  //mouth
line(243,270,238,275); //left hand
line(238,275,246,285);
setcolor(GREEN);
line(254,310,264,317);  //right leg
line(264,317,254,325);
circle(257,327,2);


setcolor(WHITE);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
line(257,270,268,280);   //right arm of fatman
circle(268,282,2);  //right hand
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
line(254,310,264,325);  //right leg
circle(264,327,2); //right foot

//bye bye
delay(400);
setcolor(BLUE);
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand

for(i=0;i<3;i++){
setcolor(WHITE);
line(243,270,233,275); //left hand
line(233,275,238,265);   //1st phase of bye
circle(238,267,2);

delay(200);
setcolor(BLUE);
line(233,275,238,265);   //1st phase of bye
circle(238,267,2);


setcolor(WHITE);
line(233,275,228,265); //second phase
circle(228,267,2);

delay(200);
setcolor(BLUE);
line(243,270,233,275); //left hand
line(233,275,228,265); //second phase
circle(228,267,2);

}

setcolor(WHITE);
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand

clapping();

setcolor(BLUE);
line(240,240,260,240);  //hat for fatman
rectangle(246,230,254,240);
circle(250,250,10); //head of fatman
circle(245,245,1);  //left eye
circle(255,245,1);   //right eye
arc(250,255,180,360,3);  //mouth
ellipse(250,285,115,360+70,7,25);   //body of fatman
line(257,270,268,280);   //right arm of fatman
line(243,270,233,280);   //left arm of fatman
circle(233,282,2);  //left hand
circle(268,282,2);  //right hand
setcolor(GREEN);
line(254,310,264,325);  //right leg
line(247,310,237,325);  //left leg
circle(264,327,2); //right foot
circle(237,327,2); //left foot
ellipse(250,285,200,350,7,25); //trying to clear body


}



void stage()
{
   int i;
// rectangle(40,40,500,360);
// rectangle(100,70,440,250);
// line(40,280,500,280);
  // outtextxy(70,70,"stickman dance show");
   rectangle(3,5,610,27);  //welcome bar
   rectangle(8,30,18,420);  //left side first pole
   setfillstyle(HATCH_FILL,WHITE);
   floodfill(9,35,WHITE);
   rectangle(47,30,55,420);  //left side second pole
   setfillstyle(HATCH_FILL,WHITE);
   floodfill(49,33,WHITE);
   rectangle(595,30,605,420);  //right side second pole
   setfillstyle(HATCH_FILL,WHITE);
   floodfill(598,50,WHITE);
   rectangle(555,30,565,420);  //right side first pole
   setfillstyle(HATCH_FILL,WHITE);
   floodfill(556,50,WHITE);
   line(3,5,45,70); //left top bar \ line
   line(30,47,45,70);  //creating small triangle at left
    line(30,47,46,47);
    line(46,47,46,70);
  // setcolor(GREEN);
   line(53,70,558,70);
   line(610,5,567,70); //right top bar / line
   line(567,70,583,47); //creating small triangle in right
   line(583,47,566,47);
   line(566,47,566,70);

   setfillstyle(SOLID_FILL,3);//3 11 13
   floodfill(100,40,WHITE);
   setfillstyle(SOLID_FILL,3);
   floodfill(44,49,WHITE);
  setfillstyle(SOLID_FILL,3);
  floodfill(569,48,WHITE);

  setfillstyle(SOLID_FILL,3);   //trying to color above cieling
  floodfill(20,9,WHITE);
  line(7,7,606,7);
  line(7,30,606,30);
  line(606,7,606,30);
  line(7,7,7,30);
  //line / and \
  line(3,27,7,30);   // \
  line(606,30,610,27);
  line(3,5,7,7);         //\
  line(606,7,610,5);

  //trying to make good bar
 // line(16,27,21,30);
 // line(13,5,16,7);
 for(i=23;i<605;i=i+20) {
  line(i,5,i,27);
  line(i+5,7,i+5,30);
  line(i,5,i+5,7);
  line(i,27,i+5,30);
  line(i-20,5,i,27);
  line(i-20,27,i,5);
  line(i+5-20,7,i+5,30);
  line(i+5-20,30,i+5,7);
  }
   rectangle(45,70,567,75); //small rectangle bar inside
   setfillstyle(HATCH_FILL,WHITE);
   floodfill(250,72,WHITE);

   //backside bar
   line(59,75,59,292);  //left side
   line(61,75,61,291);
   line(63,75,63,290);
  // line(63,289,60,292);
  // setfillstyle(HATCH_FILL,WHITE);
  // floodfill(61,289,WHITE);
  for(i=77;i<290;i=i+2)
  {
   line(59,i,63,i);
  }
  //right side
  line(547,75,547,290);
  line(549,75,549,291);
  line(551,75,551,292);
  for(i=77;i<290;i=i+2)
  {
  line(547,i,551,i);
  }

  //middle bar
  rectangle(55,48,555,55);
  setfillstyle(HATCH_FILL,WHITE);
  floodfill(56,49,WHITE);

  //middle bar light
 // rectangle(272,55,311,63);
  for(i=62;(i+6)<555;i=i+15) {
 // rectangle(62,55,68,63);
   rectangle(i,55,i+6,63);
   setfillstyle(SOLID_FILL,8);
  floodfill(i+1,62,WHITE);
 // circle(65,62,2);
 circle(i+3,62,2);
  setfillstyle(SOLID_FILL,WHITE);
 // floodfill(65,62,WHITE);
 floodfill(i+3,62,WHITE);
    }



  //light at the top of bars
  rectangle(19,31,46,47);    //left one
  circle(24,36,2);
  circle(30,36,2);
  circle(36,36,2);
  circle(42,36,2);
  circle(24,42,2);
  circle(30,42,2);
  circle(36,42,2);
  circle(42,42,2);

  //right one
  rectangle(566,31,594,47);
  circle(571,36,2);
  circle(577,36,2);
  circle(583,36,2);
  circle(589,36,2);
  circle(571,42,2);
  circle(577,42,2);
  circle(583,42,2);
  circle(589,42,2);

  //coloring left one
    setfillstyle(SOLID_FILL,WHITE); //circle 1
   floodfill(24,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 2
   floodfill(30,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 3
   floodfill(36,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 4
   floodfill(42,36,WHITE);
    setfillstyle(SOLID_FILL,WHITE); // down circle 1
   floodfill(24,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 2
   floodfill(30,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 3
   floodfill(36,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 4
   floodfill(42,42,WHITE);


  //coloring right one
    setfillstyle(SOLID_FILL,WHITE); //circle 1
   floodfill(571,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 2
   floodfill(577,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 3
   floodfill(583,36,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 4
   floodfill(588,36,WHITE);
    setfillstyle(SOLID_FILL,WHITE); // down circle 1
   floodfill(571,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 2
   floodfill(577,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 3
   floodfill(583,42,WHITE);
   setfillstyle(SOLID_FILL,WHITE);  //circle 4
   floodfill(589,42,WHITE);



   rectangle(63,76,547,289);  //back of stage
   setfillstyle(1,BLUE);
   floodfill(88,88,WHITE);
   outtextxy(230,90,"STICKMAN DANCE SHOW");


  //woofer inside the stage left
  rectangle(64,240,91,289);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(65,242,WHITE);
  line(92,240,92,289);
  line(64,239,91,239);
   //left woofer inside stage
   circle(72,248,4);
   circle(82,248,4);
   circle(72,263,4);
   circle(82,263,4);
   rectangle(68,270,87,287);  //down rectangle of woofer
   rectangle(73,275,82,282);   //down rectangle inner rect

   //coloring left inner woofer in stage
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(72,248,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(82,248,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(72,263,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(82,263,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(69,271,WHITE);
    setfillstyle(SOLID_FILL,7);
   floodfill(74,276,WHITE);

   //woofer inside stage right
   rectangle(519,240,546,289);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(522,242,WHITE);
   line(518,240,518,289);
   line(519,239,546,239);

   circle(527,248,4);
   circle(537,248,4);
   circle(527,263,4);
   circle(537,263,4);
   rectangle(523,270,542,287);  //down rectangle of woofer
   rectangle(528,275,537,282);   //down rectangle inner rect

   //coloring right inner woofer in stage
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(527,248,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(537,248,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(527,263,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(537,263,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(524,271,WHITE);
    setfillstyle(SOLID_FILL,7);
   floodfill(529,276,WHITE);


   rectangle(19,265,46,420); //woofer of left side
  // line(40,265,40,420); //|  partition
   line(19,343,46,343);  // --partition
   line(19,344,46,344); //same line above +1

   //left woofer part 1 upper part
   rectangle(20,267,30,272);//small rectangles first row 1 position
   rectangle(34,267,44,272);//first row 2 position
   rectangle(20,295,30,300);
   rectangle(34,295,44,300);
   circle(24,285,5);
   circle(39,285,5);
   circle(24,310,5);
   circle(39,310,5);
   rectangle(20,320,45,340);  //down rectangle of woofer
   rectangle(25,325,40,335);   //down rectangle inner rect

   //left woofer part 2 down
    rectangle(20,346,30,351);//small rectangles first row 1 position
   rectangle(34,346,44,351);//first row 2 position
   rectangle(20,373,30,378);
   rectangle(34,373,44,378);
   circle(24,364,5);
   circle(39,364,5);
   circle(24,388,5);
   circle(39,388,5);
   rectangle(20,398,45,418);  //down rectangle of woofer
   rectangle(25,403,40,413);   //down rectangle inner rect

   //coloring for left woofer  part 1
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(24,285,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(24,310,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(39,310,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(39,285,WHITE);
   setfillstyle(SOLID_FILL,8);  //rectangle
   floodfill(25,268,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(35,268,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(24,296,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(35,296,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(24,321,WHITE);
   setfillstyle(SOLID_FILL,7);
   floodfill(26,326,WHITE);

     //coloring for left woofer  part 2
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(24,364,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(39,364,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(24,388,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(39,388,WHITE);
   setfillstyle(SOLID_FILL,8);  //rectangle
   floodfill(21,347,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(35,347,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(21,375,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(35,375,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(22,399,WHITE);
   setfillstyle(SOLID_FILL,7);
   floodfill(26,405,WHITE);


   rectangle(565,265,595,420); //woffer at right side


    line(565,343,595,343);  // --partition
   line(565,344,595,344); //same line above +1

   //right woofer part 1 upper part
   rectangle(568,267,578,272);//small rectangles first row 1 position
   rectangle(582,267,592,272);//first row 2 position
   rectangle(568,295,578,300);
   rectangle(582,295,592,300);
   circle(572,285,5);
   circle(587,285,5);
   circle(572,310,5);
   circle(587,310,5);
   rectangle(566,320,594,340);  //down rectangle of woofer
   rectangle(571,325,589,335);   //down rectangle inner rect

   //right woofer part 2 down
    rectangle(568,346,578,351);//small rectangles first row 1 position
   rectangle(582,346,592,351);//first row 2 position
   rectangle(568,373,578,378);
   rectangle(582,373,592,378);
   circle(572,364,5);
   circle(587,364,5);
   circle(572,388,5);
   circle(587,388,5);
   rectangle(566,398,594,418);  //down rectangle of woofer
   rectangle(571,403,589,413);   //down rectangle inner rect



   //coloring for right woofer  part 1
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(572,285,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(587,310,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(572,310,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(587,285,WHITE);
   setfillstyle(SOLID_FILL,8);  //rectangle
   floodfill(569,268,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(583,268,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(569,296,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(583,296,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(567,321,WHITE);
   setfillstyle(SOLID_FILL,7);
   floodfill(572,326,WHITE);

     //coloring for fight woofer  part 2
   setfillstyle(SOLID_FILL,8); //circle 1
   floodfill(572,364,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 2
   floodfill(589,364,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 3
   floodfill(572,388,WHITE);
   setfillstyle(SOLID_FILL,8);  //circle 4
   floodfill(587,388,WHITE);
   setfillstyle(SOLID_FILL,8);  //rectangle
   floodfill(569,347,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(583,347,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(569,375,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(583,375,WHITE);
   setfillstyle(SOLID_FILL,8);
   floodfill(567,399,WHITE);
   setfillstyle(SOLID_FILL,7);
   floodfill(572,405,WHITE);

  /* //trying to put lights on floor
   rectangle(280,345,286,355);
   setfillstyle(SOLID_FILL,8);
   floodfill(282,346,WHITE);
   circle(283,346,2);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(283,345,WHITE);
*/


   line(63,290,547,290);
   line(63,291,56,294); //dance floor side line like this /
   line(56,294,56,360); //dance floor | line left
   line(547,291,554,294); //dance floor side line like this \
   line(554,294,554,360);  //dance floor | right line
   line(56,360,554,360);// dance floor line front
   setfillstyle(1,GREEN);   //left side / fill color green
   floodfill(58,296,WHITE);
   setfillstyle(1,GREEN);  //right side \ fill color green
   floodfill(548,296,WHITE);
   setfillstyle(1,GREEN);   //middle dance floor fill color green
   floodfill(88,299,WHITE);
  // setcolor(GREEN);
   rectangle(55,361,555,420);//down rectangle
   setfillstyle(1,RED);   //center fill of downside
   floodfill(265,365,WHITE);
   setfillstyle(1,RED);
   floodfill(56,363,WHITE);
   setfillstyle(1,RED);
   floodfill(553,363,WHITE);

}

void people(){
   int i;
   int j;
//  int flag=1;
   //  circle(260,210,10);
    // line(260,220,260,250);
    // line(260,250,270,270);
    // line(260,250,250,270);
    // line(260,220,270,240);
    // line(260,220,250,240);

      for(i=55;i<550;i=i+30)
      {
       circle(i,440,8);         //head
       line(i,448,i,468);      //body
       line(i,468,i+10,488);  //leg
       line(i,468,i-10,488);
       line(i,458,i+6,454);   //hand part 1
       line(i,458,i-6,454);

    //   line(61,454,61,450);
     //  line(61,454,58,450);
     //  line(49,454,49,450);
     //  line(49,454,52,450);
      }
	  
	  }
	  

  //    delay(450);
    //  setcolor(0);
 //    while(flag!=0){
 
 void clapping() {
 int i,j;
 for(j=0;j<10;j++){
   setcolor(WHITE);
     for(i=55;i<550;i=i+30)
     {
      line(i+6,454,i+6,450);
      line(i-6,454,i-6,450);
     }
     delay(450);
     setcolor(0);
     for(i=55;i<550;i=i+30)
     {
      line(i+6,454,i+6,450);
      line(i-6,454,i-6,450);
     }
     setcolor(WHITE);
     for(i=55;i<550;i=i+30){
     line(i+6,454,i+3,450);
     line(i-6,454,i-3,450);
     }
     delay(450);
     setcolor(0);
     for(i=55;i<550;i=i+30){
     line(i+6,454,i+3,450);
     line(i-6,454,i-3,450);
     }
     }


}
