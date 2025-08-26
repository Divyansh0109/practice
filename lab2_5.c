#include<stdio.h>
int main() {
    int width,height;
    int bits_per_pixel;
    double total_bits, total_mb,total_time;
    
    printf("Enter Image width: ");
    scanf("%d", &width);
    printf("Enter Image height: ");
    scanf("%d", &height);
    printf("Enter bits per pixel: ");
    scanf("%d", &bits_per_pixel);
    total_bits = width * height * bits_per_pixel;
    total_mb = total_bits /(1024.0 * 1024.0);
    double total_bits_100 = total_bits * 100;
    double transfer_rate = 512*1024.0;
    total_time = total_bits_100 / transfer_rate;

    printf("Total bits: %.2f\n", total_bits);
    printf("Total MB: %.6f\n", total_mb);
    printf("Total time (seconds): %.6f\n", total_time);
    return 0;
}