#include<stdio.h>
void poll_sensors(float *v_ptr, float*i_pr);
float calculate_power(float*v_ptr, float*i_pr);

//GLOBAL VARIABLES TO BE USED IN FUNCTIONS
float grid_voltage = 0.0f;
float load_current = 0.0f;
int main()
{

    float apparent_power = 0.0f;

// FUNCTION CALLS
    poll_sensors(&grid_voltage, &load_current);
    apparent_power = calculate_power(&grid_voltage,&load_current);

//DISPLAY OF RESULTS
    printf("-----ELECTRICITY COMPANY OF GHANA DATA SHEET-----\n");
    printf("Grid Voltage: %.2f V\nLine Current: %.2f A\n", grid_voltage, load_current);
    printf("APPARENT POWER: %.2f VA", apparent_power);
    return 0;
}
// FUNCTION DECLARATIONS
void poll_sensors(float *v_ptr, float *i_pr)
{
    printf("Enter the grid voltage: ");
    scanf("%f", v_ptr);
    printf("Enter the line current: ");
    scanf("%f", i_pr);
}
float calculate_power(float*v_ptr, float*i_pr)
{
    return (*v_ptr) * (*i_pr);
}