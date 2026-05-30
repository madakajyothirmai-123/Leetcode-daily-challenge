int maxProfit(int* prices, int pricesSize) {
    int i,profit;
    int maxprofit=0;
    for(i=1;i<pricesSize;i++){
        profit=prices[i]-prices[i-1];
        if(profit>0){
            maxprofit=maxprofit+profit;
        }
    }
    return maxprofit;
}
