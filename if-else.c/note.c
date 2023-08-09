#include<stdio.h>
int main()
{
	int note,a1,c2,c3,c4,c5,c6,c7,c8,c9,cq,p,r1,p2,p3,p4,p5,p6,p7,p8,p9,total;
	printf("enter the no. of note: ");
	scanf("%d",&note);
	if (money>=2000) {
	note=money/2000;
	c1=c1+1;
	p=money-(c1*2000);
	} else if  
        (money>=500) {
        note=money/500;
	c2=c2+1;
	p1=money-(c2*500);
	} else if
	(money>=200) {
	note=money/200;
	c3=c3+1;
	p2=money-(c3*200);
	} else if  
        (money>=100) {
        note=money/100;
	c4=c4+1;
	p3=money-(c4*100);
        } else if 
        (money>=50) {
	note=money/50;
	c5=c5+1;
	p4=money-(c5*50);
	} else if  
        (money>=20){
        note=money/20;
	c6=c6+1;
	p5=money-(c6*20);
	} else if 
	(money>=10) {
	note=money/10;
	c7=c7+1;
	p6=money-(c7*10);
	} else if  
        (money>=5){
        note=money/5;
	c8=c8+1;
	p7=money-(c8*5);
	} else if 
	(money>=2) {
	note=money/2;
	c9=c9+1;
	p8=money-(c9*2);
	} else if  
        (money>=1){
        note=money/1;
	cq=cq+1;
	p9=money-(cq*1);
	} else {
	total=c1+c2+c3+c4+c5+c6+c7+c8+c9+cq;
	printf("%d",total);
	}
        return 0;	
}
