#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss_percent;
    
    scanf("%f %f", &cost_price, &selling_price);
    
    if (selling_price > cost_price) {
        profit_loss_percent = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit %.0f%%", profit_loss_percent);
    }
    else if (selling_price < cost_price) {
        profit_loss_percent = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss %.0f%%", profit_loss_percent);
    }
    else {
        printf("No Profit No Loss");
    }
    
    return 0;
}
