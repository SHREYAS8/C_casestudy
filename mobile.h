/* Name        : SHREYAS C N
   Employee ID : 142897
   Version     : 1.0v
*/

#include <stdio.h>
#include <stdlib.h>
#define size 4

//typedef enum OEM {apple, samsung, oneplus, oppo, redmi, vivo} OEM;
typedef unsigned int u_int;
typedef struct
{
    int model;
    float display;
    u_int battery;
    u_int RAM;
    u_int ROM;
    u_int camera_res;
    u_int price;
    //OEM company;
    char OEM[10];
}m_phone;

void read (m_phone*);
void read_all (m_phone*, int);
void disp (m_phone*);

void disp_model (m_phone*, int, int);
float avg_p (m_phone*, int);
void max_batt (m_phone*, int);
void max_res (m_phone*, int);
int price_model (m_phone*, int, int, int);
int ROM_min (m_phone*, int);


