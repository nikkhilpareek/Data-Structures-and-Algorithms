long long int totalFine(int n, int date, int car[], int fine[]){
        long long int amt = 0;
        for(int i = 0; i<n; i++){
            if(date%2 == 0 && car[i]%2 != 0){
                amt+=fine[i];    
            }else if(date%2 != 0 && car[i]%2 == 0){
                amt+= fine[i];
                }
            }
        return amt;
}
