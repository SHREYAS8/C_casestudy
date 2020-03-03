/* Name        : SHREYAS C N
   Employee ID : 142897
   Version     : 1.0v
*/

#include "mobile.h"

int main()
{
    int m_no, m_p, M_P, cond=1, data, cnt1, cnt2;
    float avg_price;
    m_phone specs[size];
    printf("\nWELCOME TO SMARTPHONE DATA CENTRE\n");
    printf("\nEnter the data of %d mobile models\n", size);
    read_all(specs, size);
    printf("\nEnter a number(1-7) to obtain the data analysed shown below");
    printf("\n1. Enter unique model no. to view the specifications");
    printf("\n2. View the average price of the mobiles");
    printf("\n3. View the mobile details with highest battery capacity");
    printf("\n4. View the mobile details with highest camera resolution");
    printf("\n5. Number of models in the given price range");
    printf("\n6. Number of models with minimum internal storage");
    printf("\n7. To close the data center\n");

    while(cond)
    {
        printf("\nEnter a no. to view the required data :");
        scanf("%d", &data);

        switch(data)
        {
            case 1: printf("\nEnter the model no. :");
                    scanf("%d", &m_no);
                    disp_model(specs, size, m_no);
                    break;
            case 2: avg_price = avg_p(specs, size);
                    printf("The average price is %f rs\n", avg_price);
                    break;
            case 3: max_batt(specs, size);
                    break;
            case 4: max_res(specs, size);
                    break;
            case 5: printf("\nEnter the minimum and maximum range :");
                    scanf("%d", &m_p);
                    scanf("%d", &M_P);
                    cnt1 = price_model(specs, size, m_p, M_P);
                    printf("\nNo. of mobiles in the given price range : %d\n",cnt1);
                    break;
            case 6: cnt2 = ROM_min(specs, size);
                    printf("\nNo. of mobiles with minimum ROM : %d\n",cnt2);
                    break;
            case 7: printf("Thank you for using SMARTPHONE DATA CENTRE");
                    exit(0);
            default: printf("\nInvalid input, please enter a valid input");
                     break;
        }
    }
}
