#include <stdio.h>

int main() {
    float m_consume  ,c_consume,o_consume,hours,
    rate;
    float total_consume_hr, total_consume_day,mothly_consumed,mothly_bill;

    printf("Enter power consumed by monitor (in Wh): ");
    scanf("%f", &m_consume);

    printf("Enter power consumed by CPU (in Wh): ");
    scanf("%f", &c_consume);

    printf("Enter power consumed by other devices (in Wh): ");
    scanf("%f", &o_consume);

    printf("Enter number of hours used per day: ");
    scanf("%f", &hours);

    printf("Enter rate per kWh: ");
    scanf("%f", &rate);

    total_consume_hr = m_consume + c_consume + o_consume;
    total_consume_day = total_consume_hr * hours;
    mothly_bill = (30*total_consume_day / 1000) * rate;
    mothly_consumed = total_consume_day * 30 / 1000;
    printf("Monthly consumption units (in kWh): %.2f\n", mothly_consumed);

    printf("Monthly Payable bill: %.2f\n", mothly_bill);

    return 0;
}
