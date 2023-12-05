string oddEven(int N){
    // Write your code here.
    if(N&(N-1) == N-1) return "odd";
    else return "even";
}