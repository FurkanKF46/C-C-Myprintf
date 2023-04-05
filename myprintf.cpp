#include<iostream>
#include<stdio.h>
#include<stdarg.h>
//FURKAN KOCA 221030910028
using namespace std;
void myprintf(const char *format,...);
int main(int argc, char **argv) {
    int tamsayi=125;
    float ondalik=526.14;
    char *cumle="C++ İleri Konular";
    myprintf("C++ Ileri Konular\n");
myprintf("Tamsayi=%d\n",tamsayi);
myprintf("Ondalik=%f\n",ondalik);
return 0;
}
void myprintf(const char *format,...) {
va_list parametreler;
va_start(parametreler,format);
while (*format!='\0') 
{
 if(*format=='%') {
    format++;
    if(*format=='d') {
        int val= va_arg(parametreler,int);
        printf("%d",val);
    }
    else if(*format=='s'){
        char * val= va_arg(parametreler,char*);
        printf("%s",val);
    }
    else if(*format=='c') {
        char val= va_arg(parametreler,int);
        printf("%c",val);
    }
    else if (*format=='f') {
        double val = va_arg(parametreler,double);
        printf("%f",val);
    }
    format++;
 }
 else {
   printf("%c",*format);
    format++;
 }
}
va_end(parametreler);

}