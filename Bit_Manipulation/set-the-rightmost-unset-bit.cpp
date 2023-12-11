int setBits(int N){
    // Write your code here.
    int n = N;
    int i = 0;

    // while((1 << i) <= N) {
    //     i++;
    //     if(N == (1 << i)) return N;
    // }

    // n = N;
    // i=0;
    int check = 0;
    while(n) {
        int rem = n%2;
        if(!rem) {
            check = 1;
            break;
        }
        i++;
        n = n >> 1;
    }

    return check ? N+(1<<i) : N;
}