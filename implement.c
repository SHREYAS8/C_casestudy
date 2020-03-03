/* Name        : SHREYAS C N
   Employee ID : 142897
   Version     : 1.0v
*/

#include "mobile.h"

void read (m_phone* specs)
{
    printf("\nEnter the unique model no. :");
    scanf("%d", &specs->model);
    printf("Enter the OEM :");
    scanf("%s", &specs->OEM);
    printf("Enter the display size :");
    scanf("%f", &specs->display);
    printf("Enter the battery capacity :");
    scanf("%u", &specs->battery);
    printf("Enter the phone memory :");
    scanf("%u", &specs->RAM);
    printf("Enter the internal storage :");
    scanf("%du", &specs->ROM);
    printf("Enter the camera resolution :");
    scanf("%u", &specs->camera_res);
    printf("Enter the price :");
    scanf("%u", &specs->price);
}

void read_all (m_phone* specs, int n)
{
    int i;
    for(i=0; i<n; i++)
        read(&specs[i]);
}

void disp (m_phone* specs)
{
    printf("\nModel :%d", specs->model);
    printf("\nOEM :%s", specs->OEM);
    printf("\nDisplay size :%f inches", specs->display);
    printf("\nBattery capacity :%u mAH", specs->battery);
    printf("\nPhone memory :%u GB", specs->RAM);
    printf("\nInternal storage :%u GB", specs->ROM);
    printf("\nCamera resolution :%u MP", specs->camera_res);
    printf("\nPrice :%u rs\n", specs->price);
}

void disp_model (m_phone* specs, int n, int m_no)
{
    int i;
    for (i=0; i<n; i++)
    {
        if ((specs+i)->model == m_no)
        {
            disp(specs+i);
            break;
        }
        else
        {
            printf("Invalid no.");
            break;
        }
    }
}

float avg_p (m_phone* specs, int n)
{
    int i,sum=0;
    for (i=0; i<n; i++)
       sum+= (specs+i)->price;
    return(sum/n);
}

void max_batt (m_phone* specs, int n)
{
    int i, max_b = 0, k=0;
    for (i=0; i<n; i++)
    {
        if(max_b<(specs+i)->battery)
        {
            max_b = (specs+i)->battery;
            k=i;
        }
    }
    disp(specs+k);
}

void max_res (m_phone* specs, int n)
{
    int i, max_r = 0, k=0;
    for (i=0; i<n; i++)
    {
        if(max_r<(specs+i)->camera_res)
        {
            max_r = (specs+i)->camera_res;
            k=i;
        }
    }
    disp(specs+k);
}

int price_model (m_phone* specs, int n, int m_p, int M_P )
{
    int i, k=0;
    for (i=0; i<n; i++)
    {
        if((specs+i)->price > m_p && (specs+i)->price <= M_P)
            k++;
    }
    return k;
}

int ROM_min (m_phone* specs, int n)
{
    int i, k=0;
    for (i=0; i<n; i++)
    {
        if(((specs+i)->ROM) <= 32)
            k++;
    }
    return k;
}
