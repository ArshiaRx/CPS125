/*program #2*/
#include <stdio.h>
#define MINUTE 60
#define M_LITER 1000
#define SENTINEL 5

int     get_problem(void);
void    get_n_hours(double* num_hours);  /*Newly Add by prof*/
void    get_rate_drop_factor(double* ml_hour, double* drops_ml);
void    get_kg_rate_conc(double* mg_kg_hour, double* pat_weight, double* mg_ml);
void    get_units_conc(double* untis_hour, double* units_ml);
double  fig_drops_min(double ml_hour, double drops_ml);
double  fig_ml_hr(double num_hours);
double  by_weight(double mg_kg_hr, double pat_weight, double mg_ml);
double  by_units(double units_hour, double units_ml);

/* function displays menu and gets user's input*/
int get_problem(void)
{
    int menu_number;
    /*0.5 mark*/
    printf("Enter the number of the problem you wish to solve\n");
    printf("\tGIVEN A MEDICAL ORDER IN \t\t\t CALCULATE RATE IN\n");
    printf("\t (1) ml/hr & tubing drop factor\t\t\t drops/min\n");
    printf("\t (2) 1L for n hr \t\t\t\t ml/hr\n");
    printf("\t (3) mg/kg/hr & concentration in mg/ml\t\t ml/hr\n");
    printf("\t (4) units/hr &concentration in units/ml \t ml/hr\n");
    printf("\t (5) QUIT\n");
    scanf("%d", &menu_number);
    fflush(stdin);

    return (menu_number);
}

/* function to get the number of hours */
void get_n_hours(double* num_hours)
{                               /*0.5 mark*/
    printf("Enter the number of hours it takes to deliver 1 Liter: ");
    scanf("%lf", num_hours);
    fflush(stdin);
}

/* function prompts the user to enter rate and tubing's drop factor then
returns values through output parameters */
void get_rate_drop_factor(double* ml_hour, double* drops_ml)
{                               /*1 mark*/
    printf("Enter rate in ml/hr: ");
    scanf("%lf", ml_hour);
    fflush(stdin);
    printf("Enter tubing drop factor: ");
    scanf("%lf", drops_ml);
    fflush(stdin);
}

/* function prompts for rate, patient's weight, and concentration then
returns values through output parameters */
void get_kg_rate_conc(double* mg_kg_hour, double* pat_weight, double* mg_ml)
{                               /*1 mark*/
    printf("Enter the rate in mg/kg/hr: ");
    scanf("%lf", mg_kg_hour);
    fflush(stdin);
    printf("Enter the Patient's weight in kg: ");
    scanf("%lf", pat_weight);
    fflush(stdin);
    printf("Enter the Concentration in mg/ml: ");
    scanf("%lf", mg_ml);
    fflush(stdin);
}

/* function prompts for rate and concentration then returns values
through output parameters */
void get_units_conc(double* units_hour, double* units_ml)
{                           /*1 mark*/
    printf("Enter the rate in units/hr: ");
    scanf("%lf", units_hour);
    fflush(stdin);
    printf("Enter the concentration in units/ml: ");
    scanf("%lf", units_ml);
    fflush(stdin);
}

/* function takes as input rate and concentration then returns as
its value the result of dividing their product by MINUTE */
double fig_drops_min(double ml_hour, double drops_ml)
{                           /*1 mark*/
    double answer;
    answer = ((ml_hour * drops_ml) / MINUTE);
    return answer;
}

/* function takes as input num_hours and returns as its value the
quotient of * 1000 and num_hours */
double fig_ml_hr(double num_hours)
{                           /*1 mark*/
    double answer;
    answer = (1.0 / num_hours) * M_LITER;
    return answer;
}

/* function takes 3 inputs and returns as its value the product of
rate and patient's weight divided by concentration */
double by_weight(double mg_kg_hr, double pat_weight, double mg_ml)
{                           /*1 mark*/
    double answer;
    answer = ((mg_kg_hr) * (pat_weight)) / mg_ml;
    return answer;
}

/* function takes 2 inputs and returns as its value the quotient of
units_hr and units_ml*/
double by_units(double units_hour, double units_ml)
{                           /*1 mark*/
    double answer;
    answer = (units_hour) / units_ml;
    return answer;
}

int main(void)
{
    int    value;        /*Option chosen*/
    double answer;       /*Return value of functions*/
    double ml_hour;      /*Rate inn ml/hr*/
    double drops_ml;     /*Tubing factor in drops/ml*/
    double mg_kg_hour;   /*Rate in mg/kg/hr*/
    double pat_weight;   /*Patient's weight in kg*/
    double mg_ml;        /*Concentration in mg/ml*/
    double units_hour;   /*Rate in units/hr*/
    double units_ml;     /*Concentration units/ml*/
    double num_hours;    /*Number of hours for 1 L to be delivered*/

    value = get_problem();       /*0.25 mark*/

    while (value != SENTINEL)                    /*0.5 mark*/
    {
        switch (value)
        {                        /*1 mark*/
        case 1:
            get_rate_drop_factor(&ml_hour, &drops_ml);
            printf("\nRate in drops/min is: %lf\n\n", fig_drops_min(ml_hour, drops_ml));
            break;
        case 2:
            get_n_hours(&num_hours);
            printf("\nRate in ml/hr is: %lf\n\n", fig_ml_hr(num_hours));
            break;
        case 3:
            get_kg_rate_conc(&mg_kg_hour, &pat_weight, &mg_ml);
            printf("\nRate in ml/hr is: %lf\n\n", by_weight(mg_kg_hour, pat_weight, mg_ml));
            break;
        case 4:
            get_units_conc(&units_hour, &units_ml);
            printf("\nRate in ml/hr is: %lf\n\n", by_units(units_hour, units_ml));
            break;
        case 5:
            printf("EXITING PROGRAM\n\n");
            return 5;
            break;
        default:
            printf("Wrong input.\n");
        }
        value = get_problem();    /*0.25 mark*/
    }

    return 0;
}




